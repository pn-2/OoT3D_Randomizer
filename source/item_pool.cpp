#include "item_pool.hpp"

#include "dungeon.hpp"
#include "fill.hpp"
#include "item_list.hpp"
#include "item_location.hpp"
#include "pool_functions.hpp"
#include "random.hpp"
#include "settings.hpp"
#include "spoiler_log.hpp"

using namespace Settings;
using namespace Dungeon;

std::vector<ItemKey> ItemPool               = {};
std::vector<ItemKey> PendingJunkPool        = {};
std::vector<u8> IceTrapModels               = {};

const std::array<ItemKey, 9> dungeonRewards = {
    KOKIRI_EMERALD,
    GORON_RUBY,
    ZORA_SAPPHIRE,
    FOREST_MEDALLION,
    FIRE_MEDALLION,
    WATER_MEDALLION,
    SPIRIT_MEDALLION,
    SHADOW_MEDALLION,
    LIGHT_MEDALLION,
};

const std::array<ItemKey, 16> JunkPoolItems = {
    BOMBS_5,
    BOMBS_10,
    BOMBS_20,
    DEKU_NUTS_5,
    DEKU_STICK_1,
    DEKU_SEEDS_30,
    RECOVERY_HEART,
    ARROWS_5,
    ARROWS_10,
    ARROWS_30,
    BLUE_RUPEE,
    RED_RUPEE,
    PURPLE_RUPEE,
    HUGE_RUPEE,
    DEKU_NUTS_10,
    ICE_TRAP,
};

const std::array<ItemKey, 59> alwaysItems = {
    BIGGORON_SWORD,
    BOOMERANG,
    LENS_OF_TRUTH,
    MEGATON_HAMMER,
    IRON_BOOTS,
    GORON_TUNIC,
    ZORA_TUNIC,
    HOVER_BOOTS,
    MIRROR_SHIELD,
    SHARD_OF_AGONY,
    FIRE_ARROWS,
    ICE_ARROWS,
    LIGHT_ARROWS,
    DINS_FIRE,
    FARORES_WIND,
    NAYRUS_LOVE,
    GREEN_RUPEE,
    // 2 progressive hookshots
    PROGRESSIVE_HOOKSHOT,
    PROGRESSIVE_HOOKSHOT,
    DEKU_SHIELD,
    HYLIAN_SHIELD,
    // 3 progressive strength upgrades
    PROGRESSIVE_STRENGTH,
    PROGRESSIVE_STRENGTH,
    PROGRESSIVE_STRENGTH,
    // 2 progressive scales
    PROGRESSIVE_SCALE,
    PROGRESSIVE_SCALE,
    // 3 progressive Bows
    PROGRESSIVE_BOW, 
    PROGRESSIVE_BOW,
    PROGRESSIVE_BOW,
    // 3 progressive bullet bags
    PROGRESSIVE_SLINGSHOT,
    PROGRESSIVE_SLINGSHOT,
    PROGRESSIVE_SLINGSHOT,
    // 3 progressive bomb bags
    PROGRESSIVE_BOMB_BAG,
    PROGRESSIVE_BOMB_BAG,
    PROGRESSIVE_BOMB_BAG,
    // 2 progressive wallets
    PROGRESSIVE_WALLET,
    PROGRESSIVE_WALLET,
    // 2 progressive magic meters
    PROGRESSIVE_MAGIC_METER,
    PROGRESSIVE_MAGIC_METER,
    DOUBLE_DEFENSE,
    // 2 stick upgrades
    PROGRESSIVE_STICK_UPGRADE,
    PROGRESSIVE_STICK_UPGRADE,
    // 2 nut upgrades
    PROGRESSIVE_NUT_UPGRADE,
    PROGRESSIVE_NUT_UPGRADE,
    // 6 recovery hearts
    RECOVERY_HEART,
    RECOVERY_HEART,
    RECOVERY_HEART,
    RECOVERY_HEART,
    RECOVERY_HEART,
    RECOVERY_HEART,
    BOMBS_5,
    BOMBS_5,
    BOMBS_10,
    BOMBS_20,
    ARROWS_5,
    ARROWS_10,
    ARROWS_10,
    ARROWS_10,
    TREASURE_GAME_HEART,
};

const std::array<ItemKey, 44> easyItems = {
    BIGGORON_SWORD,
    KOKIRI_SWORD,
    MASTER_SWORD,
    BOOMERANG,
    LENS_OF_TRUTH,
    MEGATON_HAMMER,
    IRON_BOOTS,
    GORON_TUNIC,
    ZORA_TUNIC,
    HOVER_BOOTS,
    MIRROR_SHIELD,
    FIRE_ARROWS,
    LIGHT_ARROWS,
    DINS_FIRE,
    PROGRESSIVE_HOOKSHOT,
    PROGRESSIVE_STRENGTH,
    PROGRESSIVE_SCALE,
    PROGRESSIVE_WALLET,
    PROGRESSIVE_MAGIC_METER,
    PROGRESSIVE_STICK_UPGRADE,
    PROGRESSIVE_NUT_UPGRADE,
    PROGRESSIVE_BOW,
    PROGRESSIVE_SLINGSHOT,
    PROGRESSIVE_BOMB_BAG,
    DOUBLE_DEFENSE,
    // 16 Heart Containers
    HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER,
    HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER,
    HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER,
    HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER,
    // 3 heart pieces
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
};

const std::array<ItemKey, 43> normalItems = {
    // 35 pieces of heart
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART, 
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART, 
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART, 
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
    PIECE_OF_HEART,  PIECE_OF_HEART,  PIECE_OF_HEART,
    // 8 heart containers
    HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER,
    HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER, HEART_CONTAINER,
};

// Deku Tree
const std::array<ItemKey, 2> DT_Vanilla = {
    RECOVERY_HEART,
    RECOVERY_HEART,
};
const std::array<ItemKey, 3> DT_MQ = {
    DEKU_SHIELD,
    DEKU_SHIELD,
    PURPLE_RUPEE,
};

// Dodongo's Cavern
const std::array<ItemKey, 1> DC_Vanilla = {
    RED_RUPEE,
};
const std::array<ItemKey, 2> DC_MQ = {
    HYLIAN_SHIELD,
    BLUE_RUPEE,
};

// Jabu-Jabu's Belly
const std::array<ItemKey, 7> JB_MQ = {
    DEKU_NUTS_5,
    DEKU_NUTS_5,
    DEKU_NUTS_5,
    DEKU_NUTS_5,
    RECOVERY_HEART,
    DEKU_SHIELD,
    DEKU_STICK_1,
};

// Forest Temple
const std::array<ItemKey, 3> FoT_Vanilla = {
    RECOVERY_HEART,
    ARROWS_10,
    ARROWS_30,
};
const std::array<ItemKey, 1> FoT_MQ = {
    ARROWS_5,
};

// Fire Temple
const std::array<ItemKey, 1> FiT_Vanilla = {
    HUGE_RUPEE,
};
const std::array<ItemKey, 2> FiT_MQ = {
    BOMBS_20,
    HYLIAN_SHIELD,
};

// Spirit Temple
const std::array<ItemKey, 4> SpT_Vanilla = {
    DEKU_SHIELD,
    DEKU_SHIELD,
    RECOVERY_HEART,
    BOMBS_20,
};
const std::array<ItemKey, 3> SpT_MQ = {
    PURPLE_RUPEE,
    PURPLE_RUPEE,
    ARROWS_30,
};

// Shadow Temple
const std::array<ItemKey, 1> ShT_Vanilla = {
    ARROWS_30,
};
const std::array<ItemKey, 3> ShT_MQ = {
    ARROWS_5,
    ARROWS_5,
    RED_RUPEE,
};

// Bottom of the Well
const std::array<ItemKey, 7> BW_Vanilla = {
    RECOVERY_HEART, BOMBS_10, HUGE_RUPEE, DEKU_NUTS_5, DEKU_NUTS_10, DEKU_SHIELD, HYLIAN_SHIELD,
};

// Gerudo Training Ground
const std::array<ItemKey, 4> GTG_Vanilla = {
    ARROWS_30,
    ARROWS_30,
    ARROWS_30,
    HUGE_RUPEE,
};
const std::array<ItemKey, 5> GTG_MQ = {
    TREASURE_GAME_GREEN_RUPEE, TREASURE_GAME_GREEN_RUPEE, ARROWS_10, GREEN_RUPEE, PURPLE_RUPEE,
};

// Ganon's Castle
const std::array<ItemKey, 4> GC_Vanilla = {
    BLUE_RUPEE,
    BLUE_RUPEE,
    BLUE_RUPEE,
    ARROWS_30,
};
const std::array<ItemKey, 5> GC_MQ = {
    ARROWS_10, ARROWS_10, BOMBS_5, RED_RUPEE, RECOVERY_HEART,
};

const std::array<ItemKey, 11> normalBottles = {
    EMPTY_BOTTLE,          BOTTLE_WITH_MILK, BOTTLE_WITH_RED_POTION, BOTTLE_WITH_GREEN_POTION, BOTTLE_WITH_BLUE_POTION,
    BOTTLE_WITH_FAIRY,     BOTTLE_WITH_FISH, BOTTLE_WITH_BUGS,       BOTTLE_WITH_POE,          BOTTLE_WITH_BIG_POE,
    BOTTLE_WITH_BLUE_FIRE,
};

const std::array<ItemKey, 28> normalRupees = {
    BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,
    BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   BLUE_RUPEE,   RED_RUPEE,
    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE,
    PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE, HUGE_RUPEE,   HUGE_RUPEE,   HUGE_RUPEE,
};

const std::array<ItemKey, 28> shopsanityRupees = {
    BLUE_RUPEE,   BLUE_RUPEE,   RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,
    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    RED_RUPEE,    PURPLE_RUPEE, PURPLE_RUPEE,
    PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE, PURPLE_RUPEE,
    PURPLE_RUPEE, HUGE_RUPEE,   HUGE_RUPEE,   HUGE_RUPEE,   HUGE_RUPEE,   HUGE_RUPEE,   PROGRESSIVE_WALLET,
};

const std::array<ItemKey, 19> dekuScrubItems = {
    DEKU_NUTS_5,    DEKU_NUTS_5, DEKU_NUTS_5, DEKU_NUTS_5, DEKU_NUTS_5,    DEKU_STICK_1,   BOMBS_5,
    BOMBS_5,        BOMBS_5,     BOMBS_5,     BOMBS_5,     RECOVERY_HEART, RECOVERY_HEART, RECOVERY_HEART,
    RECOVERY_HEART, BLUE_RUPEE,  BLUE_RUPEE,  BLUE_RUPEE,  BLUE_RUPEE,
};

const std::array<ItemKey, 12> songList = {
    ZELDAS_LULLABY,   EPONAS_SONG,      SUNS_SONG,      SARIAS_SONG,       SONG_OF_TIME,       SONG_OF_STORMS,
    MINUET_OF_FOREST, PRELUDE_OF_LIGHT, BOLERO_OF_FIRE, SERENADE_OF_WATER, NOCTURNE_OF_SHADOW, REQUIEM_OF_SPIRIT,
};

const std::array<ItemKey, 10> tradeItems = {
    POCKET_EGG,
    // POCKET_CUCCO,
    COJIRO,
    ODD_MUSHROOM,
    POACHERS_SAW,
    BROKEN_SWORD,
    PRESCRIPTION,
    EYEBALL_FROG,
    EYEDROPS,
    CLAIM_CHECK,
};

// Enemy Souls
const std::array<ItemKey, 47> enemySouls = {
    SOUL_ITEM_POE,          SOUL_ITEM_OCTOROK,       SOUL_ITEM_KEESE,       SOUL_ITEM_TEKTITE,    SOUL_ITEM_LEEVER,
    SOUL_ITEM_PEAHAT,       SOUL_ITEM_LIZALFOS,      SOUL_ITEM_SHABOM,      SOUL_ITEM_BIRI_BARI,  SOUL_ITEM_TAILPASARAN,
    SOUL_ITEM_SKULLTULA,    SOUL_ITEM_TORCH_SLUG,    SOUL_ITEM_STINGER,     SOUL_ITEM_MOBLIN,     SOUL_ITEM_ARMOS,
    SOUL_ITEM_DEKU_BABA,    SOUL_ITEM_BUBBLE,        SOUL_ITEM_FLYING_TRAP, SOUL_ITEM_BEAMOS,     SOUL_ITEM_WALLMASTER,
    SOUL_ITEM_REDEAD_GIBDO, SOUL_ITEM_SHELL_BLADE,   SOUL_ITEM_LIKE_LIKE,   SOUL_ITEM_TENTACLE,   SOUL_ITEM_ANUBIS,
    SOUL_ITEM_SPIKE,        SOUL_ITEM_SKULL_KID,     SOUL_ITEM_FREEZARD,    SOUL_ITEM_DEKU_SCRUB, SOUL_ITEM_WOLFOS,
    SOUL_ITEM_STALCHILD,    SOUL_ITEM_GUAY,          SOUL_ITEM_DOOR_MIMIC,  SOUL_ITEM_STALFOS,    SOUL_ITEM_DARK_LINK,
    SOUL_ITEM_FLARE_DANCER, SOUL_ITEM_DEAD_HAND,     SOUL_ITEM_GERUDO,      SOUL_ITEM_GOHMA,      SOUL_ITEM_DODONGO,
    SOUL_ITEM_BARINADE,     SOUL_ITEM_PHANTOM_GANON, SOUL_ITEM_VOLVAGIA,    SOUL_ITEM_MORPHA,     SOUL_ITEM_BONGO_BONGO,
    SOUL_ITEM_TWINROVA,     SOUL_ITEM_GANON,
};
const std::array<ItemKey, 9> bossSouls = {
    SOUL_ITEM_GOHMA,  SOUL_ITEM_DODONGO,     SOUL_ITEM_BARINADE, SOUL_ITEM_PHANTOM_GANON, SOUL_ITEM_VOLVAGIA,
    SOUL_ITEM_MORPHA, SOUL_ITEM_BONGO_BONGO, SOUL_ITEM_TWINROVA, SOUL_ITEM_GANON,
};

// Ocarina Buttons
const std::array<ItemKey, 5> ocarinaNoteButtons = {
    OCA_BUTTON_ITEM_L, OCA_BUTTON_ITEM_R, OCA_BUTTON_ITEM_X, OCA_BUTTON_ITEM_Y, OCA_BUTTON_ITEM_A,
};

void AddItemToPool(std::vector<ItemKey>& pool, ItemKey item, size_t count /*= 1*/) {
    pool.insert(pool.end(), count, item);
}

template <typename FromPool> static void AddItemsToPool(std::vector<ItemKey>& toPool, const FromPool& fromPool) {
    AddElementsToPool(toPool, fromPool);
}

static void AddItemToMainPool(const ItemKey item, size_t count = 1) {
    ItemPool.insert(ItemPool.end(), count, item);
}

static void AddRandomBottle(std::vector<ItemKey>& bottlePool) {
    AddItemToMainPool(RandomElement(bottlePool, true));
}

ItemKey GetJunkItem() {
    if (IceTrapValue.Is(ICETRAPS_MAYHEM) || IceTrapValue.Is(ICETRAPS_ONSLAUGHT)) {
        return ICE_TRAP;
    } else if (IceTrapValue.Is(ICETRAPS_EXTRA)) {
        return RandomElement(JunkPoolItems);
    }
    // Ice Trap is the last item in JunkPoolItems, so subtract 1 to never hit that index
    u8 idx = Random(0, JunkPoolItems.size() - 1);
    return JunkPoolItems[idx];
}

static ItemKey GetPendingJunkItem() {
    if (PendingJunkPool.empty()) {
        return GetJunkItem();
    }

    return RandomElement(PendingJunkPool, true);
}

// Replace junk items in the pool with pending junk
static void ReplaceMaxItem(const ItemKey itemToReplace, int max) {
    int itemCount = 0;
    for (size_t i = 0; i < ItemPool.size(); i++) {
        if (ItemPool[i] == itemToReplace) {
            if (itemCount >= max) {
                ItemPool[i] = GetJunkItem();
            }
            itemCount++;
        }
    }
}

void PlaceJunkInExcludedLocation(const LocationKey il) {
    // place a junk item in this location
    for (size_t i = 0; i < ItemPool.size(); i++) {
        if (ItemTable(ItemPool[i]).IsJunk()) {
            PlaceItemInLocation(il, ItemPool[i]);
            ItemPool.erase(ItemPool.begin() + i);
            return;
        }
    }
    // if no junk item was found, try placing a non-advancement item
    for (size_t i = 0; i < ItemPool.size(); i++) {
        if (!ItemTable(ItemPool[i]).IsAdvancement()) {
            PlaceItemInLocation(il, ItemPool[i]);
            ItemPool.erase(ItemPool.begin() + i);
            return;
        }
    }
    printf("ERROR: No Junk to Place!!!\n");
}

static void PlaceVanillaDekuScrubItems() {
    PlaceItemInLocation(ZR_DEKU_SCRUB_GROTTO_REAR, RED_POTION_REFILL, false, true);
    PlaceItemInLocation(ZR_DEKU_SCRUB_GROTTO_FRONT, GREEN_POTION_REFILL, false, true);
    PlaceItemInLocation(SFM_DEKU_SCRUB_GROTTO_REAR, RED_POTION_REFILL, false, true);
    PlaceItemInLocation(SFM_DEKU_SCRUB_GROTTO_FRONT, GREEN_POTION_REFILL, false, true);
    PlaceItemInLocation(LH_DEKU_SCRUB_GROTTO_LEFT, DEKU_NUTS_5, false, true);
    PlaceItemInLocation(LH_DEKU_SCRUB_GROTTO_RIGHT, BOMBS_5, false, true);
    PlaceItemInLocation(LH_DEKU_SCRUB_GROTTO_CENTER, DEKU_SEEDS_30, false, true);
    PlaceItemInLocation(GV_DEKU_SCRUB_GROTTO_REAR, RED_POTION_REFILL, false, true);
    PlaceItemInLocation(GV_DEKU_SCRUB_GROTTO_FRONT, GREEN_POTION_REFILL, false, true);
    PlaceItemInLocation(LW_DEKU_SCRUB_NEAR_DEKU_THEATER_RIGHT, DEKU_NUTS_5, false, true);
    PlaceItemInLocation(LW_DEKU_SCRUB_NEAR_DEKU_THEATER_LEFT, DEKU_STICK_1, false, true);
    PlaceItemInLocation(LW_DEKU_SCRUB_GROTTO_REAR, DEKU_SEEDS_30, false, true);
    PlaceItemInLocation(COLOSSUS_DEKU_SCRUB_GROTTO_REAR, RED_POTION_REFILL, false, true);
    PlaceItemInLocation(COLOSSUS_DEKU_SCRUB_GROTTO_FRONT, GREEN_POTION_REFILL, false, true);
    PlaceItemInLocation(DMC_DEKU_SCRUB, BOMBS_5, false, true);
    PlaceItemInLocation(DMC_DEKU_SCRUB_GROTTO_LEFT, DEKU_NUTS_5, false, true);
    PlaceItemInLocation(DMC_DEKU_SCRUB_GROTTO_RIGHT, BOMBS_5, false, true);
    PlaceItemInLocation(DMC_DEKU_SCRUB_GROTTO_CENTER, DEKU_SEEDS_30, false, true);
    PlaceItemInLocation(GC_DEKU_SCRUB_GROTTO_LEFT, DEKU_NUTS_5, false, true);
    PlaceItemInLocation(GC_DEKU_SCRUB_GROTTO_RIGHT, BOMBS_5, false, true);
    PlaceItemInLocation(GC_DEKU_SCRUB_GROTTO_CENTER, DEKU_SEEDS_30, false, true);
    PlaceItemInLocation(LLR_DEKU_SCRUB_GROTTO_LEFT, DEKU_NUTS_5, false, true);
    PlaceItemInLocation(LLR_DEKU_SCRUB_GROTTO_RIGHT, BOMBS_5, false, true);
    PlaceItemInLocation(LLR_DEKU_SCRUB_GROTTO_CENTER, DEKU_SEEDS_30, false, true);

    // Dungeon Scrubs
    if (DekuTree.IsMQ()) {
        PlaceItemInLocation(DEKU_TREE_MQ_DEKU_SCRUB, DEKU_SHIELD, false, true);
    }
    if (DodongosCavern.IsMQ()) {
        PlaceItemInLocation(DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_REAR, DEKU_STICK_1, false, true);
        PlaceItemInLocation(DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_FRONT, DEKU_SEEDS_30, false, true);
        PlaceItemInLocation(DODONGOS_CAVERN_MQ_DEKU_SCRUB_STAIRCASE, DEKU_SHIELD, false, true);
        PlaceItemInLocation(DODONGOS_CAVERN_MQ_DEKU_SCRUB_SIDE_ROOM_NEAR_LOWER_LIZALFOS, RED_POTION_REFILL, false, true);
    } else {
        PlaceItemInLocation(DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_LEFT, DEKU_NUTS_5, false, true);
        PlaceItemInLocation(DODONGOS_CAVERN_DEKU_SCRUB_SIDE_ROOM_NEAR_DODONGOS, DEKU_STICK_1, false, true);
        PlaceItemInLocation(DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_RIGHT, DEKU_SEEDS_30, false, true);
        PlaceItemInLocation(DODONGOS_CAVERN_DEKU_SCRUB_LOBBY, DEKU_SHIELD, false, true);
    }
    if (JabuJabusBelly.IsVanilla()) {
        PlaceItemInLocation(JABU_JABUS_BELLY_DEKU_SCRUB, DEKU_NUTS_5);
    }
    if (GanonsCastle.IsMQ()) {
        PlaceItemInLocation(GANONS_CASTLE_MQ_DEKU_SCRUB_LEFT, GREEN_POTION_REFILL, false, true);
        PlaceItemInLocation(GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_LEFT, BOMBS_5, false, true);
        PlaceItemInLocation(GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER, ARROWS_30, false, true);
        PlaceItemInLocation(GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_RIGHT, RED_POTION_REFILL, false, true);
        PlaceItemInLocation(GANONS_CASTLE_MQ_DEKU_SCRUB_RIGHT, DEKU_NUTS_5, false, true);
    } else {
        PlaceItemInLocation(GANONS_CASTLE_DEKU_SCRUB_CENTER_LEFT, BOMBS_5, false, true);
        PlaceItemInLocation(GANONS_CASTLE_DEKU_SCRUB_CENTER_RIGHT, DEKU_SEEDS_30, false, true);
        PlaceItemInLocation(GANONS_CASTLE_DEKU_SCRUB_RIGHT, RED_POTION_REFILL, false, true);
        PlaceItemInLocation(GANONS_CASTLE_DEKU_SCRUB_LEFT, GREEN_POTION_REFILL, false, true);
    }
}

static void PlaceVanillaMapsAndCompasses() {
    for (auto dungeon : dungeonList) {
        dungeon->PlaceVanillaMap();
        dungeon->PlaceVanillaCompass();
    }
}

static void PlaceVanillaSmallKeys() {
    for (auto dungeon : dungeonList) {
        dungeon->PlaceVanillaSmallKeys();
    }
}

static void PlaceVanillaBossKeys() {
    for (auto dungeon : dungeonList) {
        dungeon->PlaceVanillaBossKey();
    }
}

static void PlaceVanillaCowMilk() {
    PlaceItemInLocation(KF_LINKS_HOUSE_COW, MILK, false, true);
    PlaceItemInLocation(HF_COW_GROTTO_COW, MILK, false, true);
    PlaceItemInLocation(GV_COW, MILK, false, true);
    PlaceItemInLocation(KAK_IMPAS_HOUSE_COW, MILK, false, true);
    PlaceItemInLocation(DMT_COW_GROTTO_COW, MILK, false, true);
    PlaceItemInLocation(LLR_STABLES_LEFT_COW, MILK, false, true);
    PlaceItemInLocation(LLR_STABLES_RIGHT_COW, MILK, false, true);
    PlaceItemInLocation(LLR_TOWER_LEFT_COW, MILK, false, true);
    PlaceItemInLocation(LLR_TOWER_RIGHT_COW, MILK, false, true);

    if (JabuJabusBelly.IsMQ()) {
        PlaceItemInLocation(JABU_JABUS_BELLY_MQ_COW, MILK, false, true);
    }
}

static void SetScarceItemPool() {
    ReplaceMaxItem(PROGRESSIVE_BOMBCHUS, 3);
    ReplaceMaxItem(BOMBCHU_5, 1);
    ReplaceMaxItem(BOMBCHU_10, 2);
    ReplaceMaxItem(BOMBCHU_20, 0);
    ReplaceMaxItem(PROGRESSIVE_MAGIC_METER, 1);
    ReplaceMaxItem(DOUBLE_DEFENSE, 0);
    ReplaceMaxItem(PROGRESSIVE_STICK_UPGRADE, 1);
    ReplaceMaxItem(PROGRESSIVE_NUT_UPGRADE, 1);
    ReplaceMaxItem(PROGRESSIVE_BOW, 2);
    ReplaceMaxItem(PROGRESSIVE_SLINGSHOT, 2);
    ReplaceMaxItem(PROGRESSIVE_BOMB_BAG, 2);
    ReplaceMaxItem(HEART_CONTAINER, 0);
}

static void SetMinimalItemPool() {
    ReplaceMaxItem(PROGRESSIVE_BOMBCHUS, 1);
    ReplaceMaxItem(BOMBCHU_5, 1);
    ReplaceMaxItem(BOMBCHU_10, 0);
    ReplaceMaxItem(BOMBCHU_20, 0);
    ReplaceMaxItem(NAYRUS_LOVE, 0);
    ReplaceMaxItem(PROGRESSIVE_MAGIC_METER, 1);
    ReplaceMaxItem(DOUBLE_DEFENSE, 0);
    ReplaceMaxItem(PROGRESSIVE_STICK_UPGRADE, 0);
    ReplaceMaxItem(PROGRESSIVE_NUT_UPGRADE, 0);
    ReplaceMaxItem(PROGRESSIVE_BOW, 1);
    ReplaceMaxItem(PROGRESSIVE_SLINGSHOT, 1);
    ReplaceMaxItem(PROGRESSIVE_BOMB_BAG, 1);
    ReplaceMaxItem(PIECE_OF_HEART, 0);
    // Need extra heart containers when starting with 1 heart or less to be able to reach 3 hearts
    ReplaceMaxItem(HEART_CONTAINER, 2 - StartingHearts.Value<u8>());
}

void GenerateItemPool() {

    ItemPool.clear();
    PendingJunkPool.clear();

    // Initialize ice trap models to always major items
    IceTrapModels = {
        GI_SHIELD_MIRROR,
        GI_BOOMERANG,
        GI_LENS,
        GI_HAMMER,
        GI_BOOTS_IRON,
        GI_BOOTS_HOVER,
        GI_STONE_OF_AGONY,
        GI_DINS_FIRE,
        GI_FARORES_WIND,
        GI_NAYRUS_LOVE,
        GI_ARROW_FIRE,
        GI_ARROW_ICE,
        GI_ARROW_LIGHT,
        0xB8, // Double defense
        GI_CLAIM_CHECK,
        0x80, // Progressive hookshot
        0x81, // Progressive strength
        0x82, // Progressive bomb bag
        0x83, // Progressive bow
        0x84, // Progressive slingshot
        0x85, // Progressive wallet
        0x86, // Progressive scale
        0x8A, // Progressive magic
    };
    // Check song shuffle and dungeon reward shuffle just for ice traps
    if (ShuffleSongs.Is(SONGSHUFFLE_ANYWHERE)) {
        // Push item ids for songs
        IceTrapModels.push_back(0xC1);
        IceTrapModels.push_back(0xC2);
        IceTrapModels.push_back(0xC3);
        IceTrapModels.push_back(0xC4);
        IceTrapModels.push_back(0xC5);
        IceTrapModels.push_back(0xC6);
        IceTrapModels.push_back(0xBB);
        IceTrapModels.push_back(0xBC);
        IceTrapModels.push_back(0xBD);
        IceTrapModels.push_back(0xBE);
        IceTrapModels.push_back(0xBF);
        IceTrapModels.push_back(0xC0);
    }
    if (ShuffleRewards.Is(REWARDSHUFFLE_ANYWHERE)) {
        // Push item ids for dungeon rewards
        IceTrapModels.push_back(0xCB);
        IceTrapModels.push_back(0xCC);
        IceTrapModels.push_back(0xCD);
        IceTrapModels.push_back(0xCE);
        IceTrapModels.push_back(0xCF);
        IceTrapModels.push_back(0xD0);
        IceTrapModels.push_back(0xD1);
        IceTrapModels.push_back(0xD2);
        IceTrapModels.push_back(0xD3);
    }

    // Fixed item locations
    PlaceItemInLocation(GANON, TRIFORCE); // The Triforce is only used to make sure Ganon is accessible
    PlaceItemInLocation(MARKET_BOMBCHU_BOWLING_BOMBCHUS, BOMBCHU_DROP);

    if (ShuffleKokiriSword) {
        AddItemToMainPool(KOKIRI_SWORD);
        IceTrapModels.push_back(GI_SWORD_KOKIRI);
    } else {
        PlaceItemInLocation(KF_KOKIRI_SWORD_CHEST, KOKIRI_SWORD, false, true);
    }

    if (ShuffleMasterSword) {
        AddItemToMainPool(MASTER_SWORD);
        IceTrapModels.push_back(GI_SWORD_MASTER);
    } else {
        PlaceItemInLocation(TOT_MASTER_SWORD, MASTER_SWORD, false, true);
    }

    if (ShuffleWeirdEgg) {
        AddItemToMainPool(WEIRD_EGG);
        IceTrapModels.push_back(GI_WEIRD_EGG);
    } else {
        PlaceItemInLocation(HC_MALON_EGG, WEIRD_EGG, false, true);
    }

    if (ShuffleZeldasLetter) {
        AddItemToMainPool(ZELDAS_LETTER);
        IceTrapModels.push_back(GI_LETTER_ZELDA);
    } else {
        PlaceItemInLocation(HC_ZELDAS_LETTER, ZELDAS_LETTER, false, true);
    }

    if (ShuffleOcarinas) {
        AddItemToMainPool(PROGRESSIVE_OCARINA, 2);
        if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
            AddItemToPool(PendingJunkPool, PROGRESSIVE_OCARINA);
        }
        IceTrapModels.push_back(0x8B); // Progressive ocarina
    } else {
        PlaceItemInLocation(LW_GIFT_FROM_SARIA, PROGRESSIVE_OCARINA, false, true);
        PlaceItemInLocation(HF_OCARINA_OF_TIME_ITEM, PROGRESSIVE_OCARINA, false, true);
    }

    if (ShuffleCows) {
        // 9 total cow locations
        for (u8 i = 0; i < 9; i++) {
            AddItemToMainPool(GetJunkItem());
        }
        // extra location for Jabu MQ
        if (JabuJabusBelly.IsMQ()) {
            AddItemToMainPool(GetJunkItem());
        }
    } else {
        PlaceVanillaCowMilk();
    }

    if (ShuffleMagicBeans) {
        AddItemToMainPool(MAGIC_BEAN_PACK);
        if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
            AddItemToPool(PendingJunkPool, MAGIC_BEAN_PACK);
        }
        IceTrapModels.push_back(0xC9); // Magic bean pack
    } else {
        PlaceItemInLocation(ZR_MAGIC_BEAN_SALESMAN, MAGIC_BEAN, false, true);
    }

    if (ShuffleMerchants.IsNot(SHUFFLEMERCHANTS_OFF)) {
        if (!ProgressiveGoronSword) {
            AddItemToMainPool(GIANTS_KNIFE);
        }
        if (BombchusInLogic) {
            AddItemToMainPool(PROGRESSIVE_BOMBCHUS);
        } else {
            AddItemToMainPool(BOMBCHU_10);
        }
    } else {
        PlaceItemInLocation(KAK_GRANNYS_SHOP, BLUE_POTION_REFILL, false, true);
        PlaceItemInLocation(GC_MEDIGORON, GIANTS_KNIFE, false, true);
        PlaceItemInLocation(WASTELAND_BOMBCHU_SALESMAN, BOMBCHU_10, false, true);
    }

    if (ShuffleFrogSongRupees) {
        AddItemToMainPool(PURPLE_RUPEE, 5);
    } else {
        PlaceItemInLocation(ZR_FROGS_ZELDAS_LULLABY, PURPLE_RUPEE, false, true);
        PlaceItemInLocation(ZR_FROGS_EPONAS_SONG, PURPLE_RUPEE, false, true);
        PlaceItemInLocation(ZR_FROGS_SARIAS_SONG, PURPLE_RUPEE, false, true);
        PlaceItemInLocation(ZR_FROGS_SUNS_SONG, PURPLE_RUPEE, false, true);
        PlaceItemInLocation(ZR_FROGS_SONG_OF_TIME, PURPLE_RUPEE, false, true);
    }

    if (ShuffleAdultTradeQuest) {
        AddItemToMainPool(POCKET_EGG);
        AddItemToMainPool(COJIRO);
        AddItemToMainPool(ODD_MUSHROOM);
        AddItemToMainPool(ODD_POULTICE);
        AddItemToMainPool(POACHERS_SAW);
        AddItemToMainPool(BROKEN_SWORD);
        AddItemToMainPool(PRESCRIPTION);
        AddItemToMainPool(EYEBALL_FROG);
        AddItemToMainPool(EYEDROPS);
    } else {
        PlaceItemInLocation(KAK_TRADE_POCKET_CUCCO, COJIRO, false, true);
        PlaceItemInLocation(LW_TRADE_COJIRO, ODD_MUSHROOM, false, true);
        PlaceItemInLocation(KAK_TRADE_ODD_MUSHROOM, ODD_POULTICE, false, true);
        PlaceItemInLocation(LW_TRADE_ODD_POULTICE, POACHERS_SAW, false, true);
        PlaceItemInLocation(GV_TRADE_SAW, BROKEN_SWORD, false, true);
        PlaceItemInLocation(DMT_TRADE_BROKEN_SWORD, PRESCRIPTION, false, true);
        PlaceItemInLocation(ZD_TRADE_PRESCRIPTION, EYEBALL_FROG, false, true);
        PlaceItemInLocation(LH_TRADE_FROG, EYEDROPS, false, true);
        PlaceItemInLocation(DMT_TRADE_EYEDROPS, CLAIM_CHECK, false, true);
    }
    AddItemToMainPool(CLAIM_CHECK);

    if (ShuffleChestMinigame.Is(SHUFFLECHESTMINIGAME_SINGLE_KEYS)) {
        AddItemToMainPool(TREASURE_GAME_SMALL_KEY, 6); // 6 individual keys
    } else if (ShuffleChestMinigame.Is(SHUFFLECHESTMINIGAME_PACK)) {
        AddItemToMainPool(TREASURE_GAME_SMALL_KEY); // 1 key which will behave as a pack of 6
    } else {
        PlaceItemInLocation(MARKET_TREASURE_CHEST_GAME_ITEM_1, TREASURE_GAME_SMALL_KEY, false, true);
        PlaceItemInLocation(MARKET_TREASURE_CHEST_GAME_ITEM_2, TREASURE_GAME_SMALL_KEY, false, true);
        PlaceItemInLocation(MARKET_TREASURE_CHEST_GAME_ITEM_3, TREASURE_GAME_SMALL_KEY, false, true);
        PlaceItemInLocation(MARKET_TREASURE_CHEST_GAME_ITEM_4, TREASURE_GAME_SMALL_KEY, false, true);
        PlaceItemInLocation(MARKET_TREASURE_CHEST_GAME_ITEM_5, TREASURE_GAME_SMALL_KEY, false, true);
    };

    if (Tokensanity.Is(TOKENSANITY_OFF)) {
        for (LocationKey loc : GetLocations(allLocations, Category::cSkulltula)) {
            PlaceItemInLocation(loc, GOLD_SKULLTULA_TOKEN, false, true);
        }
    } else if (Tokensanity.Is(TOKENSANITY_DUNGEONS)) {
        for (LocationKey loc : GetLocations(allLocations, Category::cSkulltula)) {
            if (Location(loc)->IsOverworld()) {
                PlaceItemInLocation(loc, GOLD_SKULLTULA_TOKEN, false, true);
            } else {
                AddItemToMainPool(GOLD_SKULLTULA_TOKEN);
            }
        }
    } else if (Tokensanity.Is(TOKENSANITY_OVERWORLD)) {
        for (LocationKey loc : GetLocations(allLocations, Category::cSkulltula)) {
            if (Location(loc)->IsDungeon()) {
                PlaceItemInLocation(loc, GOLD_SKULLTULA_TOKEN, false, true);
            } else {
                AddItemToMainPool(GOLD_SKULLTULA_TOKEN);
            }
        }
    } else {
        AddItemToMainPool(GOLD_SKULLTULA_TOKEN, 100);
    }

    if (BombchusInLogic) {
        AddItemToMainPool(PROGRESSIVE_BOMBCHUS, 5);
    } else {
        AddItemToMainPool(BOMBCHU_5);
        AddItemToMainPool(BOMBCHU_10, 3);
        AddItemToMainPool(BOMBCHU_20);
    }

    // Ice Traps
    AddItemToMainPool(ICE_TRAP);
    if (GerudoTrainingGrounds.IsVanilla()) {
        AddItemToMainPool(ICE_TRAP);
    }
    if (GanonsCastle.IsVanilla()) {
        AddItemToMainPool(ICE_TRAP, 4);
    }

    // Gerudo Fortress
    if (GerudoFortress.Is(GERUDOFORTRESS_OPEN)) {
        PlaceItemInLocation(GF_NORTH_F1_CARPENTER, RECOVERY_HEART, false, true);
        PlaceItemInLocation(GF_NORTH_F2_CARPENTER, RECOVERY_HEART, false, true);
        PlaceItemInLocation(GF_SOUTH_F1_CARPENTER, RECOVERY_HEART, false, true);
        PlaceItemInLocation(GF_SOUTH_F2_CARPENTER, RECOVERY_HEART, false, true);
    } else if (GerudoKeys.IsNot(GERUDOKEYS_VANILLA)) {
        if (GerudoFortress.Is(GERUDOFORTRESS_FAST)) {
            AddItemToMainPool(GERUDO_FORTRESS_SMALL_KEY);
            PlaceItemInLocation(GF_NORTH_F2_CARPENTER, RECOVERY_HEART, false, true);
            PlaceItemInLocation(GF_SOUTH_F1_CARPENTER, RECOVERY_HEART, false, true);
            PlaceItemInLocation(GF_SOUTH_F2_CARPENTER, RECOVERY_HEART, false, true);
        } else {
            // Only add key ring if 4 Fortress keys necessary
            if (RingFortress) {
                AddItemToMainPool(GERUDO_FORTRESS_KEY_RING);
                // Add junk to make up for missing keys
                for (u8 i = 0; i < 3; i++) {
                    AddItemToMainPool(GetJunkItem());
                }
            } else {
                AddItemToMainPool(GERUDO_FORTRESS_SMALL_KEY, 4);
            }
        }
        if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
            if (RingFortress && GerudoFortress.Is(GERUDOFORTRESS_NORMAL)) {
                AddItemToPool(PendingJunkPool, GERUDO_FORTRESS_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, GERUDO_FORTRESS_SMALL_KEY);
            }
        }
    } else {
        if (GerudoFortress.Is(GERUDOFORTRESS_FAST)) {
            PlaceItemInLocation(GF_NORTH_F1_CARPENTER, GERUDO_FORTRESS_SMALL_KEY, false, true);
            PlaceItemInLocation(GF_NORTH_F2_CARPENTER, RECOVERY_HEART, false, true);
            PlaceItemInLocation(GF_SOUTH_F1_CARPENTER, RECOVERY_HEART, false, true);
            PlaceItemInLocation(GF_SOUTH_F2_CARPENTER, RECOVERY_HEART, false, true);
        } else {
            PlaceItemInLocation(GF_NORTH_F1_CARPENTER, GERUDO_FORTRESS_SMALL_KEY, false, true);
            PlaceItemInLocation(GF_NORTH_F2_CARPENTER, GERUDO_FORTRESS_SMALL_KEY, false, true);
            PlaceItemInLocation(GF_SOUTH_F1_CARPENTER, GERUDO_FORTRESS_SMALL_KEY, false, true);
            PlaceItemInLocation(GF_SOUTH_F2_CARPENTER, GERUDO_FORTRESS_SMALL_KEY, false, true);
        }
    }

    // Gerudo Token
    if (ShuffleGerudoToken && GerudoFortress.IsNot(GERUDOFORTRESS_OPEN)) {
        AddItemToMainPool(GERUDO_TOKEN);
        IceTrapModels.push_back(GI_GERUDO_CARD);
    } else if (ShuffleGerudoToken) {
        AddItemToPool(PendingJunkPool, GERUDO_TOKEN);
        PlaceItemInLocation(GF_GERUDO_TOKEN, ICE_TRAP, false, true);
    } else {
        PlaceItemInLocation(GF_GERUDO_TOKEN, GERUDO_TOKEN, false, true);
    }

    // Keys

    // For key rings, need to add as many junk items as "missing" keys
    if (KeyRings) {
        u8 ringJunkAmt = 0;
        for (auto dungeon : dungeonList) {
            if (dungeon->HasKeyRing()) {
                ringJunkAmt += dungeon->GetSmallKeyCount() - 1;
            }
        }
        for (u8 i = 0; i < ringJunkAmt; i++) {
            AddItemToMainPool(GetJunkItem());
        }
    }

    if (TriforceHunt) {
        AddItemToMainPool(TRIFORCE_PIECE, TriforcePiecesTotal.Value<u8>() + 1);
        IceTrapModels.push_back(GI_TRIFORCE_PIECE);
    }

    if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
        if (ShuffleGerudoToken) {
            AddItemToPool(PendingJunkPool, GERUDO_TOKEN);
        }

        // Plentiful small keys
        if (Keysanity.Is(KEYSANITY_ANYWHERE) || Keysanity.Is(KEYSANITY_ANY_DUNGEON) ||
            Keysanity.Is(KEYSANITY_OVERWORLD)) {
            if (BottomOfTheWell.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, BOTTOM_OF_THE_WELL_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, BOTTOM_OF_THE_WELL_SMALL_KEY);
            }
            if (ForestTemple.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, FOREST_TEMPLE_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, FOREST_TEMPLE_SMALL_KEY);
            }
            if (FireTemple.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, FIRE_TEMPLE_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, FIRE_TEMPLE_SMALL_KEY);
            }
            if (WaterTemple.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, WATER_TEMPLE_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, WATER_TEMPLE_SMALL_KEY);
            }
            if (SpiritTemple.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, SPIRIT_TEMPLE_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, SPIRIT_TEMPLE_SMALL_KEY);
            }
            if (ShadowTemple.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, SHADOW_TEMPLE_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, SHADOW_TEMPLE_SMALL_KEY);
            }
            if (GerudoTrainingGrounds.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, GERUDO_TRAINING_GROUNDS_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, GERUDO_TRAINING_GROUNDS_SMALL_KEY);
            }
            if (GanonsCastle.HasKeyRing()) {
                AddItemToPool(PendingJunkPool, GANONS_CASTLE_KEY_RING);
            } else {
                AddItemToPool(PendingJunkPool, GANONS_CASTLE_SMALL_KEY);
            }
        }

        if (BossKeysanity.Is(BOSSKEYSANITY_ANYWHERE) || BossKeysanity.Is(BOSSKEYSANITY_ANY_DUNGEON) ||
            BossKeysanity.Is(BOSSKEYSANITY_OVERWORLD)) {
            AddItemToPool(PendingJunkPool, FOREST_TEMPLE_BOSS_KEY);
            AddItemToPool(PendingJunkPool, FIRE_TEMPLE_BOSS_KEY);
            AddItemToPool(PendingJunkPool, WATER_TEMPLE_BOSS_KEY);
            AddItemToPool(PendingJunkPool, SPIRIT_TEMPLE_BOSS_KEY);
            AddItemToPool(PendingJunkPool, SHADOW_TEMPLE_BOSS_KEY);
        }

        if (GanonsBossKey.Is(GANONSBOSSKEY_ANYWHERE) || GanonsBossKey.Is(GANONSBOSSKEY_ANY_DUNGEON) ||
            GanonsBossKey.Is(GANONSBOSSKEY_OVERWORLD)) {
            AddItemToPool(PendingJunkPool, GANONS_CASTLE_BOSS_KEY);
        }
    }

    // Shopsanity
    if (Settings::Shopsanity.Is(SHOPSANITY_OFF) || Settings::Shopsanity.Is(SHOPSANITY_ZERO)) {
        AddItemsToPool(ItemPool, normalRupees);
    } else {                                        // Shopsanity 1-4, random
        AddItemsToPool(ItemPool, shopsanityRupees); // Shopsanity gets extra large rupees
    }

    // Scrubsanity
    if (Settings::Scrubsanity.IsNot(SCRUBSANITY_OFF)) {
        // Deku Tree
        if (DekuTree.IsMQ()) {
            AddItemToMainPool(DEKU_SHIELD);
        }

        // Dodongos Cavern
        AddItemToMainPool(DEKU_STICK_1);
        AddItemToMainPool(DEKU_SHIELD);
        if (DodongosCavern.IsMQ()) {
            AddItemToMainPool(RECOVERY_HEART);
        } else {
            AddItemToMainPool(DEKU_NUTS_5);
        }

        // Jabu Jabus Belly
        if (JabuJabusBelly.IsVanilla()) {
            AddItemToMainPool(DEKU_NUTS_5);
        }

        // Ganons Castle
        AddItemToMainPool(BOMBS_5);
        AddItemToMainPool(RECOVERY_HEART);
        AddItemToMainPool(BLUE_RUPEE);
        if (GanonsCastle.IsMQ()) {
            AddItemToMainPool(DEKU_NUTS_5);
        }

        // Overworld Scrubs
        AddItemsToPool(ItemPool, dekuScrubItems);

        // I'm not sure what this is for, but it was in ootr so I copied it
        for (u8 i = 0; i < 7; i++) {
            if (Random(0, 3)) {
                AddItemToMainPool(ARROWS_30);
            } else {
                AddItemToMainPool(DEKU_SEEDS_30);
            }
        }
    } else {
        PlaceVanillaDekuScrubItems();
    }

    AddItemsToPool(ItemPool, alwaysItems);
    AddItemsToPool(ItemPool, dungeonRewards);

    // Dungeon pools
    if (DekuTree.IsMQ()) {
        AddItemsToPool(ItemPool, DT_MQ);
    } else {
        AddItemsToPool(ItemPool, DT_Vanilla);
    }
    if (DodongosCavern.IsMQ()) {
        AddItemsToPool(ItemPool, DC_MQ);
    } else {
        AddItemsToPool(ItemPool, DC_Vanilla);
    }
    if (JabuJabusBelly.IsMQ()) {
        AddItemsToPool(ItemPool, JB_MQ);
    }
    if (ForestTemple.IsMQ()) {
        AddItemsToPool(ItemPool, FoT_MQ);
    } else {
        AddItemsToPool(ItemPool, FoT_Vanilla);
    }
    if (FireTemple.IsMQ()) {
        AddItemsToPool(ItemPool, FiT_MQ);
    } else {
        AddItemsToPool(ItemPool, FiT_Vanilla);
    }
    if (SpiritTemple.IsMQ()) {
        AddItemsToPool(ItemPool, SpT_MQ);
    } else {
        AddItemsToPool(ItemPool, SpT_Vanilla);
    }
    if (ShadowTemple.IsMQ()) {
        AddItemsToPool(ItemPool, ShT_MQ);
    } else {
        AddItemsToPool(ItemPool, ShT_Vanilla);
    }
    if (BottomOfTheWell.IsVanilla()) {
        AddItemsToPool(ItemPool, BW_Vanilla);
    }
    if (GerudoTrainingGrounds.IsMQ()) {
        AddItemsToPool(ItemPool, GTG_MQ);
    } else {
        AddItemsToPool(ItemPool, GTG_Vanilla);
    }
    if (GanonsCastle.IsMQ()) {
        AddItemsToPool(ItemPool, GC_MQ);
    } else {
        AddItemsToPool(ItemPool, GC_Vanilla);
    }

    u8 rutoBottles = 1;
    if (ZorasFountain.Is(ZORASFOUNTAIN_OPEN)) {
        rutoBottles = 0;
    }

    // Add 4 total bottles
    u8 bottleCount = 4;
    std::vector<ItemKey> bottles;
    bottles.assign(normalBottles.begin(), normalBottles.end());
    IceTrapModels.push_back(ItemTable(RandomElement(bottles)).GetItemID()); // Get one random bottle type for ice traps
    for (u8 i = 0; i < bottleCount; i++) {
        if (i >= rutoBottles) {
            if ((i == bottleCount - 1) && ShuffleMerchants.IsNot(SHUFFLEMERCHANTS_OFF)) {
                AddItemToMainPool(BOTTLE_WITH_BLUE_POTION);
            } else {
                AddRandomBottle(bottles);
            }
        } else {
            AddItemToMainPool(RUTOS_LETTER);
        }
    }

    // add extra songs only if song shuffle is anywhere
    AddItemsToPool(ItemPool, songList);
    if (ShuffleSongs.Is(SONGSHUFFLE_ANYWHERE) && ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
        AddItemsToPool(PendingJunkPool, songList);
    }

    /*For item pool generation, dungeon items are either placed in their vanilla
    | location, or added to the pool now and filtered out later depending on when
    | they need to get placed or removed in fill.cpp. These items are kept in the
    | pool until removal because the filling algorithm needs to know all of the
    | advancement items that haven't been placed yet for placing higher priority
    | items like stones/medallions.*/

    if (MapsAndCompasses.Is(MAPSANDCOMPASSES_VANILLA)) {
        PlaceVanillaMapsAndCompasses();
    } else {
        for (auto dungeon : dungeonList) {
            if (dungeon->GetMap() != NONE) {
                AddItemToMainPool(dungeon->GetMap());
            }

            if (dungeon->GetCompass() != NONE) {
                AddItemToMainPool(dungeon->GetCompass());
            }
        }
    }

    if (Keysanity.Is(KEYSANITY_VANILLA)) {
        PlaceVanillaSmallKeys();
    } else {
        for (auto dungeon : dungeonList) {
            if (dungeon->HasKeyRing() && Keysanity.IsNot(KEYSANITY_START_WITH)) {
                AddItemToMainPool(dungeon->GetKeyRing());
            } else {
                if (dungeon->GetSmallKeyCount() > 0) {
                    AddItemToMainPool(dungeon->GetSmallKey(), dungeon->GetSmallKeyCount());
                }
            }
        }
    }

    if (BossKeysanity.Is(BOSSKEYSANITY_VANILLA)) {
        PlaceVanillaBossKeys();
    } else {
        AddItemToMainPool(FOREST_TEMPLE_BOSS_KEY);
        AddItemToMainPool(FIRE_TEMPLE_BOSS_KEY);
        AddItemToMainPool(WATER_TEMPLE_BOSS_KEY);
        AddItemToMainPool(SPIRIT_TEMPLE_BOSS_KEY);
        AddItemToMainPool(SHADOW_TEMPLE_BOSS_KEY);
    }

    if (GanonsBossKey.Value<u8>() >= GANONSBOSSKEY_LACS_VANILLA) {
        PlaceItemInLocation(TOT_LIGHT_ARROWS_CUTSCENE, GANONS_CASTLE_BOSS_KEY);
    } else if (GanonsBossKey.Is(GANONSBOSSKEY_VANILLA)) {
        PlaceItemInLocation(GANONS_TOWER_BOSS_KEY_CHEST, GANONS_CASTLE_BOSS_KEY);
    } else if (GanonsBossKey.IsNot(GANONSBOSSKEY_TRIFORCE)) {
        AddItemToMainPool(GANONS_CASTLE_BOSS_KEY);
    }

    if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
        AddItemsToPool(ItemPool, easyItems);
    } else {
        AddItemsToPool(ItemPool, normalItems);
    }

    if (!ShuffleKokiriSword) {
        ReplaceMaxItem(KOKIRI_SWORD, 0);
    }

    if (!ShuffleMasterSword) {
        ReplaceMaxItem(MASTER_SWORD, 0);
    }

    if (ProgressiveGoronSword) {
        ReplaceMaxItem(BIGGORON_SWORD, 0);
        AddItemToMainPool(PROGRESSIVE_GORONSWORD, 2);
        IceTrapModels.push_back(0xD4); // Progressive Goron Sword
    } else {
        IceTrapModels.push_back(GI_SWORD_BGS);
    }

    if (ShuffleEnemySouls.Is(SHUFFLEENEMYSOULS_ALL)) {
        AddItemsToPool(ItemPool, enemySouls);
        if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
            AddItemsToPool(PendingJunkPool, enemySouls);
        }
    } else if (ShuffleEnemySouls.Is(SHUFFLEENEMYSOULS_BOSSES)) {
        AddItemsToPool(ItemPool, bossSouls);
        if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
            AddItemsToPool(PendingJunkPool, bossSouls);
        }
    }

    if (ShuffleOcarinaButtons) {
        AddItemsToPool(ItemPool, ocarinaNoteButtons);
        if (ItemPoolValue.Is(ITEMPOOL_PLENTIFUL)) {
            AddItemsToPool(PendingJunkPool, ocarinaNoteButtons);
        }
    }

    // Replace ice traps with junk from the pending junk pool if necessary
    if (IceTrapValue.Is(ICETRAPS_OFF)) {
        ReplaceMaxItem(ICE_TRAP, 0);
    }
    // Replace all junk items with ice traps for onslaught mode
    else if (IceTrapValue.Is(ICETRAPS_ONSLAUGHT)) {
        for (u8 i = 0; i < JunkPoolItems.size() - 3; i++) { // -3 Omits Huge Rupees and Deku Nuts 10
            ReplaceMaxItem(JunkPoolItems[i], 0);
        }
    }

    if (ItemPoolValue.Is(ITEMPOOL_SCARCE)) {
        SetScarceItemPool();
    } else if (ItemPoolValue.Is(ITEMPOOL_MINIMAL)) {
        SetMinimalItemPool();
    } else if (RemoveDoubleDefense) {
        ReplaceMaxItem(DOUBLE_DEFENSE, 0);
    }

    // this feels ugly and there's probably a better way, but
    // it replaces random junk with pending junk.
    bool junkSet;
    for (ItemKey pendingJunk : PendingJunkPool) {
        junkSet = false;
        for (ItemKey& item : ItemPool) {
            for (ItemKey junk : JunkPoolItems) {
                if (item == junk && item != HUGE_RUPEE && item != DEKU_NUTS_10) {
                    item    = pendingJunk;
                    junkSet = true;
                    break;
                }
            }
            if (junkSet)
                break;
        }
    }
    PendingJunkPool.clear();

    // Prevent excluded locations from always containing the same items
    Shuffle(ItemPool);
}

void AddJunk() {
    PlacementLog_Msg("HAD TO PLACE EXTRA JUNK ");
    AddItemToMainPool(GetPendingJunkItem());
}
