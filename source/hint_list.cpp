#include "hint_list.hpp"
#include "custom_messages.hpp"

#include <array>

using namespace CustomMessages;

// Big thanks to Lioncache, Gabyelnuevo, Danius88, and Charade for their translations!

// Text is {english, french, spanish, italian, german}

// there are special characters that are read for certain in game commands:
// ^ is a box break
// & is a new line
// @ will print the player name
// surrounding text with '#' will make it a different color
// - OoT Randomizer

// '%d' indicates a number will be placed there.
// '$' at the end of an item name indicates that it's plural.
// '|' separates singular and plural form.
// '{}' indicate sound effect IDs in hex.

std::array<HintText, KEY_ENUM_MAX> hintTable;
// clang-format off
void HintTable_Init() { // English                                                                                          French                                                                                                          Spanish                                                                                                                             Italian                                                                                                                                 German    
    /*--------------------------
    |       GENERAL TEXT       |
    ---------------------------*/
    
    hintTable[NONE] = HintText::Exclude({
        Text{"No Hint"}
    });

    hintTable[PREFIX] = HintText::Exclude({
        Text{"They say that ",                                                                                              "Selon moi, ",                                                                                                  "Según dicen, ",                                                                                                                    "Ho sentito dire che ",                                                                                                                 "Man erzählt sich, "}
    });

    hintTable[WAY_OF_THE_HERO] = HintText::Exclude({
        Text{" is on the way of the hero.",                                                                                 " est sur le chemin du héros.",                                                                                 " conduce a la senda del héroe.",                                                                                                   " è sul cammino dell'eroe.",                                                                                                            " verlaufe der Weg des Helden."}
    });

    hintTable[PLUNDERING] = HintText::Exclude({
        Text{"plundering ",                                                                                                 "explorer ",                                                                                                    "inspeccionar ",                                                                                                                    "saccheggiare ",                                                                                                                        "es sei eine törichte Wahl, "}
    });

    hintTable[FOOLISH] = HintText::Exclude({
        Text{" is a foolish choice.",                                                                                       " est futile.",                                                                                                 " no es una sabia decisión.",                                                                                                       " è una perdita di tempo.",                                                                                                             " nach Schätzen zu suchen."}
    });

    hintTable[CAN_BE_FOUND_AT] = HintText::Exclude({
        Text{"can be found at",                                                                                             "se trouve dans",                                                                                               "aguarda en",                                                                                                                       "si |trova|trovano| presso",                                                                                                            "|sei|seien|"}
    });

    hintTable[HOARDS] = HintText::Exclude({
        Text{"hoards",                                                                                                      "recèle",                                                                                                       "acapara",                                                                                                                          "nasconde",                                                                                                                             "|befände sich|befänden sich|"}
    });

    HintTable_Init_Item();
    HintTable_Init_Exclude_Overworld();
    HintTable_Init_Exclude_Dungeon();

    /*--------------------------
    |     ALWAYS HINT TEXT     |
    ---------------------------*/

    hintTable[ZR_FROGS_OCARINA_GAME] = HintText::Always({
        // obscure text
        Text{"an #amphibian feast# yields",                                                                                 "un #Festin d'Amphibiens# donne",                                                                               "una #fiesta anfibia# brinda",                                                                                                      "un #banchetto di anfibi# fornisce",                                                                                                    "beim #amphibischen Festmahl#, |wäre|wären|"},
        Text{"the #croaking choir's magnum opus# awards",                                                                   "la #Chorale Coassante# donne",                                                                                 "un #coro maestro de ancas# premia",                                                                                                "l'#opera magna del coro gracidante# è premiata con",                                                                                   "das #Meisterwerk des quakenden Chors#, |wäre|wären|"},
        Text{"the #froggy finale# yields",                                                                                  "la #Finale Amphibienne# donne",                                                                                "el #gran final batracio# brinda",                                                                                                  "il #gran finale dei batraci# fornisce",                                                                                                "beim #froschigen Finale#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the final reward from the #Frogs of Zora's River# is",                                                        "la dernière récompense des #Grenouilles de la Rivière Zora# est",                                              "la recompensa final de las #ranas del Río Zora# premia",                                                                           "la ricompensa finale delle #rane del fiume Zora# è",                                                                                   "die finale Belohnung der #Frösche des Zora-Flusses#, |wäre|wären|"}
    );

    hintTable[KF_LINKS_HOUSE_COW] = HintText::Always({
        // obscure text
        Text{"the #bovine bounty of a horseback hustle# gifts",                                                             "le cadeau #qui découle d'une Réussite Équestre# est",                                                          "la #recompensa bovina de un paseo a caballo# brinda",                                                                              "la #ricompensa bovina di un'impresa equestre# dona",                                                                                   "die #Rinderprämie des eiligen Rittes#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Malon's obstacle course# leads to",                                                                          "la #Course d'Obstacles de Malon# amène à",                                                                     "la #carrera de obstáculos de Malon# brinda",                                                                                       "se vinci la #corsa ad ostacoli di Malon# ti |arriva|arrivano| a casa",                                                                 "bei #Malons Pferderennen#, |wäre|wären|"}
    );

    /*--------------------------
    |    SOMETIMES HINT TEXT   |
    ---------------------------*/

    hintTable[SONG_FROM_OCARINA_OF_TIME] = HintText::Sometimes({
        // obscure text
        Text{"the #Ocarina of Time# teaches",                                                                               "l'#Ocarina du Temps# est accompagné par",                                                                      "la #Ocarina del Tiempo# enseña",                                                                                                   "l'#Ocarina del Tempo# insegna",                                                                                                        "das, von der #Okarina der Zeit gelehrte Lied#, |wäre|wären|"},
    });

    hintTable[SONG_FROM_COMPOSERS_GRAVE] = HintText::Sometimes({
        // obscure text
        Text{"#ReDead in the Composers' Grave# guard",                                                                      "les #Effrois du Tombeau des Compositeurs# protègent",                                                          "los #ReDeads del Panteón Real# guardan",                                                                                           "gli #zombie nella tomba della famiglia reale# proteggono",                                                                             "#nahe Zombies im Königsgrab#, |wäre|wären|"},
        Text{"the #Composer Brothers wrote#",                                                                               "le #Trésor des Compositeurs# est",                                                                             "los #hermanos compositores escribieron#",                                                                                          "i #fratelli Mortaldi scrissero#",                                                                                                      "das, von den #Gebrüder Brahmstein komponierte Lied#, |wäre|wären|"},
    });

    hintTable[SHEIK_IN_FOREST] = HintText::Sometimes({
        // obscure text
        Text{"#in a meadow# Sheik teaches",                                                                                 "Sheik confiera, #dans un bosquet#,",                                                                           "#en la pradera sagrada# Sheik enseña",                                                                                             "#in una radura# Sheik insegna",                                                                                                        "das von Shiek, #auf einer Lichtung gelehrte Lied#, |wäre|wären|"},
    });

    hintTable[SHEIK_AT_TEMPLE] = HintText::Sometimes({
        // obscure text
        Text{"Sheik waits at a #monument to time# to teach",                                                                "Sheik confiera, #au pied de l'Épée Légendaire#,",                                                              "Sheik espera en el #momumento del tiempo# para enseñar",                                                                           "Sheik aspetta in un #tempio del tempo# per insegnare",                                                                                 "das von Shiek, #an einem zeitlichen Denkmal gelehrte Lied#, |wäre|wären|"},
    });

    hintTable[SHEIK_IN_CRATER] = HintText::Sometimes({
        // obscure text
        Text{"the #crater's melody# is",                                                                                    "Sheik confiera, #entouré de lave#,",                                                                           "la #melodía del cráter# otorga",                                                                                                   "la #melodia del cratere# è",                                                                                                           "die #Melodie des Kraters# |wäre|wären|"},
    });

    hintTable[SHEIK_IN_ICE_CAVERN] = HintText::Sometimes({
        // obscure text
        Text{"the #frozen cavern# echoes with",                                                                             "Sheik confiera, #dans une caverne étoilée#,",                                                                  "en la #caverna de hielo# retumban los ecos de",                                                                                    "nella #caverna ghiacciata# |riecheggia|riecheggiano|",                                                                                 "das #Echo der gefrorenen Höhlen#, |wäre|wären|"},
    });

    hintTable[SHEIK_IN_KAKARIKO] = HintText::Sometimes({
        // obscure text
        Text{"a #ravaged village# mourns with",                                                                             "Sheik confirera, #au cœur d'un village ravagé#,",                                                              "un #arrasado pueblo# llora",                                                                                                       "un #villaggio devastato# piange con",                                                                                                  "das #Trauern des verwüsteten Dorfes#, |wäre|wären|"},
    });

    hintTable[SHEIK_AT_COLOSSUS] = HintText::Sometimes({
        // obscure text
        Text{"a hero ventures #beyond the wasteland# to learn",                                                             "Sheik confiera, #au bout d'un chemin sabloneux#,",                                                             "el héroe que se adentre #más allá del desierto# aprenderá",                                                                        "un eroe si avventurerà #oltre il deserto# per imparare",                                                                               "das, #fürs Durchqueren der Einöde gelehrte Lied#, |wäre|wären|"},
    });


    hintTable[MARKET_10_BIG_POES] = HintText::Sometimes({
        // obscure text
        Text{"#ghost hunters# will be rewarded with",                                                                       "#les chasseurs de fantômes# sont récompensés avec",                                                            "los #cazafantasmas# son premiados con",                                                                                            "gli #acchiappafantasmi# saranno ricompensati con",                                                                                     "das Kopfgeld der #Geisterjäger#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"catching #Big Poes# leads to",                                                                                "#attraper des fantômes# donne",                                                                                "hacerte con #Grandes Poes# conduce a",                                                                                             "chi cattura #Grandi Poo# viene ripagato con",                                                                                          "bei #gefangenen Nachtschwärmern#, |wäre|wären|"}
    );

    hintTable[DEKU_THEATER_SKULL_MASK] = HintText::Sometimes({
        // obscure text
        Text{"the #Skull Mask# yields",                                                                                     "le #Masque de Mort# donne",                                                                                    "la #máscara de calavera# otorga",                                                                                                  "la #maschera teschio# procura",                                                                                                        "bei einer #knochigen Vorführung#, |wäre|wären|"},
    });

    hintTable[DEKU_THEATER_MASK_OF_TRUTH] = HintText::Sometimes({
        // obscure text
        Text{"showing a #truthful eye to the crowd# rewards",                                                               "montrer #l'Oeil de Vérité à la foule# donne",                                                                  "#mostrarle el ojo verdadero# a una multitud brinda",                                                                               "#mostrare la verità a una grande folla# viene ricompensato con",                                                                       "bei einer #wissensträchtigen Präsentation#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #Mask of Truth# yields",                                                                                  "le #Masque de Vérité# donne",                                                                                  "la #máscara de la verdad# premia",                                                                                                 "la #maschera della verità# procura",                                                                                                   "die Belohnung der #Maske des Wissens#, |wäre|wären|"}
    );

    hintTable[HF_OCARINA_OF_TIME_ITEM] = HintText::Sometimes({
        // obscure text
        Text{"the #treasure thrown by Princess Zelda# is",                                                                  "le trésor #laissé par la Princesse# est",                                                                      "el #tesoro arrojado por la Princesa Zelda# se trata de",                                                                           "il #tesoro lanciato dalla Principessa Zelda# è",                                                                                       "#Prinzessin Zeldas geworfener Schatz#, |wäre|wären|"},
    });

    hintTable[DMT_TRADE_BROKEN_SWORD] = HintText::Sometimes({
        // obscure text
        Text{"a #blinded Biggoron# entrusts",                                                                               "un #Biggoron aveuglé# confie",                                                                                 "un #miope Biggoron# otorga",                                                                                                       "un #Grande Goron accecato# consegna",                                                                                                  "bei einem #erblindeten Goronen#, |wäre|wären|"},
    });

    hintTable[DMT_TRADE_EYEDROPS] = HintText::Sometimes({
        // obscure text
        Text{"while you wait, #Biggoron# gives",                                                                            "pendant que tu attends, #Biggoron# donne",                                                                     "#Biggoron# está a la espera de otorgar",                                                                                           "#Grande Goron# paga il suo oculista con",                                                                                              "#Biggorons# Entschädigung fürs Warten, |wäre|wären|"},
    });

    hintTable[DMT_TRADE_CLAIM_CHECK] = HintText::Sometimes({
        // obscure text
        Text{"#Biggoron# crafts",                                                                                           "#Biggoron# fabrique",                                                                                          "#Biggoron# forja",                                                                                                                 "#Grande Goron# forgia",                                                                                                                "#Biggorons# Meisterwerk, |wäre|wären|"},
    });

    hintTable[KAK_50_GOLD_SKULLTULA_REWARD] = HintText::Sometimes({
        // obscure text
        Text{"#50 bug badges# rewards",                                                                                     "#50 Écussons# donnent",                                                                                        "#50 medallas de insectos# otorgan",                                                                                                "#50 spille d'insetto# sono premiate con",                                                                                              "die Entschädigung für #50 Insekten-Abzeichen#, |wäre|wären|"},
        Text{"#50 spider souls# yields",                                                                                    "#50 Âmes# donnent",                                                                                            "#50 almas de araña# otorgan",                                                                                                      "#50 anime di ragno# forniscono",                                                                                                       "der Lohn für #50 Spinnenseelen#, |wäre|wären|"},
        Text{"#50 auriferous arachnids# lead to",                                                                           "#50 Arachnides Aurifères# donnent",                                                                            "#50 arácnidos auríferos# otorgan",                                                                                                 "#50 artropodi aurei# forniscono",                                                                                                      "die Bezahlung für #50 goldhaltige Arachniden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"slaying #50 Gold Skulltulas# reveals",                                                                        "détruire #50 Skulltulas d'Or# donne",                                                                          "exterminar #50 skulltulas doradas# revela",                                                                                        "eliminare #50 Aracnule d'oro# rivela",                                                                                                 "die Belohnung, fürs Zerstören von #50 goldenen Skulltulas#, |wäre|wären|"}
    );

    hintTable[KAK_40_GOLD_SKULLTULA_REWARD] = HintText::Sometimes({
        // obscure text
        Text{"#40 bug badges# rewards",                                                                                     "#40 Écussons# donnent",                                                                                        "#40 medallas de insectos# otorgan",                                                                                                "#40 spille d'insetto# sono premiate con",                                                                                              "die Entschädigung für #40 Insekten-Abzeichen#, |wäre|wären|"},
        Text{"#40 spider souls# yields",                                                                                    "#40 Âmes# donnent",                                                                                            "#40 almas de araña# otorgan",                                                                                                      "#40 anime di ragno# forniscono",                                                                                                       "der Lohn für #40 Spinnenseelen#, |wäre|wären|"},
        Text{"#40 auriferous arachnids# lead to",                                                                           "#40 Arachnides Aurifères# donnent",                                                                            "#40 arácnidos auríferos# otorgan",                                                                                                 "#40 artropodi aurei# forniscono",                                                                                                      "die Bezahlung für #40 goldhaltige Arachniden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"slaying #40 Gold Skulltulas# reveals",                                                                        "détruire #40 Skulltulas d'Or# donne",                                                                          "exterminar #40 skulltulas doradas# revela",                                                                                        "eliminare #40 Aracnule d'oro# rivela",                                                                                                 "die Belohnung, fürs Zerstören von #40 goldenen Skulltulas#, |wäre|wären|"}
    );

    hintTable[KAK_30_GOLD_SKULLTULA_REWARD] = HintText::Sometimes({
        // obscure text
        Text{"#30 bug badges# rewards",                                                                                     "#30 Écussons# donnent",                                                                                        "#30 medallas de insectos# otorgan",                                                                                                "#30 spille d'insetto# sono premiate con",                                                                                              "die Entschädigung für #30 Insekten-Abzeichen#, |wäre|wären|"},
        Text{"#30 spider souls# yields",                                                                                    "#30 Âmes# donnent",                                                                                            "#30 almas de araña# otorgan",                                                                                                      "#30 anime di ragno# forniscono",                                                                                                       "der Lohn für #30 Spinnenseelen#, |wäre|wären|"},
        Text{"#30 auriferous arachnids# lead to",                                                                           "#30 Arachnides Aurifères# donnent",                                                                            "#30 arácnidos auríferos# otorgan",                                                                                                 "#30 artropodi aurei# forniscono",                                                                                                      "die Bezahlung für #30 goldhaltige Arachniden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"slaying #30 Gold Skulltulas# reveals",                                                                        "détruire #30 Skulltulas d'Or# donne",                                                                          "exterminar #30 skulltulas doradas# revela",                                                                                        "eliminare #30 Aracnule d'oro# rivela",                                                                                                 "die Belohnung, fürs Zerstören von #30 goldenen Skulltulas#, |wäre|wären|"}
    );

    hintTable[KAK_20_GOLD_SKULLTULA_REWARD] = HintText::Sometimes({
        // obscure text
        Text{"#20 bug badges# rewards",                                                                                     "#20 Écussons# donnent",                                                                                        "#20 medallas de insectos# otorgan",                                                                                                "#20 spille d'insetto# sono premiate con",                                                                                              "die Entschädigung für #20 Insekten-Abzeichen#, |wäre|wären|"},
        Text{"#20 spider souls# yields",                                                                                    "#20 Âmes# donnent",                                                                                            "#20 almas de araña# otorgan",                                                                                                      "#20 anime di ragno# forniscono",                                                                                                       "der Lohn für #20 Spinnenseelen#, |wäre|wären|"},
        Text{"#20 auriferous arachnids# lead to",                                                                           "#20 Arachnides Aurifères# donnent",                                                                            "#20 arácnidos auríferos# otorgan",                                                                                                 "#20 artropodi aurei# forniscono",                                                                                                      "die Bezahlung für #20 goldhaltige Arachniden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"slaying #20 Gold Skulltulas# reveals",                                                                        "détruire #20 Skulltulas d'Or# donne",                                                                          "exterminar #20 skulltulas doradas# revela",                                                                                        "eliminare #20 Aracnule d'oro# rivela",                                                                                                 "die Belohnung, fürs Zerstören von #20 goldenen Skulltulas#, |wäre|wären|"}
    );

    hintTable[KAK_ANJU_AS_CHILD] = HintText::Sometimes({
        // obscure text
        Text{"#wrangling roosters# rewards",                                                                                "#plumer des poulets# donne",                                                                                   "#atrapar a las gallinas# premia",                                                                                                  "#accalappiare galline# procura",                                                                                                       "bei einer #Hahnrangelei#, |wäre|wären|"},
        Text{"#chucking chickens# gifts",                                                                                   "#lancer des volatiles# donne",                                                                                 "#reunir a unos emplumados# premia",                                                                                                "#lanciare pollame# procura",                                                                                                           "nach einer #Huhneinzäunung#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#collecting cuccos# rewards",                                                                                 "#rapporter les Cocottes# donne",                                                                               "#hacerte con todos los cucos# premia",                                                                                             "#ritrovare coccò# procura",                                                                                                            "Anjus Belohnung fürs #Einfangen ihrer Hühner#, |wäre|wären|"}
    );

    hintTable[KAK_TRADE_POCKET_CUCCO] = HintText::Sometimes({
        // obscure text
        Text{"an adult's #happy Cucco# awards",                                                                             "un adulte avec une #joyeuse Cocotte# obtient",                                                                 "un #alegre cuco# en la madurez otorga",                                                                                            "un adulto con un #coccò felice# otterrà",                                                                                              "ein Geschenk #glücklicher Hühner#, |wäre|wären|"},
    });

    hintTable[KAK_TRADE_ODD_MUSHROOM] = HintText::Sometimes({
        // obscure text
        Text{"the #potion shop lady# entrusts",                                                                             "la #vieille apothicaire# confie",                                                                              "la #señora de la tienda de pociones# otorga",                                                                                      "la #vecchietta del negozio di pozioni# consegna",                                                                                      "#Omas Allerlei#, |wäre|wären|"},
    });

    hintTable[GC_DARUNIAS_JOY] = HintText::Sometimes({
        // obscure text
        Text{"a #groovin' goron# gifts",                                                                                    "#un Goron joyeux# donne",                                                                                      "#un goron marchoso# otorga",                                                                                                       "un #Goron scatenato# regala",                                                                                                          "bei #groovenden Goronen#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Darunia's dance# leads to",                                                                                  "#la dance de Darunia# donne",                                                                                  "#el baile de Darunia# conduce a",                                                                                                  "#il ballo di Darunia# fornisce",                                                                                                       "#Darunias# Gastgeschenk für eine #Tanzstunde#, |wäre|wären|"}
    );

    hintTable[LW_SKULL_KID] = HintText::Sometimes({
        // obscure text
        Text{"the #Skull Kid# grants",                                                                                      "#Skull Kid# donne",                                                                                            "#Skull Kid# otorga",                                                                                                               "il #bimbo perduto# consegna",                                                                                                          "#Horror-Kids# Dank für eine #Musikstunde#, |wäre|wären|"},
    });

    hintTable[LW_TRADE_COJIRO] = HintText::Sometimes({
        // obscure text
        Text{"returning a #special Cucco# awards",                                                                          "ramener une #Cocotte précieuse# donne",                                                                        "quien devuelva un #cuco especial# encontrará",                                                                                     "se restituisci un #coccò speciale# al suo proprietario riceverai",                                                                     "der Lohn fürs Überbringen eines #besonderen Huhns#, |wäre|wären|"},
    });

    hintTable[LW_TRADE_ODD_POULTICE] = HintText::Sometimes({
        // obscure text
        Text{"a #Kokiri girl in the woods# leaves",                                                                         "la #fillette Kokiri dans les bois# laisse",                                                                    "una #chica kokiri del bosque# otorga",                                                                                             "una #ragazza Kokiri nel bosco# baratta",                                                                                               "die Tauschware eines #Kokiri-Mädchens der Wälder#, |wäre|wären|"},
    });

    hintTable[LH_SUN] = HintText::Sometimes({
        // obscure text
        Text{"staring into #the sun# grants",                                                                               "regarder #le soleil# donne",                                                                                   "#mirar al sol# revela",                                                                                                            "#guardare il sole# rivela",                                                                                                            "ein #Blick in die Sonne#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"shooting #the sun# grants",                                                                                   "tirer une flèche #sur le soleil# donne",                                                                       "#disparar al sol# revela",                                                                                                         "scoccare #una freccia verso il sole# rivela",                                                                                          "ein #sonniger Schuss#, |wäre|wären|"}
    );

    hintTable[LH_TRADE_FROG] = HintText::Sometimes({
        // obscure text
        Text{"#Lake Hylia's scientist# hurriedly entrusts",                                                                 "le #scientifique du Lac Hylia# confie rapidement",                                                             "el #científico del Lago Hylia# otorga con prisa",                                                                                  "#lo scienziato del Lago Hylia# produce",                                                                                               "die Tauschware des #Forschers am Hylia-See#, |wäre|wären|"},
    });

    hintTable[MARKET_TREASURE_CHEST_GAME_REWARD] = HintText::Sometimes({
        // obscure text
        Text{"#gambling# grants",                                                                                           "#parier# donne",                                                                                               "#los juegos de azar# revelan",                                                                                                     "se #giochi d'azzardo# puoi vincere",                                                                                                   "#Glücksspiel zahle sich aus#, denn es |wäre|wären|"},
        Text{"there is a #1/32 chance# to win",                                                                             "il y a #une chance sur 32# de gagner",                                                                         "hay una #probabilidad de 1/32# de ganar",                                                                                          "c'è #1 possibilità su 32# di vincere",                                                                                                 "eine #1/32stel Erfolgsquote#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #treasure chest game# grants",                                                                            "la #Chasse aux Trésors# donne",                                                                                "#el Cofre del Tesoro# premia",                                                                                                     "il premio della #sala della fortuna# è",                                                                                               "im #letzten Raum# der Truhenlotterie, |wäre|wären|"}
    );

    hintTable[MARKET_TREASURE_CHEST_GAME_ITEM_1] = HintText::Sometimes({
        // obscure text
        Text{"#gambling once# grants",                                                                                      "#parier une fois# donne",                                                                                      "#apostar solo una vez# revelará",                                                                                                  "#scommettere una volta# fa vincere",                                                                                                   "ein #einmaliger Gewinn# beim Glücksspiel, |wäre|wären|"},
        Text{"the #first or second game chest# contains",                                                                   "le #premier ou deuxième Coffre de Jeu# contient",                                                              "#el primer o segundo cofre del azar# revela",                                                                                      "#il primo o il secondo# forziere contiene",                                                                                            "in der #ersten oder zweiten Spieltruhe#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #first locked room# in the chest game contains",                                                          "la #première salle# de la Chasse aux Trésors contient",                                                        "#en la primera sala del Cofre del Tesoro# aguarda",                                                                                "nella sala della fortuna la #prima stanza chiusa# nasconde",                                                                           "im #ersten Raum# der Truhenlotterie, |wäre|wären|"}
    );

    hintTable[MARKET_TREASURE_CHEST_GAME_ITEM_2] = HintText::Sometimes({
        // obscure text
        Text{"#gambling twice# grants",                                                                                     "#parier deux fois# donne",                                                                                     "#apostar dos veces# revelará",                                                                                                     "#scommettere due volte# fa vincere",                                                                                                   "ein #zweifacher Gewinn# beim Glücksspiel, |wäre|wären|"},
        Text{"the #third or fourth game chest# contains",                                                                   "le #troisième ou quatrième Coffre de Jeu# contient",                                                           "#el tercer o cuarto cofre del azar# revela",                                                                                       "#il terzo o il quarto# forziere contiene",                                                                                             "in der #dritten oder vierten Spieltruhe#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #second locked room# in the chest game contains",                                                         "la #deuxième salle# de la Chasse aux Trésors contient",                                                        "#en la segunda sala del Cofre del Tesoro# aguarda",                                                                                "nella sala della fortuna la #seconda stanza chiusa# nasconde",                                                                         "im #zweiten Raum# der Truhenlotterie, |wäre|wären|"}
    );

    hintTable[MARKET_TREASURE_CHEST_GAME_ITEM_3] = HintText::Sometimes({
        // obscure text
        Text{"#gambling 3 times# grants",                                                                                   "#parier trois fois# donne",                                                                                    "#apostar tres veces# revelará",                                                                                                    "#scommettere tre volte# fa vincere",                                                                                                   "ein #dreifacher Gewinn# beim Glücksspiel, |wäre|wären|"},
        Text{"the #fifth or sixth game chest# contains",                                                                    "le #cinquième ou sixième Coffre de Jeu# contient",                                                             "#el quinto o sexto cofre del azar# revela",                                                                                        "#il quinto o il sesto# forziere contiene",                                                                                             "in der #fünften oder sechsten Spieltruhe#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #third locked room# in the chest game contains",                                                          "la #troisième salle# de la Chasse aux Trésors contient",                                                       "#en la tercera sala del Cofre del Tesoro# aguarda",                                                                                "nella sala della fortuna la #terza stanza chiusa# nasconde",                                                                           "im #dritten Raum# der Truhenlotterie, |wäre|wären|"}
    );

    hintTable[MARKET_TREASURE_CHEST_GAME_ITEM_4] = HintText::Sometimes({
        // obscure text
        Text{"#gambling 4 times# grants",                                                                                   "#parier quatre fois# donne",                                                                                   "#apostar cuatro veces# revelará",                                                                                                  "#scommettere quattro volte# fa vincere",                                                                                               "ein #vierfacher Gewinn# beim Glücksspiel, |wäre|wären|"},
        Text{"the #seventh or eighth game chest# contains",                                                                 "le #septième ou huitième Coffre de Jeu# contient",                                                             "#el séptimo u octavo cofre del azar# revela",                                                                                      "#il settimo o l'ottavo# forziere contiene",                                                                                            "in der #siebten oder achten Spieltruhe#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #fourth locked room# in the chest game contains",                                                         "la #quatrième salle# de la Chasse aux Trésors contient",                                                       "#en la cuarta sala del Cofre del Tesoro# aguarda",                                                                                 "nella sala della fortuna la #quarta stanza chiusa# nasconde",                                                                          "im #vierten Raum# der Truhenlotterie, |wäre|wären|"}
    );

    hintTable[MARKET_TREASURE_CHEST_GAME_ITEM_5] = HintText::Sometimes({
        // obscure text
        Text{"#gambling 5 times# grants",                                                                                   "#parier cinq fois# donne",                                                                                     "#apostar cinco veces# revelará",                                                                                                   "#scommettere cinque volte# fa vincere",                                                                                                "ein #fünffacher Gewinn# beim Glücksspiel, |wäre|wären|"},
        Text{"the #ninth or tenth game chest# contains",                                                                    "le #neuvième ou dixième Coffre de Jeu# contient",                                                              "#el noveno o décimo cofre del azar# revela",                                                                                       "#il nono o il decimo# forziere contiene",                                                                                              "in der #neunten oder zehnten Spieltruhe#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #fifth locked room# in the chest game contains",                                                          "la #cinquième salle# de la Chasse aux Trésors contient",                                                       "#en la quinta sala del Cofre del Tesoro# aguarda",                                                                                 "nella sala della fortuna la #quinta stanza chiusa# nasconde",                                                                          "im #fünften Raum# der Truhenlotterie, |wäre|wären|"}
    );

    hintTable[GF_HBA_1500_POINTS] = HintText::Sometimes({
        // obscure text
        Text{"mastery of #horseback archery# grants",                                                                       "maîtriser l'#Archerie Équestre# donne",                                                                        "dominar el #tiro con arco a caballo# premia con",                                                                                  "se stravinci al #tiro con l'arco a cavallo# riceverai",                                                                                "eine Meisterleistung beim #berittenen Bogenschießen#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"scoring 1500 in #horseback archery# grants",                                                                  "obtenir 1500 points à l'#Archerie Équestre# donne",                                                            "conseguir 1500 puntos en el #tiro con arco a caballo# premia",                                                                     "se totalizzi almeno 1500 punti al #tiro con l'arco a cavallo# riceverai",                                                              "1.500 Punkte beim #berittenen Bogenschießen#, |wäre|wären|"}
    );

    hintTable[GRAVEYARD_HEART_PIECE_GRAVE_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"playing #Sun's Song# in a grave spawns",                                                                      "jouer le #Chant du Soleil# dans une Tombe donne",                                                              "#tocar la Canción del Sol# en una cripta conduce a",                                                                               "suonare il #Canto del sole# in una tomba fa apparire",                                                                                 "in einem Grabe die #Hymne der Sonne# zu spielen, |wäre|wären|"},
    });

    hintTable[GC_MAZE_LEFT_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"in #Goron City# the hammer unlocks",                                                                          "dans le #Village Goron#, le marteau donne accès à",                                                            "en la #Ciudad Goron# el martillo desbloquea",                                                                                      "nella #città dei Goron# il martello sblocca",                                                                                          "hinter #braunen Felsen# Goronias, |wäre|wären|"},
    });

    hintTable[GV_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"in #Gerudo Valley# the hammer unlocks",                                                                       "dans la #Vallée Gerudo#, le marteau donne accès à",                                                            "en el #Valle Gerudo# el martillo desbloquea",                                                                                      "nella #valle Gerudo# il martello sblocca",                                                                                             "hinter #braunen Felsen# des Gerudotals, |wäre|wären|"},
    });

    hintTable[GV_TRADE_SAW] = HintText::Sometimes({
        // obscure text
        Text{"the #boss of the carpenters# leaves",                                                                         "le #patron des charpentiers# laisse",                                                                          "el #capataz de los carpinteros# otorga",                                                                                           "il #capo dei carpentieri# ha",                                                                                                         "die Tauschware des #Chefs der Zimmerleute#, |wäre|wären|"},
    });

    hintTable[GV_COW] = HintText::Sometimes({
        // obscure text
        Text{"a #cow in Gerudo Valley# gifts",                                                                              "la #vache de la Vallée Gerudo# donne",                                                                         "una #vaca del Valle Gerudo# brinda",                                                                                               "una #mucca nella valle Gerudo# regala",                                                                                                "die Milch einer #Kuh des Gerudotals#, |wäre|wären|"},
    });

    hintTable[HC_GS_STORMS_GROTTO] = HintText::Sometimes({
        // obscure text
        Text{"a #spider behind a muddy wall# in a grotto holds",                                                            "l'#araignée derrière un mur de boue# dans une grotte donne",                                                   "una #Skulltula tras la agrietada pared# de una cueva otorga",                                                                      "un #ragno dietro la parete friabile di una grotta# si nasconde con",                                                                   "in einer #Spinne, hinter der brüchigen Wand# eines Erdlochs, |wäre|wären|"},
    });

    hintTable[HF_GS_COW_GROTTO] = HintText::Sometimes({
        // obscure text
        Text{"a #spider behind webs# in a grotto holds",                                                                    "l'#araignée derrière une toile# dans une grotte donne",                                                        "una #Skulltula tras la telaraña# de una cueva otorga",                                                                             "un #ragno dietro una ragnatela# in una grotta si nasconde con",                                                                        "in einer #Spinne, hinter den Spinnenweben# eines Erdlochs, |wäre|wären|"},
    });

    hintTable[HF_COW_GROTTO_COW] = HintText::Sometimes({
        // obscure text
        Text{"the #cobwebbed cow# gifts",                                                                                   "la #vache prisonnière d'araignées# donne",                                                                     "una #vaca tras una telaraña# brinda",                                                                                              "un #ungulato nella prigione di un araneide# dona",                                                                                     "die Milch, einer #von Spinnenweben bedeckten Kuh#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #cow behind webs# in a grotto gifts",                                                                       "la #vache derrière les toiles# d'une grotte donne",                                                            "una #vaca tras la telaraña# de una cueva brinda",                                                                                  "una #mucca dietro una ragnatela# in una grotta regala",                                                                                "die Milch einer #Kuh, hinter den Spinnenweben# eines Erdlochs, |wäre|wären|"}
    );

    hintTable[ZF_GS_HIDDEN_CAVE] = HintText::Sometimes({
        // obscure text
        Text{"a spider high #above the icy waters# holds",                                                                  "l'araignée #en haut des eaux glacées# donne",                                                                  "una Skulltula en lo #alto de las congeladas aguas# otorga",                                                                        "un ragno #sopra acque congelate# nasconde",                                                                                            "in einer Spinne, #über eisigen Gewässern#, |wäre|wären|"},
    });

    hintTable[WASTELAND_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"#deep in the wasteland# is",                                                                                  "#loin dans le désert# gît",                                                                                    "en lo #profundo del desierto encantado# yace",                                                                                     "#nel profondo del deserto stregato# si |cela|celano|",                                                                                 "#tief in der Einöde#, |wäre|wären|"},
        Text{"beneath #the sands#, flames reveal",                                                                          "#sous le désert#, les flammes font apparaître",                                                                "tras las #arenas# unas llamas revelan",                                                                                            "#sotto la sabbia#, delle fiamme rivelano",                                                                                             "ein flammendes #Geheimnis des Sandes#, |wäre|wären|"},
    });

    hintTable[WASTELAND_GS] = HintText::Sometimes({
        // obscure text
        Text{"a #spider in the wasteland# holds",                                                                           "#l'araignée dans le désert# donne",                                                                            "una #Skulltula del desierto encantado# otorga",                                                                                    "un #ragno nel deserto stregato# tiene",                                                                                                "in einer #Spinne der Einöde#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_COMPOSERS_GRAVE_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"#flames in the Composers' Grave# reveal",                                                                     "#les flammes dans le Tombeau des Compositeurs# cachent",                                                       "#las llamas del Panteón Real# revelan",                                                                                            "nella #tomba della famiglia reale, le fiamme# rivelano",                                                                               "ein #flammendes Geheimnis des Königsgrabes#, |wäre|wären|"},
        Text{"the #Composer Brothers hid#",                                                                                 "#les Frères Compositeurs ont caché#",                                                                          "los #hermanos compositores esconden#",                                                                                             "i #fratelli Mortaldi# chiusero in un forziere",                                                                                        "im Versteck der #Gebrüder Brahmstein#, |wäre|wären|"},
    });

    hintTable[ZF_BOTTOM_FREESTANDING_POH] = HintText::Sometimes({
        // obscure text
        Text{"#under the icy waters# lies",                                                                                 "#sous les eaux glacées# se cache",                                                                             "#bajo las congeladas aguas# yace",                                                                                                 "sotto le #acque ghiacciate# puoi trovare",                                                                                             "#unter eisigen Gewässern#, |wäre|wären|"},
    });

    hintTable[GC_POT_FREESTANDING_POH] = HintText::Sometimes({
        // obscure text
        Text{"spinning #Goron pottery# contains",                                                                           "la #poterie Goron# contient",                                                                                  "una #cerámica goron# contiene",                                                                                                    "della #ceramica Goron# roteante contiene",                                                                                             "in rotierender, #goronischer Keramik#, |wäre|wären|"},
    });

    hintTable[ZD_KING_ZORA_THAWED] = HintText::Sometimes({
        // obscure text
        Text{"a #defrosted dignitary# gifts",                                                                               "le #monarque libéré# donne",                                                                                   "una #liberación monárquica# brinda",                                                                                               "un #pesce scongelato# fornisce",                                                                                                       "der Dank eines #enteisten Monarchen#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"unfreezing #King Zora# grants",                                                                               "dégeler #le Roi Zora# donne",                                                                                  "#descongelar al Rey Zora# conduce a",                                                                                              "chi #scongela Re Zora# riceverà",                                                                                                      "die Belohnung fürs Auftauen von #König Zora#, |wäre|wären|"}
    );

    hintTable[ZD_TRADE_PRESCRIPTION] = HintText::Sometimes({
        // obscure text
        Text{"#King Zora# hurriedly entrusts",                                                                              "le #Roi Zora# confie rapidement",                                                                              "el #Rey Zora# otorga con prisa",                                                                                                   "#Re Zora# affida frettolosamente",                                                                                                     "#König Zoras# Tauschware, |wäre|wären|"},
    });

    hintTable[DMC_DEKU_SCRUB] = HintText::Sometimes({
        // obscure text
        Text{"a single #scrub in the crater# sells",                                                                        "la #Peste Mojo dans le cratère# vend",                                                                         "un solitario #deku del cráter# vende",                                                                                             "l'unico #cespuglio nel cratere# vende",                                                                                                "die Ware eines #Deku-Händlers des Kraters#, |wäre|wären|"},
    });

    hintTable[DMC_GS_CRATE] = HintText::Sometimes({
        // obscure text
        Text{"a spider under a #crate in the crater# holds",                                                                "l'araignée dans une #boîte volcanique# a",                                                                     "una Skulltula bajo una #caja del cráter# otorga",                                                                                  "un ragno sotto una #cassa nel cratere# possiede",                                                                                      "in #einer Kiste des Kraters#, |wäre|wären|"},
    });


    hintTable[DEKU_TREE_MQ_AFTER_SPINNING_LOG_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"a #temporal stone within a tree# contains",                                                                   "une #pierre bleue dans un arbre# mène à",                                                                      "un #bloque temporal de un árbol# contiene",                                                                                        "una #pietra temporale in un albero# nasconde",                                                                                         "unter einem #flüchtigen Stein eines Baumes#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #temporal stone within the Deku Tree# contains",                                                            "une #pierre temporelle dans l'Arbre Mojo# cache",                                                              "un #bloque temporal del Gran Árbol Deku# contiene",                                                                                "un #blocco del tempo nell'Albero Deku# nasconde",                                                                                      "unter einem #Zeitportal-Stein des Deku-Baumes#, |wäre|wären|"}
    );

    hintTable[DEKU_TREE_MQ_GS_BASEMENT_GRAVES_ROOM] = HintText::Sometimes({
        // obscure text
        Text{"a #spider on a ceiling in a tree# holds",                                                                     "une #araignée haut-perchée dans un arbre# a",                                                                  "una #Skulltula en el techo de un árbol# otorga",                                                                                   "#un ragno su un soffitto in un albero# possiede",                                                                                      "in der #Spinne, an einer Decke eines Baumes#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #spider on a ceiling in the Deku Tree# holds",                                                              "une #Skulltula haut-perchée dans l'Arbre Mojo# a",                                                             "una #Skulltula en el techo del Gran Árbol Deku# otorga",                                                                           "#un ragno sopra delle tombe nell'Albero Deku# possiede",                                                                               "in der #Spinne, an einer Decke des Deku-Baumes#, |wäre|wären|"}
    );

    hintTable[DODONGOS_CAVERN_MQ_GS_SONG_OF_TIME_BLOCK_ROOM] = HintText::Sometimes({
        // obscure text
        Text{"a spider under #temporal stones in a cavern# holds",                                                          "une araignée sous #une pierre bleue dans une caverne# a",                                                      "una Skulltula bajo #bloques temporales de una cueva# otorga",                                                                      "un ragno protetto da #pietre temporali in una caverna# nasconde",                                                                      "in der Spinne, unter einem #flüchtigen Stein einer Höhle#, |wäre|wären|"},
    }, {},
        // clear text
        Text{"a spider under #temporal stones in Dodongo's Cavern# holds",                                                  "une Skulltula sous #la pierre temporelle dans la Caverne Dodongo# a",                                          "una Skulltula bajo #bloques temporales de la Cueva de los Dodongos# otorga",                                                       "un ragno protetto da #blocchi del tempo nella caverna dei Dodongo# nasconde",                                                          "in der Spinne, unter #Zeitportal-Steinen von Dodongos Höhle#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_BOOMERANG_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"a school of #stingers swallowed by a deity# guard",                                                           "les #Mantas dans un gardien# protègent",                                                                       "unos de #stingers engullidos por cierta deidad# guardan",                                                                          "una divinità ha inghiottito #un banco di trigoni volanti# con",                                                                        "nahe eines #verschluckten Fischschwarms#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a school of #stingers swallowed by Jabu-Jabu# guard",                                                         "les #Mantas dans le Ventre de Jabu-Jabu# protègent",                                                           "unos #stingers engullidos por Jabu-Jabu# guardan",                                                                                 "#un banco di trigoni volanti# nella pancia di Jabu Jabu protegge",                                                                     "#nahe Fischen in Jabu-Jabus Bauch#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_MQ_GS_INVISIBLE_ENEMIES_ROOM] = HintText::Sometimes({
        // obscure text
        Text{"a spider surrounded by #shadows in the belly of a deity# holds",                                              "une araignée entourée d'#ombres dans un Gardien# possède",                                                     "una Skulltula rodeada de #sombras en la tripa de cierta diedad# otorga",                                                           "un ragno circondato da #ombre nella pancia di una divinità# tiene",                                                                    "in einer, #von Schatten umgebenen# Spinne des #Bauches einer Gottheit#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a spider surrounded by #shadows in Jabu-Jabu's Belly# holds",                                                 "une Skulltula entourée d'#ombres dans le Ventre de Jabu-Jabu# possède",                                        "una Skulltula rodeada de #sombras en la Tripa de Jabu-Jabu# otorga",                                                               "un ragno circondato da #creature invisibili nella pancia di Jabu Jabu# tiene",                                                         "in einer, #von Schatten umgebenen# Spinne in #Jabu-Jabus Bauch#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_MQ_COW] = HintText::Sometimes({
        // obscure text
        Text{"a #cow swallowed by a deity# gifts",                                                                          "une #vache dans un gardien# donne",                                                                            "una #vaca engullida por cierta deidad# brinda",                                                                                    "una #mucca inghiottita da una divinità# dona",                                                                                         "die Milch, einer #von einer Gottheit verschluckten Kuh#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #cow swallowed by Jabu-Jabu# gifts",                                                                        "une #vache avalée par Jabu-Jabu# donne",                                                                       "una #vaca engullida por Jabu-Jabu# brinda",                                                                                        "una #mucca inghiottita da Jabu Jabu# dona",                                                                                            "die Milch einer #Kuh in Jabu-Jabus Bauch#, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_SCARECROW_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"a #scarecrow atop the volcano# hides",                                                                        "un #épouvantail au Sommet d'un Volcan# donne",                                                                 "un #espantapájaros en lo alto del volcán# esconde",                                                                                "un #fantoccio in cima al vulcano# nasconde",                                                                                           "über einer #Vogelscheuche im oberen Teil des Vulkans#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Pierre atop the Fire Temple# hides",                                                                         "#Pierre l'Épouvantail au Sommet du Temple du Feu# donne",                                                      "#Pierre en lo alto del Templo del Fuego# esconde",                                                                                 "#Pierre in cima al Santuario del Fuoco# nasconde",                                                                                     "über #Peter im oberen Teil des Feuertempels#, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_MEGATON_HAMMER_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"the #Flare Dancer atop the volcano# guards a chest containing",                                               "le #danseur au sommet d'un Volcan# protège",                                                                   "el #Bailafuego en lo alto del volcán# otorga",                                                                                     "il #ballerino in cima al vulcano# protegge un forziere contenente",                                                                    "nahe dem #Flammenderwisch, im oberen Teil des Vulkans#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #Flare Dancer atop the Fire Temple# guards a chest containing",                                           "le #Danse-Flamme au sommet du Temple du Feu# protège",                                                         "el #Bailafuego en lo alto del Templo del Fuego# otorga",                                                                           "il #Fiammerino in cima al Santuario del Fuoco# protegge un forziere contenente",                                                       "nahe dem #Flammenderwisch, im oberen Teil des Feuertempels#, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_MQ_CHEST_ON_FIRE] = HintText::Sometimes({
        // obscure text
        Text{"the #Flare Dancer atop the volcano# guards a chest containing",                                               "le #danseur au sommet d'un volcan# protège",                                                                   "el #Bailafuego en lo alto del volcán# otorga",                                                                                     "il #ballerino in cima al vulcano# protegge un forziere contenente",                                                                    "nahe dem #Flammenderwisch, im oberen Teil des Vulkans#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #Flare Dancer atop the Fire Temple# guards a chest containing",                                           "le #Danse-Flamme au sommet du Temple du Feu# protège",                                                         "el #Bailafuego en lo alto del Templo del Fuego# otorga",                                                                           "il #Fiammerino in cima al Santuario del Fuoco# protegge un forziere contenente",                                                       "nahe dem #Flammenderwisch, im oberen Teil des Feuertempels#, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_MQ_GS_SKULL_ON_FIRE] = HintText::Sometimes({
        // obscure text
        Text{"a #spider under a block in the volcano# holds",                                                               "une #araignée sous un bloc dans le volcan# a",                                                                 "una #Skulltula bajo el bloque de un volcán# otorga",                                                                               "un #ragno sotto un blocco nel vulcano# ha",                                                                                            "in der #Spinne, unter einem Block des Vulkans#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #spider under a block in the Fire Temple# holds",                                                           "une #Skulltula sous un bloc dans le Temple du Feu# a",                                                         "una #Skulltula bajo un bloque del Templo del Fuego# otorga",                                                                       "un #ragno sotto un blocco nel Santuario del Fuoco# ha",                                                                                "in der #Spinne, unter einem Block des Feuertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_RIVER_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"beyond the #river under the lake# waits",                                                                     "au delà de #la rivière sous le lac# se cache",                                                                 "tras el #río bajo el lago# yace",                                                                                                  "oltre il #fiume sotto il lago# un forziere contiene",                                                                                  "hinter dem #Fluss unterhalb des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"beyond the #river in the Water Temple# waits",                                                                "au delà de #la rivière dans le Temple de l'Eau# se cache",                                                     "tras el #río del Templo del Agua# yace",                                                                                           "oltre il #fiume nel Santuario dell'Acqua# un forziere contiene",                                                                       "hinter dem #Fluss des Wassertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_BOSS_KEY_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"dodging #rolling boulders under the lake# leads to",                                                          "éviter des #rochers roulants sous le lac# mène à",                                                             "esquivar #rocas rodantes bajo el lago# conduce a",                                                                                 "schivare #massi rotolanti sotto il lago# porta verso",                                                                                 "hinter #rollenden Felsen unterhalb des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"dodging #rolling boulders in the Water Temple# leads to",                                                     "éviter des #rochers roulants dans le Temple de l'Eau# mène à",                                                 "esquivar #rocas rondantes del Templo del Agua# conduce a",                                                                         "schivare #massi rotolanti nel Santuario dell'Acqua# porta verso",                                                                      "hinter #rollenden Felsen des Wassertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_GS_BEHIND_GATE] = HintText::Sometimes({
        // obscure text
        Text{"a spider behind a #gate under the lake# holds",                                                               "une araignée derrière une #barrière sous le lac# a",                                                           "una Skulltula tras #una valla bajo el lago# otorga",                                                                               "un ragno dietro un #cancello sotto il lago# ha",                                                                                       "in der Spinne, hinter einem #Gatter unterhalb des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a spider behind a #gate in the Water Temple# holds",                                                          "une Skulltula derrière une #barrière dans le Temple de l'Eau# a",                                              "una Skulltula tras #una valla del Templo del Agua# otorga",                                                                        "un ragno dietro un #cancello nel Santuario dell'Acqua# ha",                                                                            "in der Spinne, hinter einem #Gatter des Wassertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_MQ_FREESTANDING_KEY] = HintText::Sometimes({
        // obscure text
        Text{"hidden in a #box under the lake# lies",                                                                       "dans une #boîte sous le lac# gît",                                                                             "en una #caja bajo el lago# yace",                                                                                                  "in una #cassa sotto il lago# puoi trovare",                                                                                            "in einer #Kiste am Grund des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"hidden in a #box in the Water Temple# lies",                                                                  "dans une #boîte dans le Temple de l'Eau# gît",                                                                 "en una #caja del Templo del Agua# yace",                                                                                           "in una #cassa nel Santuario dell'Acqua# puoi trovare",                                                                                 "in einer #Kiste des Wassertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_MQ_GS_FREESTANDING_KEY_AREA] = HintText::Sometimes({
        // obscure text
        Text{"the #locked spider under the lake# holds",                                                                    "une #araignée emprisonnée sous le lac# a",                                                                     "la #Skulltula enjaulada bajo el lago# otorga",                                                                                     "il ragno #chiuso a chiave sotto il lago# ha",                                                                                          "in einer #eingesperrten Spinne unterhalb des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #locked spider in the Water Temple# holds",                                                               "une #Skulltula emprisonnée dans le Temple de l'Eau# a",                                                        "la #Skulltula enjaulada del Templo del Agua# otorga",                                                                              "il ragno #chiuso a chiave nel Santuario dell'Acqua# ha",                                                                               "in einer #eingesperrten Spinne des Wassertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_MQ_GS_TRIPLE_WALL_TORCH] = HintText::Sometimes({
        // obscure text
        Text{"a spider behind a #gate under the lake# holds",                                                               "une #araignée derrière une barrière sous le lac# a",                                                           "una Skulltula tras una #valla bajo el lago# otorga",                                                                               "un ragno dietro un #cancello sotto il lago# ha",                                                                                       "in der Spinne, hinter einem #Gatter unterhalb des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a spider behind a #gate in the Water Temple# holds",                                                          "une #Skulltula derrière une barrière dans le Temple de l'Eau# a",                                              "una Skulltula tras una #valla del Templo del Agua#",                                                                               "un ragno dietro un #cancello nel Santuario dell'Acqua# ha",                                                                            "in der Spinne, hinter einem #Gatter des Wassertempels#, |wäre|wären|"}
    );

    hintTable[GERUDO_TRAINING_GROUNDS_UNDERWATER_SILVER_RUPEE_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"those who seek #sunken silver rupees# will find",                                                             "ceux qui pêchent les #joyaux argentés# trouveront",                                                            "aquellos que busquen las #rupias plateadas sumergidas# encontrarán",                                                               "coloro che cercano #rupie d'argento sommerse# troveranno",                                                                             "#geborgenes Silber#, |wäre|wären|"},
        Text{"the #thieves' underwater training# rewards",                                                                  "l'#épreuve de plongée des voleurs# recèle",                                                                    "la #instrucción submarina de las bandidas# premia",                                                                                "l'#addestramento subacqueo dei ladri# è premiato con",                                                                                 "beim #Tauchtraining der Diebe#, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_UNDERWATER_SILVER_RUPEE_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"those who seek #sunken silver rupees# will find",                                                             "ceux qui pêchent les #joyaux argentés# trouveront",                                                            "aquellos que busquen las #rupias plateadas sumergidas# encontrarán",                                                               "coloro che cercano #rupie d'argento sommerse# troveranno",                                                                             "#geborgenes Silber#, |wäre|wären|"},
        Text{"the #thieves' underwater training# rewards",                                                                  "l'#épreuve de plongée des voleurs# recèle",                                                                    "la #instrucción submarina de las bandidas# premia",                                                                                "l'#addestramento subacqueo dei ladri# è premiato con",                                                                                 "beim #Tauchtraining der Diebe#, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MAZE_PATH_FINAL_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"the final prize of #the thieves' training# is",                                                               "la récompense ultime de #l'épreuve des voleurs# est",                                                          "el premio final de la #instrucción de las bandidas# brinda",                                                                       "il premio finale dell'#addestramento dei ladri# è",                                                                                    "der #Hauptpreis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_ICE_ARROWS_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"the final prize of #the thieves' training# is",                                                               "la récompense ultime de #l'épreuve des voleurs# est",                                                          "el premio final de la #instrucción de las bandidas# brinda",                                                                       "il premio finale dell'#addestramento dei ladri# è",                                                                                    "der #Hauptpreis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_LENS_OF_TRUTH_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"the well's #grasping ghoul# hides",                                                                           "la #terreur du Puits# cache",                                                                                  "en las #profundidades del pozo# se esconde",                                                                                       "l'#incubo del pozzo# possiede",                                                                                                        "nahe dem #ergreifenden Ghul# des Brunnens, |wäre|wären|"},
        Text{"a #nether dweller in the well# holds",                                                                        "le #spectre qui réside dans le Puits# a",                                                                      "el #temido morador del pozo# concede",                                                                                             "un #tipo manesco sottoterra# possiede",                                                                                                "nahe dem #unterirdischen Bewohner des Brunnens#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Dead Hand in the well# holds",                                                                               "le #Poigneur dans le Puits# cache",                                                                            "la #Mano Muerta del pozo# concede",                                                                                                "lo #Smaniosso nel pozzo# possiede",                                                                                                    "nahe dem #Todesgrapscher des Brunnens#, |wäre|wären|"}
    );

    hintTable[BOTTOM_OF_THE_WELL_MQ_COMPASS_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"the well's #grasping ghoul# hides",                                                                           "la #terreur du Puits# cache",                                                                                  "en las #profundidades del pozo# se esconde",                                                                                       "l'#incubo del pozzo# possiede",                                                                                                        "nahe dem #ergreifenden Ghul# des Brunnens, |wäre|wären|"},
        Text{"a #nether dweller in the well# holds",                                                                        "le #spectre qui réside dans le Puits# a",                                                                      "el #temido morador del pozo# concede",                                                                                             "un #tipo manesco sottoterra# possiede",                                                                                                "nahe dem #unterirdischen Bewohner des Brunnens#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Dead Hand in the well# holds",                                                                               "le #Poigneur dans le Puits# cache",                                                                            "la #Mano Muerta del pozo# concede",                                                                                                "lo #Smaniosso nel pozzo# possiede",                                                                                                    "nahe dem #Todesgrapscher des Brunnens#, |wäre|wären|"}
    );

    hintTable[SPIRIT_TEMPLE_SILVER_GAUNTLETS_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"the treasure #sought by Nabooru# is",                                                                         "le Trésor que #recherche Nabooru# est",                                                                        "el #ansiado tesoro de Nabooru# brinda",                                                                                            "il tesoro che #Naburu cerca# è",                                                                                                       "der Schatz, nachdem #Naboru sich sehnt#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"upon the #Colossus's right hand# is",                                                                         "sur la #main droite du Colosse# repose",                                                                       "en la #mano derecha del Coloso# yace",                                                                                             "sulla #mano destra del colosso# puoi trovare",                                                                                         "auf der #rechten Hand des Kolosses#, |wäre|wären|"}
    );

    hintTable[SPIRIT_TEMPLE_MIRROR_SHIELD_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"upon the #Colossus's left hand# is",                                                                          "sur la #main gauche du Colosse# repose",                                                                       "en la #mano izquierda del Coloso# yace",                                                                                           "sulla #mano sinistra del colosso# puoi trovare",                                                                                       "auf der #linken Hand des Kolosses#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_CHILD_HAMMER_SWITCH_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"a #temporal paradox in the Colossus# yields",                                                                 "un #paradoxe temporel dans le Colosse# révèle",                                                                "una #paradoja temporal del Coloso# conduce a",                                                                                     "un #paradosso temporale nel colosso# rivela",                                                                                          "ein #Zeitparadoxon des Kolosses#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #temporal paradox in the Spirit Temple# yields",                                                            "le #paradoxe temporel dans le Temple de l'Esprit# révèle",                                                     "una #paradoja temporal del Coloso# conduce a",                                                                                     "un #paradosso temporale nel Santuario dello Spirito# rivela",                                                                          "ein #Zeitparadoxon des Geistertempels#, |wäre|wären|"}
    );

    hintTable[SPIRIT_TEMPLE_MQ_SYMPHONY_ROOM_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"a #symphony in the Colossus# yields",                                                                         "la #symphonie du Colosse# révèle",                                                                             "una #sinfonía del Coloso# conduce a",                                                                                              "una #sinfonia nel colosso# rivela",                                                                                                    "eine #Symphonie des Kolosses#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #symphony in the Spirit Temple# yields",                                                                    "les #cinq chansons du Temple de l'Esprit# révèlent",                                                           "una #sinfonía del Coloso# conduce a",                                                                                              "una #sinfonia nel Santuario dello Spirito# rivela",                                                                                    "eine #Symphonie des Geistertempels#, |wäre|wären|"}
    );

    hintTable[SPIRIT_TEMPLE_MQ_GS_SYMPHONY_ROOM] = HintText::Sometimes({
        // obscure text
        Text{"a #spider's symphony in the Colossus# yields",                                                                "la #mélodie de l'araignée du Colosse# révèle",                                                                 "la #Skulltula de la sinfonía del Coloso# otorga",                                                                                  "un #ragno musicofilo nel colosso# ha",                                                                                                 "in der #Spinne, nahe der Symphonie des Kolosses#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #spider's symphony in the Spirit Temple# yields",                                                           "la #mélodie de la Skulltula du Temple de l'Esprit# révèle",                                                    "la #Skulltula de la sinfonía del Coloso# otorga",                                                                                  "un #ragno musicofilo nel Santuario dello Spirito# ha",                                                                                 "in der #Spinne, nahe der Symphonie des Geistertempels#, |wäre|wären|"}
    );

    hintTable[SHADOW_TEMPLE_INVISIBLE_FLOORMASTER_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"shadows in an #invisible maze# guard",                                                                        "les ombres dans le #labyrinthe invisible# protègent",                                                          "las sombras del #laberinto invisible# esconden",                                                                                   "ombre vicino a #un labirinto invisibile# nascondono",                                                                                  "nahe Schatten des #unsichtbaren Irrgartens#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_BOMB_FLOWER_CHEST] = HintText::Sometimes({
        // obscure text
        Text{"shadows in an #invisible maze# guard",                                                                        "les ombres dans le #labyrinthe invisible# protègent",                                                          "las sombras del #laberinto invisible# esconden",                                                                                   "ombre vicino a #un labirinto invisibile# nascondono",                                                                                  "nahe Schatten des #unsichtbaren Irrgartens#, |wäre|wären|"},
    });

    /*--------------------------
    |    ENTRANCE HINT TEXT    |
    ---------------------------*/

    hintTable[DESERT_COLOSSUS_TO_COLOSSUS_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"lifting a #rock in the desert# reveals",                                                                      "soulever une #roche dans le désert# révèle",                                                                   "levantar una #roca del desierto# revela",                                                                                          "sollevare una #roccia nel deserto# rivela",                                                                                            "unter einem #silbernen Felsen# der Wüste, |wäre|wären|"},
    });

    hintTable[GV_GROTTO_LEDGE_TO_GV_OCTOROK_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"a rock on #a ledge in the valley# hides",                                                                     "soulever une #roche dans la vallée# révèle",                                                                   "levantar una #roca al borde del valle# esconde",                                                                                   "una #roccia su una sporgenza nella valle# nasconde",                                                                                   "unter einem #silbernen Felsen# des Tals, |wäre|wären|"},
    });

    hintTable[GC_GROTTO_PLATFORM_TO_GC_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"a #pool of lava# in Goron City blocks the way to",                                                            "l'#étang de lave# dans le Village Goron renferme",                                                             "un #estanque de lava# en la Ciudad Goron bloquea el paso a",                                                                       "una #pozza di lava# nella città dei Goron blocca il passaggio per",                                                                    "hinter einem #Lavasee# Goronias, |wäre|wären|"},
    });

    hintTable[GERUDO_FORTRESS_TO_GF_STORMS_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"a #storm within Gerudo's Fortress# reveals",                                                                  "une #tempête dans la Forteresse Gerudo# révèle",                                                               "una #tormenta en la Fortaleza Gerudo# revela",                                                                                     "una #tempesta nella fortezza Gerudo# rivela",                                                                                          "in einem #stürmischen Erdloch der Gerudo-Festung#, |wäre|wären|"},
    });

    hintTable[ZORAS_DOMAIN_TO_ZD_STORMS_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"a #storm within Zora's Domain# reveals",                                                                      "une #tempête dans le Domaine Zora# révèle",                                                                    "una #tormenta en la Región de los Zora# revela",                                                                                   "una #tempesta nel villaggio degli Zora# rivela",                                                                                       "in einem #stürmischen Erdloch von Zoras Reich#, |wäre|wären|"},
    });

    hintTable[HYRULE_CASTLE_GROUNDS_TO_HC_STORMS_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"a #storm near the castle# reveals",                                                                           "une #tempête près du Château d'Hyrule# révèle",                                                                "una #tormenta junto al castillo# revela",                                                                                          "una #tempesta vicino al castello# rivela",                                                                                             "in einem #stürmischen Erdloch nahe eines Schlosses#, |wäre|wären|"},
    });

    hintTable[GV_FORTRESS_SIDE_TO_GV_STORMS_GROTTO] = HintText::Entrance({
        // obscure text
        Text{"a #storm in the valley# reveals",                                                                             "une #tempête dans la Vallée Gerudo# révèle",                                                                   "una #tormenta en el valle# revela",                                                                                                "una #tempesta nella valle# rivela",                                                                                                    "in einem #stürmischen Erdloch des Gerudotals#, |wäre|wären|"},
    });

    hintTable[DESERT_COLOSSUS_TO_COLOSSUS_GREAT_FAIRY_FOUNTAIN] = HintText::Entrance({
        // obscure text
        Text{"a #fractured desert wall# hides",                                                                             "un #mur fragile dans le désert# cache",                                                                        "una #agrietada pared del desierto# esconde",                                                                                       "una #parete friabile nel deserto# nasconde",                                                                                           "hinter einer #brüchigen Wand# der Wüste, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_GROUNDS_TO_OGC_GREAT_FAIRY_FOUNTAIN] = HintText::Entrance({
        // obscure text
        Text{"a #heavy pillar# outside the castle obstructs",                                                               "un #rocher fragile près du Château# cache",                                                                    "una #pesada columna# fuera del castillo obstruye",                                                                                 "un #pesante pilastro# fuori dal castello ostruisce",                                                                                   "hinter einer #schweren Säule# nahe eines Schlosses, |wäre|wären|"},
    });

    hintTable[ZORAS_FOUNTAIN_TO_ZF_GREAT_FAIRY_FOUNTAIN] = HintText::Entrance({
        // obscure text
        Text{"a #fountain wall# hides",                                                                                     "un #mur fragile dans la Fontaine Zora# cache",                                                                 "una #pared de la fuente# esconde",                                                                                                 "una #parete della sorgente# nasconde",                                                                                                 "hinter einer #Wand einer Quelle#, |wäre|wären|"},
    });

    hintTable[GV_FORTRESS_SIDE_TO_GV_CARPENTER_TENT] = HintText::Entrance({
        // obscure text
        Text{"a #tent in the valley# covers",                                                                               "la #tente dans la vallée# recouvre",                                                                           "una #tienda de campaña del valle# cubre",                                                                                          "una #tenda nella valle# copre",                                                                                                        "in einem #Zelt des Tals#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_WARP_PAD_REGION_TO_SHADOW_TEMPLE_ENTRYWAY] = HintText::Entrance({
        // obscure text
        Text{"at the #back of the Graveyard#, there is",                                                                    "#derrière le Cimetière# se trouve",                                                                            "en la #parte trasera del cementerio# se halla",                                                                                    "#in fondo al cimitero# si trova",                                                                                                      "am #hinteren Ende des Friedhofs#, |wäre|wären|"},
    });

    hintTable[LAKE_HYLIA_TO_WATER_TEMPLE_LOBBY] = HintText::Entrance({
        // obscure text
        Text{"deep #under a vast lake#, one can find",                                                                      "#sous le Lac# gît",                                                                                            "en las #profundidades de un lago inmenso# se halla",                                                                               "#sotto le acque di un lago# puoi trovare",                                                                                             "am #Grund eines tiefen Sees#, |wäre|wären|"},
    });

    hintTable[GERUDO_FORTRESS_TO_GERUDO_TRAINING_GROUNDS_LOBBY] = HintText::Entrance({
        // obscure text
        Text{"paying a #fee to the Gerudos# grants access to",                                                              "l'#entrée payante des Gerudo# donne accès à",                                                                  "pagarle una #tasa a las gerudo# da acceso a",                                                                                      "pagando una #quota alle Gerudo# si può raggiungere",                                                                                   "in einem #Gebäude mit Eintrittskosten#, |wäre|wären|"},
    });

    hintTable[ZORAS_FOUNTAIN_TO_JABU_JABUS_BELLY_BEGINNING] = HintText::Entrance({
        // obscure text
        Text{"inside #Jabu-Jabu#, one can find",                                                                            "#dans Jabu-Jabu# se trouve",                                                                                   "dentro de #Jabu-Jabu# se halla",                                                                                                   "dentro #Jabu Jabu# si trova",                                                                                                          "in #Jabu-Jabu, |wäre|wären|"},
    });

    hintTable[KAKARIKO_VILLAGE_TO_BOTTOM_OF_THE_WELL] = HintText::Entrance({
        // obscure text
        Text{"a #village well# leads to",                                                                                   "au fond du #puits du village# se trouve",                                                                      "el #pozo de un pueblo# conduce a",                                                                                                 "il #pozzo del villaggio# è costruito sopra",                                                                                           "in einem #Dorfbrunnen#, |wäre|wären|"},
    });

    /*--------------------------
    |      EXIT HINT TEXT      |
    ---------------------------*/
    //maybe make a new type for this? I'm not sure if it really matters

    hintTable[LINKS_POCKET] = HintText::Exclude({
        // obscure text
        Text{"Link's Pocket",                                                                                               "les poches de @",                                                                                              "el bolsillo de @",                                                                                                                 "la tasca di @",                                                                                                                        "in @s Tasche"},
    });

    hintTable[KOKIRI_FOREST] = HintText::Exclude({
        // obscure text
        Text{"Kokiri Forest",                                                                                               "la Forêt Kokiri",                                                                                              "el Bosque Kokiri",                                                                                                                 "la foresta dei Kokiri",                                                                                                                "im Kokiri-Wald"},
    });

    hintTable[THE_LOST_WOODS] = HintText::Exclude({
        // obscure text
        Text{"the Lost Woods",                                                                                              "les Bois Perdus",                                                                                              "el Bosque Perdido",                                                                                                                "il bosco perduto",                                                                                                                     "in den Verlorenen Wäldern"},
    });

    hintTable[SACRED_FOREST_MEADOW] = HintText::Exclude({
        // obscure text
        Text{"Sacred Forest Meadow",                                                                                        "le Bosquet Sacré",                                                                                             "la pradera sagrada del bosque",                                                                                                    "la radura sacra",                                                                                                                      "auf der Heiligen Lichtung"},
    });

    hintTable[HYRULE_FIELD] = HintText::Exclude({
        // obscure text
        Text{"Hyrule Field",                                                                                                "la Plaine d'Hyrule",                                                                                           "la Llanura de Hyrule",                                                                                                             "la piana di Hyrule",                                                                                                                   "auf den Ebenen Hyrules"},
    });

    hintTable[LAKE_HYLIA] = HintText::Exclude({
        // obscure text
        Text{"Lake Hylia",                                                                                                  "le Lac Hylia",                                                                                                 "el Lago Hylia",                                                                                                                    "il Lago Hylia",                                                                                                                        "am Hylia-See"},
    });

    hintTable[GERUDO_VALLEY] = HintText::Exclude({
        // obscure text
        Text{"Gerudo Valley",                                                                                               "la Vallée Gerudo",                                                                                             "el Valle Gerudo",                                                                                                                  "la Valle Gerudo",                                                                                                                      "im Gerudotal"},
    });

    hintTable[GERUDO_FORTRESS] = HintText::Exclude({
        // obscure text
        Text{"Gerudo's Fortress",                                                                                           "la Forteresse Gerudo",                                                                                         "la Fortaleza Gerudo",                                                                                                              "la fortezza Gerudo",                                                                                                                   "in der Gerudo-Festung"},
    });

    hintTable[HAUNTED_WASTELAND] = HintText::Exclude({
        // obscure text
        Text{"Haunted Wasteland",                                                                                           "le Désert Hanté",                                                                                              "el desierto encantado",                                                                                                            "il deserto stregato",                                                                                                                  "in der Gespensterwüste"},
    });

    hintTable[DESERT_COLOSSUS] = HintText::Exclude({
        // obscure text
        Text{"Desert Colossus",                                                                                             "le Colosse du Désert",                                                                                         "el Coloso del Desierto",                                                                                                           "il colosso del deserto",                                                                                                               "am Wüstenkoloss"},
    });

    hintTable[THE_MARKET] = HintText::Exclude({
        // obscure text
        Text{"the Market",                                                                                                  "la Place du Marché",                                                                                           "la plaza del mercado",                                                                                                             "il mercato",                                                                                                                           "auf dem Marktplatz"},
    });

    hintTable[TEMPLE_OF_TIME] = HintText::Exclude({
        // obscure text
        Text{"Temple of Time",                                                                                              "le Temple du Temps",                                                                                           "el Templo del Tiempo",                                                                                                             "il Santuario del Tempo",                                                                                                               "in der Zitadelle der Zeit"},
    });

    hintTable[HYRULE_CASTLE] = HintText::Exclude({
        // obscure text
        Text{"Hyrule Castle",                                                                                               "le Château d'Hyrule",                                                                                          "el Castillo de Hyrule",                                                                                                            "il castello di Hyrule",                                                                                                                "vor Schloss Hyrule"},
    });

    hintTable[OUTSIDE_GANONS_CASTLE] = HintText::Exclude({
        // obscure text
        Text{"outside Ganon's Castle",                                                                                      "les Alentours du Château de Ganon",                                                                            "el exterior del Castillo de Ganon",                                                                                                "l'esterno del castello di Ganon",                                                                                                      "vor Ganons Schloss"},
    });

    hintTable[KAKARIKO_VILLAGE] = HintText::Exclude({
        // obscure text
        Text{"Kakariko Village",                                                                                            "le Village Cocorico",                                                                                          "Kakariko",                                                                                                                         "il villaggio Calbarico",                                                                                                               "in Kakariko"},
    });

    hintTable[THE_GRAVEYARD] = HintText::Exclude({
        // obscure text
        Text{"the Graveyard",                                                                                               "le Cimetière",                                                                                                 "el cementerio",                                                                                                                    "il cimitero",                                                                                                                          "auf dem Friedhof"},
    });

    hintTable[DEATH_MOUNTAIN_TRAIL] = HintText::Exclude({
        // obscure text
        Text{"Death Mountain Trail",                                                                                        "le Chemin du Péril",                                                                                           "el sendero de la Montaña de la Muerte",                                                                                            "il sentiero del Monte Morte",                                                                                                          "auf dem Gebirgspfad"},
    });

    hintTable[GORON_CITY] = HintText::Exclude({
        // obscure text
        Text{"Goron City",                                                                                                  "le Village Goron",                                                                                             "la Ciudad Goron",                                                                                                                  "la città dei Goron",                                                                                                                   "in Goronia"},
    });

    hintTable[DEATH_MOUNTAIN_CRATER] = HintText::Exclude({
        // obscure text
        Text{"Death Mountain Crater",                                                                                       "le Cratère du Péril",                                                                                          "el cráter de la Montaña de la Muerte",                                                                                             "il cratere del Monte Morte",                                                                                                           "im Todeskrater"},
    });

    hintTable[ZORAS_RIVER] = HintText::Exclude({
        // obscure text
        Text{"Zora's River",                                                                                                "le Fleuve Zora",                                                                                               "el Río Zora",                                                                                                                      "il Fiume Zora",                                                                                                                        "am Zora-Fluss"},
    });

    hintTable[ZORAS_DOMAIN] = HintText::Exclude({
        // obscure text
        Text{"Zora's Domain",                                                                                               "le Domaine Zora",                                                                                              "la Región de los Zora",                                                                                                            "il villaggio degli Zora",                                                                                                              "in Zoras Reich"},
    });

    hintTable[ZORAS_FOUNTAIN] = HintText::Exclude({
        // obscure text
        Text{"Zora's Fountain",                                                                                             "la Fontaine Zora",                                                                                             "la Fuente Zora",                                                                                                                   "la sorgente Zora",                                                                                                                     "an Zoras Quelle"},
    });

    hintTable[LON_LON_RANCH] = HintText::Exclude({
        // obscure text
        Text{"Lon Lon Ranch",                                                                                               "le Ranch Lon Lon",                                                                                             "el Rancho Lon Lon",                                                                                                                "la Fattoria Lon Lon",                                                                                                                  "auf der Lon Lon-Farm"},
    });


    /*--------------------------
    |     REGION HINT TEXT     |
    ---------------------------*/

    hintTable[KF_LINKS_HOUSE] = HintText::Region({
        // obscure text
        Text{"Link's House",                                                                                                "la #Maison de @#",                                                                                             "la casa de @",                                                                                                                     "la #casa di @#",                                                                                                                       "in #@s Haus#"},
    });

    // hintTable[TOT_MAIN] = HintText::Region({
    //     // obscure text
    //     Text{"the #Temple of Time#", "le #Temple du Temps#", "el Templo del Tiempo", "il #Santuario del Tempo#", "in der #Zitadelle der Zeit#"},
    // });

    hintTable[KF_MIDOS_HOUSE] = HintText::Region({
        // obscure text
        Text{"Mido's house",                                                                                                "la #Cabane de Mido#",                                                                                          "la casa de Mido",                                                                                                                  "la #casa di Mido#",                                                                                                                    "in #Midos Haus#"},
    });

    hintTable[KF_SARIAS_HOUSE] = HintText::Region({
        // obscure text
        Text{"Saria's House",                                                                                               "la #Cabane de Saria#",                                                                                         "la casa de Saria",                                                                                                                 "la #casa di Saria#",                                                                                                                   "in #Salias Haus#"},
    });

    hintTable[KF_HOUSE_OF_TWINS] = HintText::Region({
        // obscure text
        Text{"the #House of Twins#",                                                                                        "la #Cabane des Jumelles#",                                                                                     "la casa de las gemelas",                                                                                                           "la #casa delle gemelle#",                                                                                                              "im #Haus der Zwillinge#"},
    });

    hintTable[KF_KNOW_IT_ALL_HOUSE] = HintText::Region({
        // obscure text
        Text{"Know-It-All Brothers' House",                                                                                 "la #Cabane des Frères Je-Sais-Tout#",                                                                          "la casa de los hermanos Sabelotodo",                                                                                               "la #casa dei fratelli So-tutto-io#",                                                                                                   "im #Haus der Allwissenden Brüder#"},
    });

    hintTable[KF_KOKIRI_SHOP] = HintText::Region({
        // obscure text
        Text{"the #Kokiri Shop#",                                                                                           "la #Boutique Kokiri#",                                                                                         "la tienda kokiri",                                                                                                                 "il #negozio dei Kokiri#",                                                                                                              "im #Kokiri-Laden#"},
    });

    hintTable[LH_LAB] = HintText::Region({
        // obscure text
        Text{"the #Lakeside Laboratory#",                                                                                   "le #Laboratoire du Lac#",                                                                                      "el laboratorio del lago",                                                                                                          "il #laboratorio sul lago#",                                                                                                            "im #Labor am See#"},
    });

    hintTable[LH_FISHING_HOLE] = HintText::Region({
        // obscure text
        Text{"the #Fishing Pond#",                                                                                          "l'#Étang#",                                                                                                    "el estanque",                                                                                                                      "il #lago di pesca#",                                                                                                                   "am #Fischweiher#"},
    });

    hintTable[GV_CARPENTER_TENT] = HintText::Region({
        // obscure text
        Text{"the #Carpenters' tent#",                                                                                      "la #Tente des Charpentiers#",                                                                                  "la #tienda de campaña de los carpinteros#",                                                                                        "la #tenda dei carpentieri#",                                                                                                           "im #Zelt der Zimmerleute#"},
    });

    hintTable[MARKET_GUARD_HOUSE] = HintText::Region({
        // obscure text
        Text{"the #Guard House#",                                                                                           "le #Poste de Garde#",                                                                                          "la caseta de guardia",                                                                                                             "la #guardiola#",                                                                                                                       "im #Wachhaus#"},
    });

    hintTable[MARKET_MASK_SHOP] = HintText::Region({
        // obscure text
        Text{"the #Happy Mask Shop#",                                                                                       "la #Foire aux Masques#",                                                                                       "la tienda de La Máscara Feliz",                                                                                                    "il #negozio delle maschere della felicità#",                                                                                           "beim #Maskenhändler#"},
    });

    hintTable[MARKET_BOMBCHU_BOWLING] = HintText::Region({
        // obscure text
        Text{"the #Bombchu Bowling Alley#",                                                                                 "le #Bowling Teigneux#",                                                                                        "la Bolera Bombchu",                                                                                                                "la #sala da bowling#",                                                                                                                 "auf der #Minenbowlingbahn#"},
    });

    hintTable[MARKET_POTION_SHOP] = HintText::Region({
        // obscure text
        Text{"the #Market Potion Shop#",                                                                                    "l'#Apothicaire de la Place du Marché#",                                                                        "la tienda de pociones de la plaza del mercado",                                                                                    "il #negozio di pozioni del mercato#",                                                                                                  "im #Magie-Laden des Marktplatzes#"},
    });

    hintTable[MARKET_TREASURE_CHEST_GAME] = HintText::Region({
        // obscure text
        Text{"the #Treasure Chest Shop#",                                                                                   "la #Chasse aux Trésors#",                                                                                      "el Cofre del Tesoro",                                                                                                              "la #sala della fortuna#",                                                                                                              "in der #Truhenlotterie#"},
    });

    hintTable[MARKET_BOMBCHU_SHOP] = HintText::Region({
        // obscure text
        Text{"the #Bombchu Shop#",                                                                                          "le #Magasin de Missiles Teigneux#",                                                                            "la Tienda Bombchu",                                                                                                                "il #negozio di radiomine#",                                                                                                            "im #Krabbelminenladen#"},
    });

    hintTable[MARKET_MAN_IN_GREEN_HOUSE] = HintText::Region({
        // obscure text
        Text{"Man in Green's House",                                                                                        "la #Maison de l'Homme en Vert#",                                                                               "la casa del hombre de verde",                                                                                                      "la #casa del tipo in verde#",                                                                                                          "im #Haus des grün gekleideten Mannes#"},
    });

    hintTable[KAK_WINDMILL] = HintText::Region({
        // obscure text
        Text{"the #Windmill#",                                                                                              "le #Moulin#",                                                                                                  "el #molino#",                                                                                                                      "il #mulino#",                                                                                                                          "in der #Windmühle#"},
    });

    hintTable[KAK_CARPENTER_BOSS_HOUSE] = HintText::Region({
        // obscure text
        Text{"the #Carpenters' Boss House#",                                                                                "la #Maison du Chef des Charpentiers#",                                                                         "la casa del capataz de los carpinteros",                                                                                           "la #casa del capo dei carpentieri#",                                                                                                   "im #Haus des Chefs der Zimmerleute#"},
    });

    hintTable[KAK_HOUSE_OF_SKULLTULA] = HintText::Region({
        // obscure text
        Text{"the #House of Skulltula#",                                                                                    "la #Maison des Skulltulas#",                                                                                   "la casa de las Skulltulas",                                                                                                        "la #casa delle Aracnule#",                                                                                                             "im #Haus der Skulltula#"},
    });

    hintTable[KAK_IMPAS_HOUSE] = HintText::Region({
        // obscure text
        Text{"Impa's House",                                                                                                "la #Maison d'Impa#",                                                                                           "la casa de Impa",                                                                                                                  "la #casa di Impa#",                                                                                                                    "in #Impas Haus#"},
    });

    hintTable[KAK_IMPAS_HOUSE_BACK] = HintText::Region({
        // obscure text
        Text{"Impa's cow cage",                                                                                             "la #Cage à Vache d'Impa#",                                                                                     "la jaula de la vaca de Impa",                                                                                                      "la #gabbia della mucca di Impa#",                                                                                                      "in #Impas Kuhkäfig#"},
    });

    hintTable[KAK_ODD_POULTICE_BUILDING] = HintText::Region({
        // obscure text
        Text{"Granny's Potion Shop",                                                                                        "la #Maison Bleue de Cocorico#",                                                                                "la tienda de pociones de la abuela",                                                                                               "il #negozio della nonna#",                                                                                                             "in #Omas Magie-Laden#"},
    });

    hintTable[GRAVEYARD_DAMPES_HOUSE] = HintText::Region({
        // obscure text
        Text{"Dampé's Hut",                                                                                                 "la #Cabane du Fossoyeur#",                                                                                     "la cabaña de Dampé",                                                                                                               "la #capanna del becchino#",                                                                                                            "in der #Hütte des Totengräbers#"},
    });

    hintTable[GC_SHOP] = HintText::Region({
        // obscure text
        Text{"the #Goron Shop#",                                                                                            "la #Boutique Goron#",                                                                                          "la #tienda goron#",                                                                                                                "il #negozio dei Goron#",                                                                                                               "im #Goronen-Laden#"},
    });

    hintTable[ZD_SHOP] = HintText::Region({
        // obscure text
        Text{"the #Zora Shop#",                                                                                             "la #Boutique Zora#",                                                                                           "la #tienda zora#",                                                                                                                 "il #negozio degli Zora#",                                                                                                              "im #Zora-Laden#"},
    });

    hintTable[LLR_TALONS_HOUSE] = HintText::Region({
        // obscure text
        Text{"Talon's House",                                                                                               "la #Maison de Talon#",                                                                                         "la casa de Talon",                                                                                                                 "la #casa di Talon#",                                                                                                                   "in #Talons Haus#"},
    });

    hintTable[LLR_STABLES] = HintText::Region({
        // obscure text
        Text{"a #stable#",                                                                                                  "l'#Étable#",                                                                                                   "el establo",                                                                                                                       "la #stalla#",                                                                                                                          "in einem #Stall#"},
    });

    hintTable[LLR_TOWER] = HintText::Region({
        // obscure text
        Text{"the #Lon Lon Tower#",                                                                                         "la #Tour du Ranch Lon Lon#",                                                                                   "la torre Lon Lon",                                                                                                                 "la #torre della fattoria#",                                                                                                            "im #Turm der Lon Lon-Farm#"},
    });

    hintTable[MARKET_BAZAAR] = HintText::Region({
        // obscure text
        Text{"the #Market Bazaar#",                                                                                         "le #Bazar de la Place du Marché#",                                                                             "el bazar de la plaza del mercado",                                                                                                 "il #bazar del mercato#",                                                                                                               "im #Basar des Marktplatzes#"},
    });

    hintTable[MARKET_SHOOTING_GALLERY] = HintText::Region({
        // obscure text
        Text{"a #Slingshot Shooting Gallery#",                                                                              "le #Jeu d'Adresse de la Place du Marché#",                                                                     "el Tiro al Blanco con tirachinas",                                                                                                 "la #vecchia sala del tirassegno#",                                                                                                     "in der #Schleuder-Schießbude#"},
    });

    hintTable[KAK_BAZAAR] = HintText::Region({
        // obscure text
        Text{"the #Kakariko Bazaar#",                                                                                       "le #Bazar de Cocorico#",                                                                                       "el bazar de Kakariko",                                                                                                             "il #bazar di Calbarico#",                                                                                                              "im #Basar von Kakariko#"},
    });

    hintTable[KAK_POTION_SHOP_FRONT] = HintText::Region({
        // obscure text
        Text{"the #Kakariko Potion Shop#",                                                                                  "l'#Apothicaire de Cocorico#",                                                                                  "la tienda de pociones de Kakariko",                                                                                                "il #negozio di pozioni di Calbarico#",                                                                                                 "im #Magie-Laden von Kakariko#"},
    });

    hintTable[KAK_POTION_SHOP_BACK] = HintText::Region({
        // obscure text
        Text{"the #Kakariko Potion Shop#",                                                                                  "l'#Apothicaire de Cocorico#",                                                                                  "la tienda de pociones de Kakariko",                                                                                                "il #negozio di pozioni di Calbarico#",                                                                                                 "im #Magie-Laden von Kakariko#"},
    });

    hintTable[KAK_SHOOTING_GALLERY] = HintText::Region({
        // obscure text
        Text{"a #Bow Shooting Gallery#",                                                                                    "le #Jeu d'Adresse de Cocorico#",                                                                               "el Tiro al Blanco con arco",                                                                                                       "la #nuova sala del tirassegno#",                                                                                                       "in der #Bogen-Schießbude#"},
    });

    hintTable[COLOSSUS_GREAT_FAIRY_FOUNTAIN] = HintText::Region({
        // obscure text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée des Sables#",                                                                                   "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    }, {
        // ambiguous text
        Text{"a #Great Fairy Fountain#",                                                                                    "une #Fontaine de la Grande Fée#",                                                                              "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    },
        // clear text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée du Colosse du Désert#",                                                                         "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"}
    );

    hintTable[HC_GREAT_FAIRY_FOUNTAIN] = HintText::Region({
        // obscure text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée Royale#",                                                                                       "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    }, {
        // ambiguous text
        Text{"a #Great Fairy Fountain#",                                                                                    "une #Fontaine de la Grande Fée#",                                                                              "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    },
        // clear text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée du Château d'Hyrule#",                                                                          "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"}
    );

    hintTable[OGC_GREAT_FAIRY_FOUNTAIN] = HintText::Region({
        // obscure text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée du Malin#",                                                                                     "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    }, {
        // ambiguous text
        Text{"a #Great Fairy Fountain#",                                                                                    "une #Fontaine de la Grande Fée#",                                                                              "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    },
        // clear text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée du Château de Ganon#",                                                                          "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"}
    );

    hintTable[DMC_GREAT_FAIRY_FOUNTAIN] = HintText::Region({
        // obscure text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée Volcanique#",                                                                                   "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    }, {
        // ambiguous text
        Text{"a #Great Fairy Fountain#",                                                                                    "une #Fontaine de la Grande Fée#",                                                                              "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    },
        // clear text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée du Volcan du Péril#",                                                                           "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"}
    );

    hintTable[DMT_GREAT_FAIRY_FOUNTAIN] = HintText::Region({
        // obscure text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée Montagnarde#",                                                                                  "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    }, {
        // ambiguous text
        Text{"a #Great Fairy Fountain#",                                                                                    "une #Fontaine de la Grande Fée#",                                                                              "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    },
        // clear text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée du Chemin du Péril#",                                                                           "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"}
    );

    hintTable[ZF_GREAT_FAIRY_FOUNTAIN] = HintText::Region({
        // obscure text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée Aquatique#",                                                                                    "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    }, {
        // ambiguous text
        Text{"a #Great Fairy Fountain#",                                                                                    "une #Fontaine de la Grande Fée#",                                                                              "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"},
    },
        // clear text
        Text{"a #Great Fairy Fountain#",                                                                                    "la #Grande Fée de la Fontaine Zora#",                                                                          "una fuente de la Gran Hada",                                                                                                       "la #fontana di una Fata radiosa#",                                                                                                     "in einer #Feen-Quelle#"}
    );

    hintTable[GRAVEYARD_SHIELD_GRAVE] = HintText::Region({
        // obscure text
        Text{"a #grave with a free chest#",                                                                                 "la #tombe avec un Trésor#",                                                                                    "la #tumba con un cofre#",                                                                                                          "una #tomba con un forziere#",                                                                                                          "in einem #Grab mit einer Truhe#"},
    });

    hintTable[GRAVEYARD_HEART_PIECE_GRAVE] = HintText::Region({
        // obscure text
        Text{"a chest spawned by #Sun's Song#",                                                                             "la #tombe avec un Effroi#",                                                                                    "la #tumba de la Canción del Sol#",                                                                                                 "una #tomba con uno zombie solitario#",                                                                                                 "in einem Grab mit #einem Zombie#"},
    });

    hintTable[GRAVEYARD_COMPOSERS_GRAVE] = HintText::Region({
        // obscure text
        Text{"the #Composers' Grave#",                                                                                      "la #Tombe Royale#",                                                                                            "el #Panteón Real#",                                                                                                                "la #tomba della famiglia reale#",                                                                                                      "im #Königsgrab#"},
    });

    hintTable[GRAVEYARD_DAMPES_GRAVE] = HintText::Region({
        // obscure text
        Text{"Dampé's Grave",                                                                                               "la #Tombe d'Igor#",                                                                                            "la #tumba de Dampé#",                                                                                                              "la #tomba di Danpei#",                                                                                                                 "im #Grab des Totengräbers#"},
    });

    hintTable[DMT_COW_GROTTO] = HintText::Region({
        // obscure text
        Text{"a solitary #Cow#",                                                                                            "la #grotte avec une vache#",                                                                                   "una #vaca# solitaria",                                                                                                             "una #grotta con una mucca solitaria#",                                                                                                 "nahe einer wohlhabenden #Kuh#"},
    });

    hintTable[HC_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"a sandy grotto with #fragile walls#",                                                                         "la #grotte avec des murs fragiles#",                                                                           "la arenosa gruta de #frágiles paredes#",                                                                                           "una grotta sabbiosa con #pareti friabili#",                                                                                            "in einem Erdloch mit #brüchigen Wänden#"},
    });

    hintTable[HF_TEKTITE_GROTTO] = HintText::Region({
        // obscure text
        Text{"a pool guarded by a #Tektite#",                                                                               "l'#étang sous-terrain avec un Araknon#",                                                                       "un charco custodiado por un #Tektite#",                                                                                            "una pozza protetta da un #Tektite#",                                                                                                   "in einem #unterirdischen Schwimmbecken#"},
    });

    hintTable[HF_NEAR_KAK_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #Big Skulltula# guarding a Gold one",                                                                       "la #grotte aux deux araignées#",                                                                               "una #gran Skulltula# custodiando una dorada",                                                                                      "una grotta con #un ragno grande e uno dorato#",                                                                                        "nahe #zwei unterirdischen Skulltulas#"},
    });

    hintTable[HF_COW_GROTTO] = HintText::Region({
        // obscure text
        Text{"a grotto full of #spider webs#",                                                                              "la #grotte couverte de toiles d'araignées#",                                                                   "una gruta llena de #telarañas#",                                                                                                   "una #grotta piena di ragnatele#",                                                                                                      "in einem Erdloch voller #Spinnenweben#"},
    });

    hintTable[KAK_REDEAD_GROTTO] = HintText::Region({
        // obscure text
        Text{"#ReDeads# guarding a chest",                                                                                  "la grotte aux #deux Effrois#",                                                                                 "los #ReDeads# que custodian un cofre",                                                                                             "una #grotta con due zombie#",                                                                                                          "in einem Erdloch mit #zwei Zombies#"},
    });

    hintTable[SFM_WOLFOS_GROTTO] = HintText::Region({
        // obscure text
        Text{"#Wolfos# guarding a chest",                                                                                   "la #grotte iridescente#",                                                                                      "los #Wolfos# que custodian un cofre",                                                                                              "una #grotta con due lupi#",                                                                                                            "in einem Erdloch mit #zwei Wolfos#"},
    });

    hintTable[GV_OCTOROK_GROTTO] = HintText::Region({
        // obscure text
        Text{"an #Octorok# guarding a rich pool",                                                                           "un #étang sous-terrain avec un Octorok#",                                                                      "un #Octorok# que custodia un lujoso charco",                                                                                       "una pozza piena di soldi (e un #Octorok# di guardia)",                                                                                 "nahe eines wohlhabenden #Octoroks#"},
    });

    hintTable[DEKU_THEATER] = HintText::Region({
        // obscure text
        Text{"the #Lost Woods Stage#",                                                                                      "le #Théâtre Sylvestre#",                                                                                       "el #escenario del Bosque Perdido#",                                                                                                "il #teatro verde#",                                                                                                                    "auf der #Waldbühne#"},
    });

    hintTable[ZR_OPEN_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[DMC_UPPER_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[DMT_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[KAK_OPEN_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[HF_NEAR_MARKET_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[HF_OPEN_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[HF_SOUTHEAST_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[KF_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[LW_NEAR_SHORTCUTS_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #generic grotto#",                                                                                          "une #grotte on ne peut plus banale#",                                                                          "una #cueva genérica#",                                                                                                             "una delle nove #Grotte uguali#",                                                                                                       "in einem #gewöhnlichen Erdloch#"},
    });

    hintTable[HF_INSIDE_FENCE_GROTTO] = HintText::Region({
        // obscure text
        Text{"a #single Upgrade Deku Scrub#",                                                                               "une #grotte avec une seule Peste Mojo#",                                                                       "una cueva con un #solitario mercader deku#",                                                                                       "una grotta con un #cespuglio affari solitario#",                                                                                       "in einem Erdloch mit #einem Deku-Händler#"},
    });

    hintTable[LW_SCRUBS_GROTTO] = HintText::Region({
        // obscure text
        Text{"#2 Deku Scrubs# including an Upgrade one",                                                                    "une #grotte avec deux Pestes Mojo#",                                                                           "una cueva con #dos mercaderes deku#",                                                                                              "una grotta con #due cespugli affari messi al contrario#",                                                                              "in einem Erdloch mit #zwei Deku-Händlern#"},
    });

    hintTable[COLOSSUS_GROTTO] = HintText::Region({
        // obscure text
        Text{"2 Deku Scrubs",                                                                                               "une #grotte avec deux Pestes Mojo#",                                                                           "una cueva con #dos mercaderes deku#",                                                                                              "una grotta con #due cespugli affari#",                                                                                                 "in einem Erdloch mit #zwei Deku-Händlern#"},
    });

    hintTable[ZR_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"2 Deku Scrubs",                                                                                               "une #grotte avec deux Pestes Mojo#",                                                                           "una cueva con #dos mercaderes deku#",                                                                                              "una grotta con #due cespugli affari#",                                                                                                 "in einem Erdloch mit #zwei Deku-Händlern#"},
    });

    hintTable[SFM_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"2 Deku Scrubs",                                                                                               "une #grotte avec deux Pestes Mojo#",                                                                           "una cueva con #dos mercaderes deku#",                                                                                              "una grotta con #due cespugli affari#",                                                                                                 "in einem Erdloch mit #zwei Deku-Händlern#"},
    });

    hintTable[GV_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"2 Deku Scrubs",                                                                                               "une #grotte avec deux Pestes Mojo#",                                                                           "una cueva con #dos mercaderes deku#",                                                                                              "una grotta con #due cespugli affari#",                                                                                                 "in einem Erdloch mit #zwei Deku-Händlern#"},
    });

    hintTable[LH_GROTTO] = HintText::Region({
        // obscure text
        Text{"3 Deku Scrubs",                                                                                               "une #grotte avec trois Pestes Mojo#",                                                                          "una cueva con #tres mercaderes deku#",                                                                                             "una grotta con #tre cespugli affari#",                                                                                                 "in einem Erdloch mit #drei Deku-Händlern#"},
    });

    hintTable[DMC_HAMMER_GROTTO] = HintText::Region({
        // obscure text
        Text{"3 Deku Scrubs",                                                                                               "une #grotte avec trois Pestes Mojo#",                                                                          "una cueva con #tres mercaderes deku#",                                                                                             "una grotta con #tre cespugli affari#",                                                                                                 "in einem Erdloch mit #drei Deku-Händlern#"},
    });

    hintTable[GC_GROTTO] = HintText::Region({
        // obscure text
        Text{"3 Deku Scrubs",                                                                                               "une #grotte avec trois Pestes Mojo#",                                                                          "una cueva con #tres mercaderes deku#",                                                                                             "una grotta con #tre cespugli affari#",                                                                                                 "in einem Erdloch mit #drei Deku-Händlern#"},
    });

    hintTable[LLR_GROTTO] = HintText::Region({
        // obscure text
        Text{"3 Deku Scrubs",                                                                                               "une #grotte avec trois Pestes Mojo#",                                                                          "una cueva con #tres mercaderes deku#",                                                                                             "una grotta con #tre cespugli affari#",                                                                                                 "in einem Erdloch mit #drei Deku-Händlern#"},
    });

    hintTable[ZR_FAIRY_GROTTO] = HintText::Region({
        // obscure text
        Text{"a small #Fairy Fountain#",                                                                                    "une petite #Fontaine des Fées#",                                                                               "una pequeña #fuente de hadas#",                                                                                                    "una #fontana delle fate#",                                                                                                             "in einem #Feen-Brunnen#"},
    });

    hintTable[HF_FAIRY_GROTTO] = HintText::Region({
        // obscure text
        Text{"a small #Fairy Fountain#",                                                                                    "une petite #Fontaine des Fées#",                                                                               "una pequeña #fuente de hadas#",                                                                                                    "una #fontana delle fate#",                                                                                                             "in einem #Feen-Brunnen#"},
    });

    hintTable[SFM_FAIRY_GROTTO] = HintText::Region({
        // obscure text
        Text{"a small #Fairy Fountain#",                                                                                    "une petite #Fontaine des Fées#",                                                                               "una pequeña #fuente de hadas#",                                                                                                    "una #fontana delle fate#",                                                                                                             "in einem #Feen-Brunnen#"},
    });

    hintTable[ZD_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"a small #Fairy Fountain#",                                                                                    "une petite #Fontaine des Fées#",                                                                               "una pequeña #fuente de hadas#",                                                                                                    "una #fontana delle fate#",                                                                                                             "in einem #Feen-Brunnen#"},
    });

    hintTable[GF_STORMS_GROTTO] = HintText::Region({
        // obscure text
        Text{"a small #Fairy Fountain#",                                                                                    "une petite #Fontaine des Fées#",                                                                               "una pequeña #fuente de hadas#",                                                                                                    "una #fontana delle fate#",                                                                                                             "in einem #Feen-Brunnen#"},
    });

    /*--------------------------
    |      JUNK HINT TEXT      |
    ---------------------------*/

    hintTable[JUNK01] = HintText::Junk({
        // obscure text
        Text{"Remember to check your 3DS battery level and save often.",                                                    "Surveillez la batterie de votre 3DS et sauvegardez souvent !",                                                 "No te olvides de revisar la batería de la 3DS y guarda partida de vez en cuando.",                                                 "Ricorda di controllare la batteria del 3DS e di salvare spesso.",                                                                      "Denk daran, regelmäßig den Akku deines 3DS zu überprüfen und häufig zu #speichern#."},
    });

    hintTable[JUNK02] = HintText::Junk({
        // obscure text
        Text{"They say you must read the names of \"Special Deal\" shop items carefully.",                                  "Selon moi, les « Offres spéciales » sont parfois trompeuses... Lisez attentivement !",                         "Según dicen, se debería prestar atención a los nombres de las ofertas especiales.",                                                "Ho sentito dire che è bene prestare molta attenzione ai nomi delle offerte speciali.",                                                 "Man erzählt sich, die Namen von \"Sonderangeboten\" sorgfältig zu lesen, wäre eine gute Idee."},
    });

    hintTable[JUNK03] = HintText::Junk({
        // obscure text
        Text{"{563}"} + // SFX: Zelda gasp
        Text{"They say that Zelda is a poor leader.",                                                                       "Selon moi, Zelda ne ferait pas un bon monarque.",                                                              "Según dicen, Zelda es mala líder.",                                                                                                "Ho sentito dire che Zelda non è brava a governare.",                                                                                   "Man erzählt sich, Zelda sei eine schlechte Anführerin."},
    });

    hintTable[JUNK04] = HintText::Junk({
        // obscure text
        Text{"These hints can be quite useful. This is an exception.",                                                      "Ces indices sont très utiles, si on ne considère pas celui-ci.",                                               "Las pistas suelen servir de ayuda. En cambio, esta no.",                                                                           "Questi indizi sono molto utili. Io sono l'eccezione che conferma la regola.",                                                          "Die Hinweise von uns Mythensteinen können echt nützlich sein. Dies ist eine Ausnahme."},
    });

    hintTable[JUNK05] = HintText::Junk({
        // obscure text
        Text{"{299}"} + // SFX: Lizalfos cry
        Text{"They say that the Lizalfos in Dodongo's Cavern like to play in lava.",                                        "Selon moi, les Lézalfos de la Caverne Dodongo aiment patauger dans la lave.",                                  "Según dicen, a los Lizalfos de la Cueva de los Dodongos les gusta jugar en la lava.",                                              "Ho sentito dire che i Lizalfos nella caverna dei Dodongo adorano giocare nella lava.",                                                 "Man erzählt sich, die Lizalfos in Dodongos Höhle würden gerne in Lava planschen."},
    });

    hintTable[JUNK06] = HintText::Junk({
        // obscure text
        Text{"They say that all the Zora drowned in Wind Waker.",                                                           "Selon moi, les Zoras se sont noyés dans Wind Waker.",                                                          "Según dicen, en Wind Waker todos los zora se ahogaron.",                                                                           "Ho sentito dire che in Wind Waker tutti gli Zora sono annegati.",                                                                      "Man erzählt sich, in Wind Waker wären alle Zoras ertrunken."},
    });

    hintTable[JUNK07] = HintText::Junk({
        // obscure text
        Text{"{36C}"} + // SFX: Goron waking up
        Text{"If Gorons eat rocks, does that mean I'm in danger?",                                                          "Ne dis pas aux Gorons que je suis ici. Ils mangent des roches, tu sais!",                                      "Si los Goron se tragan las piedras, ¿no me hace ser una especia vulnarable o algo así",                                            "Ma se i Goron mangiano pietre... non è che sono in pericolo?",                                                                         "Da Goronen Steine essen... bedeutet das, dass ich in Gefahr bin?"},
    });

    hintTable[JUNK08] = HintText::Junk({
        // obscure text
        Text{"'Member when Ganon was a blue pig?^",                                                                         "De mon temps, Ganon était un cochon bleu...^",                                                                 "¿T'acuerdas cuando Ganon era un cerdo azul?^",                                                                                     "Mi ricordo i bei vecchi tempi, quando Ganon era un cinghiale blu.^",                                                                   "Weißte' noch als Ganon nur 'n blaues Schwein war?^"} +
        Text{"{43A}"} + // SFX: Ganondorf reflecting light ball
        Text{"I 'member.",                                                                                                  "Pff ! Les jeunes de nos jours, et leur Ganondorf!",                                                            "Qué tiempos, chico.",                                                                                                              "Ah, i giovani d'oggi e il loro Ganondorf!",                                                                                            "Damals war alles besser, kein unnötiger Schnickschnack!"},
        
    });

    hintTable[JUNK09] = HintText::Junk({
        // obscure text
        Text{"One who does not have Triforce can't go in.",                                                                 "Ceux sans Triforce doivent rebrousser chemin.",                                                                "Aquel que no porte la Trifuerza no podrá pasar.",                                                                                  "Coloro che non hanno la Triforza non potranno passare.",                                                                               "One who does not have Triforce can't go in.^Übersetzungen waren nicht immer von Priorität."},
    });

    hintTable[JUNK10] = HintText::Junk({
        // obscure text
        Text{"Save your future, end the Happy Mask Salesman.",                                                              "Selon moi, tu t'éviteras des jours de malheur si tu élimines le vendeur de masques...",                        "Salva tu futuro, acaba con el dueño de La Máscara Feliz.",                                                                         "Salva il tuo futuro! Fai fuori il venditore di maschere!",                                                                             "Rette deine Zukunft, stoppe den Maskenhändler solange du noch kannst."},
    });

    hintTable[JUNK11] = HintText::Junk({
        // obscure text
        Text{"Glitches are a pathway to many abilities some consider to be... Unnatural.",                                  "Les glitchs sont un moyen d'acquérir de nombreuses facultés considérées par certains comme... contre nature.", "Los glitches son el camino a muchas habilidades que varios consideran... nada natural.",                                           "I glitch sono la via per acquistare molte capacità da alcuni ritenute ingiustamente non naturali.",                                    "Man erzählt sich, Glitches würden Fähigkeiten erlauben, die manch Einer als... unnatürlich bezeichnen würde."},
    });

    hintTable[JUNK12] = HintText::Junk({
        // obscure text
        Text{"{437}"} + // SFX: Ganondorf laugh
        Text{"I'm stoned. Get it?",                                                                                         "Allez, pierre, papier, ciseau...&Pierre.",                                                                     "Me he quedado de piedra. ¿Lo pillas?",                                                                                             "AH! Non mi spaventare così. Mi hai proprio pietrificato!",                                                                             "Ich bin stoned. Verstehste'?"},
    });

    hintTable[JUNK13] = HintText::Junk({
        // obscure text
        Text{"{396}"} + // SFX: Owl flutter
        Text{"Hoot! Hoot! Would you like me to repeat that?",                                                               "Hou hou ! Veux-tu que je répète tout ça ?",                                                                    "¡Buuu, buuu! ¿Te lo vuelvo a repetir?",                                                                                            "Uh uuh! Uh uuh! Vuoi che ti ripeta cos'ho appena detto?",                                                                              "Uhuuu! Uhu! Soll ich mich noch einmal wiederholen?"},
    });

    hintTable[JUNK14] = HintText::Junk({
        // obscure text
        Text{"{36D}"} + // SFX: Goron sitting down
        Text{"Gorons are stupid. They eat rocks.",                                                                          "Les Gorons sont de vraies têtes dures.",                                                                       "Los Goron son tontos. Se comen las piedras.",                                                                                      "I Goron sono stupidi. Hanno proprio la testa dura come la roccia.",                                                                    "Goronen sind bescheuert. Sie essen Steine!"},
    });

    hintTable[JUNK15] = HintText::Junk({
        // obscure text
        Text{"{541}"} + // SFX: Ingo whips horse
        Text{"They say that Lon Lon Ranch prospered under Ingo.",                                                           "Selon moi, le Ranch Lon Lon était plus prospère sous Ingo.",                                                   "Según dicen, el Rancho Lon Lon prosperó gracias a Ingo.",                                                                          "Ho sentito dire che la Fattoria Lon Lon è prosperata molto grazie a Ingo.",                                                            "Man erzählt sich, die Lon Lon-Farm floriere seit Basil das Sagen hat."},
    });

    hintTable[JUNK16] = HintText::Junk({ 
        // obscure text
        Text{"{488}"} + // SFX: Get rupee
        Text{"The single rupee is a unique item.",                                                                          "Nul objet n'est plus unique que le rubis vert.",                                                               "La rupia de uno es un objeto singular.",                                                                                           "La singola rupia verde è un oggetto più unico che raro.",                                                                              "Der einzelne Rubin ist ein einzigartiger Gegenstand."},
    });

    hintTable[JUNK17] = HintText::Junk({
        // obscure text
        Text{"Without the Lens of Truth, the Treasure Chest Mini-Game is a 1 out of 32 chance.^Good luck!",                 "Sans le Monocle de Vérite, tu as 1 chance sur 32 de gagner la Chasse aux Trésors.^Bonne chance!",              "Sin la Lupa de la Verdad, ganarías 1/32 veces en el Cofre del Tesoro.^¡Buena suerte con ello!",                                    "Senza la lente della verità, la probabilità di vincere il gioco della sala della fortuna è 1 su 32.^Buona fortuna!",                   "Ohne das Auge der Wahrheit bei der Truhenlotterie zu gewinnen, ist eine Wahrscheinlichkeit von 1 zu 32.^Viel Glück!"},
    });

    hintTable[JUNK18] = HintText::Junk({
        // obscure text
        Text{"Use bombs wisely.",                                                                                           "Utilise les bombes avec précaution.",                                                                          "No desperdicies las bombas.",                                                                                                      "Non sprecare bombe.",                                                                                                                  "Setze Bomben mit Bedacht ein."},
    });

    hintTable[JUNK19] = HintText::Junk({
        // obscure text
        Text{"{342}"} + // SFX: Volvagia hit with hammer
        Text{"They say that Volvagia hates splinters.",                                                                     "Selon moi, Volcania déteste les échardes.",                                                                    "Según dicen, Volvagia le teme a las astillas.",                                                                                    "Ho sentito dire che Varubaja odia le schegge.",                                                                                        "Man erzählt sich, Volvagia habe eine Abneigung gegenüber Splittern."},
    });

    hintTable[JUNK20] = HintText::Junk({
        // obscure text
        Text{"They say that funky monkeys can be spotted on Friday.",                                                       "Selon moi, des capucins coquins sortent le vendredi.",                                                         "Según dicen, en los viernes puedes hallar monos marchosos.",                                                                       "Ho sentito dire che di venerdì si possono vedere scimmie stravaganti.",                                                                "Man erzählt sich, man könne flippige Affen jeden Freitag sichten."},
    });

    hintTable[JUNK21] = HintText::Junk({
        // obscure text
        Text{"I found you, faker!",                                                                                         "Ah-ha ! Je t'ai trouvé ! Imposteur !",                                                                         "¡Ahí estás, impostor!",                                                                                                            "Ti ho trovato, impostore!",                                                                                                            "Ich habe dich gefunden, Schwindler!"},
    });

    hintTable[JUNK22] = HintText::Junk({
        // obscure text
        Text{"They say the Groose is loose.",                                                                               "Selon moi, Hergo est le vrai héros.",                                                                          "Según dicen, Malton es un espanto.",                                                                                               "Ho sentito dire che Bado è proprio un baro!",                                                                                          "Man erzählt sich, der Bado sei los."},
    });

    hintTable[JUNK23] = HintText::Junk({
        // obscure text
        Text{"{4D2}"} + // SFX: Cursor selection
        Text{"They say that players who select the \"ON\" option for \"MOTION CONTROL\" are the real \"Zelda players!\"",   "Selon moi, ceux qui utilisent les contrôles gyroscopiques sont les VRAIS joueurs.",                            "Según dicen, aquellos que juegan usando el control por movimiento son los verdaderos jugadores de Zelda.",                         "Ho sentito dire che solo coloro che impostano i sensori di movimento su \"Sì\" sono i veri giocatori di Zelda!",                       "Man erzählt sich, Spieler die die \"Bewegungssteuerung\" aktivieren, wären die wahren \"Zelda-Spieler\"."},
    });

    hintTable[JUNK24] = HintText::Junk({ 
        // obscure text
        Text{"{55D}"} + // SFX: Sheik falls after being thrown
        Text{"What happened to Sheik?",                                                                                     "Dis-donc... Qu'est-ce qui arrive avec Sheik ?",                                                                "¿Qué la habrá pasado a Sheik?",                                                                                                    "Cosa sarà successo a Sheik?",                                                                                                          "Was ist wohl mit Shiek passiert?"},
    });

    hintTable[JUNK25] = HintText::Junk({
        // obscure text
        Text{"{446}"} + // SFX: Phantom Ganon laugh
        Text{"L2P @.",                                                                                                      "Arrête de lire les indices et joue comme un grand, @.",                                                        "Mira que eres novato, @.",                                                                                                         "Sei proprio un novellino, @.",                                                                                                         "Lern einfach mal Spielen, @."},
    });

    hintTable[JUNK26] = HintText::Junk({
        // obscure text
        Text{"I've heard you can cheat at Sploosh Kaboom.",                                                                 "Selon moi, il y a une carte aux Trésors à Mercantîle... Duh!",                                                 "He oído por ahí que puedes hacer trampa en el Sploosh Kaboom.",                                                                    "Si dice che si possa barare al gioco di \"Sploosh\" e \"Kaboom\".",                                                                    "Ich habe gehört, man könne bei Sploosh Kaboom schummeln."},
    });

    hintTable[JUNK27] = HintText::Junk({
        // obscure text
        Text{"I'm Lonk from Pennsylvania.",                                                                                 "Je suis Lonk, le héros de Pennsylvanie !",                                                                     "Soy Lonk, de Pensilvania.",                                                                                                        "Sono Lonk, dalla Pennsylvania.",                                                                                                       "Ich bin Lonk aus Pennsylvania."},
    });

    hintTable[JUNK28] = HintText::Junk({
        // obscure text
        Text{"I bet you'd like to have more bombs.",                                                                        "Je parie que tu veux plus de bombes.",                                                                         "Me apuesto a que quisieras tener más bombas.",                                                                                     "Scommetto ti piacerebbe avere più bombe, eh?",                                                                                         "Möchtest du zur Strafe mehr Bomben tragen können?"},
    });

    hintTable[JUNK29] = HintText::Junk({
        // obscure text
        Text{"When all else fails, use Fire.",                                                                              "Quand rien ne marche, utilise le feu.",                                                                        "Cuando nada funcione, usa el fuego.",                                                                                              "Se nient'altro funziona, usa il fuoco.",                                                                                               "Wenn nichts weiterhilft, nutze Feuer."},
    });

    hintTable[JUNK30] = HintText::Junk({
        // obscure text
        Text{"Here's a hint, @. Don't be bad.",                                                                             "Voici un indice, @. Ne sois pas mauvais.",                                                                     "Aquí tienes una pista, @: deja de ser manco.",                                                                                     "Eccoti un indizio, @: gioca meglio.",                                                                                                  "Hier ist ein Hinweis, @. Sei einfach nicht schlecht, das hat mir immer geholfen."},
    });

    hintTable[JUNK31] = HintText::Junk({
        // obscure text
        Text{"{446}"} + // SFX: Phantom Ganon laugh
        Text{"Game Over. Return of Ganon.",                                                                                 "Partie terminée. RETOUR DE GANON.",                                                                            "Fin de la partida. El regreso de Ganon.",                                                                                          "Game Over. Ritorno di Ganon.",                                                                                                         "Game Over. Ganons Rückkehr."},
    });

    hintTable[JUNK32] = HintText::Junk({
        // obscure text
        Text{"May the way of the Hero lead to the Triforce.",                                                               "Que le chemin du héros te mène à la Triforce.",                                                                "Puede que la senda del héroe te lleve hacia la Trifuerza.",                                                                        "Che il cammino dell'eroe possa condurre alla Triforza!",                                                                               "Möge der Weg des Helden zum Triforce führen."},
    });

    hintTable[JUNK33] = HintText::Junk({
        // obscure text
        Text{"Can't find an item? Scan an Amiibo.",                                                                         "Tu cherches un objet en particulier ? Utilise un Amiibo !",                                                    "¿No encuentras algo? Escanea un amiibo.",                                                                                          "Non riesci a trovare un oggetto? Scansiona un Amiibo!",                                                                                "Du kannst einen Gegenstand nicht finden? Scanne ein Amiibo!"},
    });

    hintTable[JUNK34] = HintText::Junk({
        // obscure text
        Text{"They say this game has just a few glitches.",                                                                 "Selon moi, ce jeu est complètement exempt de glitchs.",                                                        "Dicen que este juego apenas tiene glitches.",                                                                                      "Ho sentito dire che di glitch questo gioco ne ha proprio pochi.",                                                                      "Man erzählt sich, dieses Spiel habe nur ein paar Glitches."},
    });

    hintTable[JUNK35] = HintText::Junk({
        // obscure text
        Text{"{22A}"} + // SFX: Bombchu Bowling target hit
        Text{"BRRING BRRING This is Ulrira. Wrong number?",                                                                 "DRING DRING !! Pépé le Ramollo à l'appareil... Comment ça un faux numéro ?",                                   "¡Ring! ¡Ring! Al habla Ulrira. ¿Me he equivocado de número?",                                                                      "DRIIIN! DRIIIN! Pronto? Sono Ulrira. Hai sbagliato numero?",                                                                           "TUUUUT! TUUUUT! Ja? Hier Ulrira! Muss sich wohl verwählt haben."},
    });

    hintTable[JUNK36] = HintText::Junk({ // This text will be green
        // obscure text
        Text{"#Tingle Tingle Kooloo Limpah!#",                                                                              "#Tingle ! Tingle ! Kooloolin... Pah !#",                                                                       "#Tingle, Tingle, Kurulín... ¡PA!#",                                                                                                "#Tingle, Tingle!&Kururìn-PA!#",                                                                                                        "#Tingle, Tingle! Kuuluu-Limpah!#"},
    });

    hintTable[JUNK37] = HintText::Junk({
        // obscure text
        Text{"L is real 2401",                                                                                              "L is real 2401",                                                                                               "L es real 2401.",                                                                                                                  "L is real 2401",                                                                                                                       "L is real 2401... Ein Mysterium."},
    });

    hintTable[JUNK38] = HintText::Junk({
        // obscure text
        Text{"{43A}"} + // SFX: Ganondorf reflecting light ball
        Text{"They say that Ganondorf will appear in the next Mario Tennis.",                                               "Selon moi, Ganondorf sera la prochaine recrue dans Mario Tennis.",                                             "Según dicen, Ganondorf estará en el próximo Mario Tennis.",                                                                        "Ho sentito dire che Ganondorf apparirà nel prossimo Mario Tennis.",                                                                    "Man erzählt sich, Ganondorf werde im nächsten Mario Tennis vorkommen."},
    });

    hintTable[JUNK39] = HintText::Junk({
        // obscure text
        Text{"{36C}"} + // SFX: Goron waking up
        Text{"Medigoron sells the earliest Breath of the Wild demo.",                                                       "Selon moi, Medigoron vend une démo de #Breath of the Wild#.",                                                  "Medigoron vende la primera demo del Breath of the Wild.",                                                                          "Ho sentito dire che Medigoron vende la prima demo di Breath of the Wild.",                                                             "Medigoron verkauft eine frühe Breath of the Wild Demo."},
    });

    hintTable[JUNK40] = HintText::Junk({
        // obscure text
        Text{"Can you move me? I don't get great service here.",                                                            "Peux-tu me déplacer ? J'ai pas une bonne réception ici.",                                                      "¿Puedes llevarme a otro lado? Aquí nadie me presta atención.",                                                                     "Potrebbe spostarmi? Non ricevo un grande servizio qui.",                                                                               "Kannst du mich etwas bewegen? Ich habe schlechten Empfang."},
    });

    hintTable[JUNK41] = HintText::Junk({
        // obscure text
        Text{"They say if you use Strength on the truck, you can find Mew.",                                                "Selon moi, #Mew# se trouve dessous le camion... Duh !",                                                        "Según dicen, puedes hallar un Mew usando Fuerza contra el camión de Ciudad Carmín.",                                               "Ho sentito dire che usando Forza sul camioncino, puoi trovare Mew.",                                                                   "Man erzählt sich, Mew wäre unter dem LKW bei der M.S. Anne zu finden. Man benötigt Stärke um ihn zu verschieben."},
    });

    hintTable[JUNK42] = HintText::Junk({
        // obscure text
        Text{"{240}"} + // SFX: Gossip stone growing
        Text{"I'm a helpful hint Gossip Stone!^See, I'm helping.",                                                          "Salut ! Je suis une pierre de bons conseils !^Tiens, tu vois ? J'aide bien, hein ?",                           "Soy una Piedra Sheikah muy útil.^¡Mira cómo te ayudo!",                                                                            "Sono un'utile pietra del pettegolezzo!^Non vedi, ti sto aiutando!",                                                                    "Ich bin ein hilfreicher Mythenstein!^Siehste'? Ich bin hilfreich!"},
    });

    hintTable[JUNK43] = HintText::Junk({
        // obscure text
        Text{"{562}"} + // SFX: Zelda opens gate
        Text{"Dear @, please come to the castle. I've baked a cake for you.&Yours truly, Princess Zelda.",                  "Mon très cher @:&Viens vite au château, je t'ai préparé un délicieux gâteau...&À bientôt, Princesse Zelda",    "Querido @: Por favor, ven al castillo. He hecho una tarta para ti.&Sinceramente tuya: Princesa Zelda.",                            "Caro @, vieni al castello, ho preparato una torta per te.&Con affetto, la Principessa Zelda.",                                         "Lieber @!&Komm mich doch einmal im Schloss besuchen! Der Kuchen steht bereit!&In Freundschaft, Prinzessin Zelda."},
    });

    hintTable[JUNK44] = HintText::Junk({
        // obscure text
        Text{"They say all toasters toast toast.",                                                                          "Selon moi, les grille-pains grillent du pain.",                                                                "Según dicen, todas las tostadoras tostan tostadas tostadas.",                                                                      "Ho sentito dire che tutti i tostapane tostano pane.",                                                                                  "Man erzählt sich, alle Toaster würden Toast toasten."},
    });

    hintTable[JUNK45] = HintText::Junk({
        // obscure text
        Text{"You thought it would be a useful hint, but it was me, junk hint!",                                            "Tu t'attendais à un bon indice... Mais c'était moi, un mauvais indice!",                                       "Je... Creeías que iba a ser una piedra de utilidad, ¡pero no, era yo, la piedra de la agonía!",                                    "Pensavi che fossi un indizio utile, invece ero io, Dato Inutile Oltraggioso!",                                                         "Du dachtest dies wäre ein nützlicher Hinweis. Doch hier bin ich, der Schrotthinweis!"},
    });

    hintTable[JUNK46] = HintText::Junk({
        // obscure text
        Text{"{240}"} + // SFX: Gossip stone growing
        Text{"They say that quest guidance can be found at a talking rock.",                                                "Selon moi, des #indices# se trouvent auprès d'une pierre parlante... Duh!",                                    "Según dicen, puedes consultarle ayuda a rocas parlanchinas.",                                                                      "Ho sentito dire che le pietre parlanti possono aiutare gli avventurieri.",                                                             "Man erzählt sich, sprechende Steine würden dich bei deinem Abenteuer unterstützen."},
    });

    hintTable[JUNK47] = HintText::Junk({
        // obscure text
        Text{"They say that the final item you're looking for can be found somewhere in Hyrule.",                           "Selon moi, le #dernier objet# se trouve quelque part dans Hyrule... Duh!",                                     "Según dicen, el último objeto que te falte puede estar en cualquier rincón de Hyrule.",                                            "Ho sentito dire che quell'oggetto che stai cercando si trova ad Hyrule da qualche parte.",                                             "Man erzählt sich, der Gegenstand nachdem du gerade suchst, wäre irgendwo in Hyrule zu finden."},
    });

    Text tempMweepHint = Text{""};
    for (int i = 12; i > 0; i--) {
        tempMweepHint = tempMweepHint + "{565}" + // SFX: Mweep
        Text{"Mwe", "Mw", "Mwe", "Mwe", "Mi"};

        for (int j = 12; j >= i; j--) {
            tempMweepHint = tempMweepHint + Text{"e", "i", "e", "e", "e"};
        };

        tempMweepHint = tempMweepHint + (i > 1 ? "p.^" : "p.");
    }
    hintTable[JUNK48] = HintText::Junk({
        // obscure text
        tempMweepHint,
    });

    hintTable[JUNK49] = HintText::Junk({
        // obscure text
        Text{"{3B4}"} + // SFX: Barinade's Bari killed
        Text{"They say that Barinade fears Deku Nuts.",                                                                     "Selon moi, Barinade a peur des Noix Mojo.",                                                                    "Según dicen, lo que más teme a Barinade son las nueces deku.",                                                                     "Ho sentito dire che Cnidade teme le noci Deku.",                                                                                       "Man erzählt sich, Barinade habe Angst vor Deku-Nüssen."},
    });

    hintTable[JUNK50] = HintText::Junk({
        // obscure text
        Text{"{3F1}"} + // SFX: Flare Dancer laugh
        Text{"They say that Flare Dancers do not fear Goron-crafted blades.",                                               "Selon moi, le Danse-Flamme n'a pas peur des armes de Goron.",                                                  "Según dicen, los Bailafuegos no le temen a las armas forjadas por Gorons.",                                                        "Ho sentito dire che i Fiammerini non temono le lame forgiate dai Goron.",                                                              "Man erzählt sich, dass Flammenderwische keine Angst vor goronengeschmiedeten Klingen haben sollen."},
    });

    hintTable[JUNK51] = HintText::Junk({
        // obscure text
        Text{"{367}"} + // SFX: Morpha jumps on water
        Text{"They say that Morpha is easily trapped in a corner.",                                                         "Selon moi, Morpha se coince facilement dans les coins.",                                                       "Según dicen, puedes atrapar a Morpha con facilidad en una esquina.",                                                               "Ho sentito dire che è facile intrappolare Morpha in un angolo.",                                                                       "Man erzählt sich, Morpha wäre leicht in einer Ecke festzuhalten."},
    });

    hintTable[JUNK52] = HintText::Junk({
        // obscure text
        Text{"{3DA}"} + // SFX: Bongo's hand hurt
        Text{"They say that Bongo Bongo really hates the cold.",                                                            "Selon moi, Bongo Bongo a facilement froid aux doigts.",                                                        "Según dicen, Bongo Bongo odia a muerte el frío.",                                                                                  "Ho sentito dire che Bongo Bongo odia a morte il freddo.",                                                                              "Man erzählt sich, Bongo Bongo würde die Kälte wirklich verabscheuen."},
    });

    hintTable[JUNK53] = HintText::Junk({
        // obscure text
        Text{"{0F4}"} + // SFX: Sword put away
        Text{"They say that your sword is most powerful when you put it away.",                                             "Selon moi, ton épée est à pleine puissance quand tu la rengaines.",                                            "Según dicen, tu espada se vuelve más poderosa si la guardas.",                                                                     "Ho sentito dire che la spada è molto più potente quando è nel fodero.",                                                                "Man erzählt sich, dein Schwert wäre am Mächtigsten, würde es in die Scheide zurückgesteckt."},
    });

    hintTable[JUNK54] = HintText::Junk({
        // obscure text
        Text{"They say that bombing the hole Volvagia last flew into can be rewarding.",                                    "Selon moi, le trou où se creuse Volcania est vulnérable aux bombes.",                                          "Según dicen, trae buena suerte colocar una bomba en el último agujero de donde salió Volvagia.",                                   "Ho sentito dire che porta bene buttare bombe sull'ultima buca in cui si è infilato Varubaja.",                                         "Man erzählt sich, das Loch indem Volvagia zuletzt verschwand, mit Bomben anzugreifen, könne lohnenswert sein."},
    });

    hintTable[JUNK55] = HintText::Junk({
        // obscure text
        Text{"{11D}"} + // SFX: Deku nut flash
        Text{"They say that invisible ghosts can be exposed with Deku Nuts.",                                               "Selon moi, des fantômes invisibles apparaissent avec des noix Mojo.",                                          "Según dicen, puedes exponer a los espectros invisibles con nueces deku.",                                                          "Ho sentito dire che puoi far apparire i fantasmi invisibili usando noci Deku.",                                                        "Man erzählt sich, unsichtbare Geister könnten mit Deku-Nüssen sichtbar gemacht werden."},
    });

    hintTable[JUNK56] = HintText::Junk({
        // obscure text
        Text{"They say that the real Phantom Ganon is bright and loud.",                                                    "Selon moi, le vrai Ganon Spectral est clair et bruyant.",                                                      "Según dicen, el verdadero Ganon Fantasma es brillante y ruidoso.",                                                                 "Ho sentito dire che il vero Spettro Ganon è brillante e rumoroso.",                                                                    "Man erzählt sich, der echte Phantom-Ganon wäre hell und laut."},
    });

    hintTable[JUNK57] = HintText::Junk({
        // obscure text
        Text{"They say that walking backwards is very fast.",                                                               "Selon moi, tu fais marche arrière très rapidement pour un héros.",                                             "Según dicen, es más rápido caminar hacia atrás.",                                                                                  "Ho sentito dire che camminando all'indietro si va molto veloci.",                                                                      "Man erzählt sich, rückwärts zu laufen wäre äußerst schnell."},
    });

    hintTable[JUNK58] = HintText::Junk({
        // obscure text
        Text{"They say that leaping above the Market entrance enriches most children.",                                     "Selon moi, les enfants riches se pavanent en haut du pont-levis.",                                             "Según dicen, saltar por las cadenas a la entrada de la plaza enriquece a muchos chiquillos.",                                      "Ho sentito dire che saltare sopra il ponte levatoio rende i bambini ricchi.",                                                          "Man erzählt sich, über dem Eingang des Marktes herumzuspringen, würde Kinder bereichern."},
    });

    hintTable[JUNK59] = HintText::Junk({
        // obscure text
        Text{"{540}"} + // SFX: Ingo lost race
        Text{"They say Ingo is not very good at planning ahead.",                                                           "Selon moi, Ingo ne fait pas un très bon geôlier.",                                                             "Según dicen, a Ingo no se le da especialmente bien planificar con antelación.",                                                    "Ho sentito dire che Ingo non è bravo a fare piani.",                                                                                   "Man erzählt sich, Basils Zukunftsplanung sei mangelhaft."},
    });

    hintTable[JUNK60] = HintText::Junk({
        // obscure text
        Text{"{4B6}"} + // SFX: Get small item from chest
        Text{"You found a Spiritual Stone! By which I mean, I worship Nayru.",                                              "Vous avez trouvé une pierre spirituelle ! En effet, je vénère la déesse Hylia.",                               "¡Has encontrado una piedra espiritual! Es que le rindo culto a Nayru...",                                                          "Hai trovato una pietra spirituale! Sai com'è, io venero Nayru.",                                                                       "Du hast einen Heiligen Stein gefunden! Ich meine..., ich bin sozusagen ein Geistlicher da ich Nayru vergöttere."},
    });

    hintTable[JUNK61] = HintText::Junk({
        // obscure text
        Text{"They say that a flying strike with a Deku Stick is no stronger than a grounded one.",                         "Selon moi, un coup de bâton sauté n'est pas meilleur qu'au sol.",                                              "Según dicen, los golpes aéreos con palos deku son tan fuertes como los normales.",                                                 "Ho sentito dire che un colpo aereo con un ramo Deku non è affatto più forte di uno normale.",                                          "Man erzählt sich, ein fliegender Streich mit Deku-Stäben, sei nicht stärker als ein bodenständiger."},
    });

    hintTable[JUNK62] = HintText::Junk({ 
        // obscure text
        Text{"Open your eyes.^Open your eyes.^",                                                                            "Réveille-toi...^Réveille-toi.^",                                                                               "Abre los ojos...^Abre los ojos...^",                                                                                               "Svegliati...^Svegliati...^",                                                                                                           "Öffne die Augen...^Öffne die Augen...^"} +
        Text{"{554}"} + // SFX: Zelda sigh
        Text{"Wake up, @.",                                                                                                 "Ouvre les yeux, @.",                                                                                           "Despierta, @...",                                                                                                                  "Apri gli occhi, @...",                                                                                                                 "Wach auf, @."},
    });

    hintTable[JUNK63] = HintText::Junk({
        // obscure text
        Text{"They say that the Nocturne of Shadow can bring you very close to Ganon.",                                     "Selon moi, le Nocturne de l'Ombre peut t'amener très près de Ganon.",                                          "Según dicen, el Nocturno de la sombra te puede acercar mucho a Ganon.",                                                            "Ho sentito dire che il Notturno delle ombre può portarti molto vicino a Ganon.",                                                       "Man erzählt sich, die Nocturne des Schattens bringe dich in die Nähe von Ganon."},
    });

    hintTable[JUNK64] = HintText::Junk({
        // obscure text
        Text{"They say that Twinrova always casts the same spell the first three times.",                                   "Selon moi, Twinrova lance toujours les mêmes trois premiers sorts.",                                           "Según dicen, Birova siempre lanza el mismo hechizo las tres primeras veces.",                                                      "Ho sentito dire che Kotakoume spara sempre la stessa magia le prime tre volte.",                                                       "Man erzählt sich, die ersten drei Zauber von Twinrova, würden immer dieselben sein."},
    });

    hintTable[JUNK65] = HintText::Junk({
        // obscure text
        Text{"They say that the nightly builds may be unstable.",                                                           "Selon moi, les « nightly builds » peuvent être instables.",                                                    "Según dicen, las últimas nightlies pueden llegar a ser algo inestables.",                                                          "Ho sentito dire che le versioni \"nightly\" potrebbero essere instabili.",                                                             "Man erzählt sich, Nightly Builds könnten instabil sein."},
    });

    hintTable[JUNK66] = HintText::Junk({
        // obscure text
        Text{"You're playing a Randomizer. I'm randomized!^Here's a random number:  #4#.&Enjoy your Randomizer!",           "Tu joues à un randomizer. Je suis aléatoire !^Voici un nombre aléatoire: #4#.&Bonne partie !",                 "¡Estás jugando un Randomizer! ¡Yo también estoy aleatorizada!^Aquí tienes un número aleatorio:  #8#.&¡Diviértete!",                "Stai giocando a un Randomizer. Io sono randomizzata!^Eccoti un numero random:  #4#.&Buon divertimento!",                               "Du spielst einen Randomizer. Ich wurde zufällig generiert!^Hier ist deine Zufallszahl: #4#.&Viel Spaß damit!"},
    });

    hintTable[JUNK67] = HintText::Junk({
        // obscure text
        Text{"They say Ganondorf's bolts can be reflected with glass or steel.",                                            "Selon moi, les éclairs de Ganon se reflètent sur l'acier et le verre.",                                        "Según dicen, puedes reflejar las esferas de energía de Ganondorf con cristal y acero.",                                            "Ho sentito dire che i colpi magici di Ganondorf si riflettono sull'acciaio e sul vetro.",                                              "Man erzählt sich, Ganondorfs magische Attacken, könne man mit Glas oder Stahl zurückwerfen."},
    });

    hintTable[JUNK68] = HintText::Junk({
        // obscure text
        Text{
            "They say Ganon's tail is vulnerable to nuts, arrows, swords, explosives, hammers...^...sticks, seeds, boomerangs...^...rods, shovels, iron balls, angry bees...",
            "Selon moi, la queue de Ganon est vulnérable aux noix, aux flèches, aux épées, aux bombes, aux marteaux...^...aux bâtons, aux graines, aux boomerangs...^...aux baguettes, aux pelles, aux boulets de fer, aux abeilles enragées...",
            "Según dicen, la cola de Ganon es vulnerable a nueces, flechas, espadas, explosivos, martillos...^...palos, semillas, bumeráns...^...cetros, palas, bolas de hierro, abejas...",
            "Ho sentito dire che la coda di Ganon è vulnerabile a spade, frecce, martelli, esplosivi, noci...^...bastoni, semi, boomerang...^...bacchette, badili, palle di ferro, api irascibili...",
            "Man erzählt sich, Ganons Schwanz sei anfällig gegenüber: Nüssen, Pfeilen, Schwertern,...^...Sprengstoffen, Hämmern, Stäben, Kernen, Bumerängen,...^...Zauberstäben, Schaufeln, Eisenkugeln, wütenden Bienen...^Was eigentlich nicht?"
        },
    });

    hintTable[JUNK69] = HintText::Junk({ 
        // obscure text
        Text{"{240}"} + // SFX: Gossip stone growing
        Text{"They say that you're wasting time reading this hint, but I disagree. Talk to me again!",                      "Selon moi... tu sais quoi ? Parle-moi encore, et je te le dirai !",                                            "Según dicen, pierdes el tiempo en leer esta pista, pero no pienso igual. ¡Vuelve a hablarme, ya verás!",                           "Ho sentito dire che stai perdendo tempo a leggere questo messaggio, ma io non sono affatto d'accordo. Parlami di nuovo!",              "Man erzählt sich, deine Zeit wäre erfolgreich verschwendet worden, da du diesen Hinweis gelesen hast. Ich bin da anderer Meinung, bis zum nächsten Mal!"},
    });

    hintTable[JUNK70] = HintText::Junk({
        // obscure text
        Text{"They say Ganondorf knows where to find the instrument of his doom.",                                          "Selon moi, Ganondorf sait où il a caché son point faible.",                                                    "Según dicen, Ganondorf sabe dónde hallar el instrumento de su perdición.",                                                         "Ho sentito dire che Ganondorf sa dove trovare lo strumento della sua sconfitta.",                                                      "Man erzählt sich, Ganondorf wisse wo das Instrument seines Verderbens zu finden sei.^Warum er es sich nicht holt und verwahrt weiß niemand."},
    });

    hintTable[JUNK71] = HintText::Junk({
        // obscure text
        Text{"I heard @ is pretty good at Zelda.",                                                                          "Apparemment, @ est super bon à Zelda.",                                                                        "He oído que a @ se le dan muy bien los Zelda.",                                                                                    "Dicono che @ sia davvero bravo a Zelda.",                                                                                              "Ich habe gehört @ sei ziemlich gut in Zelda Spielen."},
    });

    hintTable[JUNK72] = HintText::Junk({
        // obscure text
        Text{"Hi @, we've been trying to reach you about your car's extended warranty. ",                                   "Bonjour, @. Vous avez une voiture ? Vous savez, nous offrons des assurances abordables...",                    "Buenas, @. Le llamamos para ofrecerle un nuevo seguro de hogar que puede pagar en cómodos plazos, sin intereses ni comisiones.",   "Congratulazioni @! Sei stato sorteggiato come vincitore di una Pleistescion 5! Clicca qui per ritirare il tuo premio: bombch.us/DR1b", "Sehr geehrter @, wir haben versucht, dich wegen deiner Kfz-Versicherungsverlängerung zu erreichen."},
    });

    hintTable[JUNK73] = HintText::Junk({ 
        // obscure text
        Text{"{4C3}"} + // SFX: Equip Fire Arrow
        Text{"They say that the best weapon against Iron Knuckles is item 176.",                                            "Selon moi, les Hache-Viandes sont vulnérables contre l'objet 176.",                                            "Según dicen, la mejor arma para enfrentarse a los Nudillos de hierro es el objeto 176.",                                           "Ho sentito dire che l'arma più forte contro i guerrieri d'acciaio è l'oggetto 176.",                                                   "Man erzählt sich, die beste Waffe gegen Eisenprinzen, sei Gegenstand Nummer 176"},
    });

    hintTable[JUNK74] = HintText::Junk({
        // obscure text
        Text{"They say that it's actually possible to beat the running man.",                                               "Selon moi, il est possible de battre le marathonien.&Rien de plus simple, tu prends ton arc, et...",           "Según dicen, con mucha perseverancia puedes ganarle al corredor con la capucha de conejo.",                                        "Ho sentito dire che è veramente possibile vincere contro il corridore.",                                                               "Man erzählt sich, es sei möglich den reisenden Rennläufer zu besiegen. ^Wirklich! Vertrau mir einfach."},
    });

    hintTable[JUNK75] = HintText::Junk({
        // obscure text
        Text{"They say that the stone-cold guardian of the Well is only present during work hours.",                        "Selon moi, le gardien de pierre du puits quitte le soir pour aller se coucher.",                               "Según dicen, la inmensa roca que bloquea el pozo solo trabaja en horas laborales.",                                                "Ho sentito dire che il roccioso guardiano del pozzo è presente solo in orario lavorativo.",                                            "Man erzählt sich, das selbst der steinerne Wächter des Brunnens, sich an Arbeitszeiten halte."},
    });

    hintTable[JUNK76] = HintText::Junk({
        // obscure text
        Text{"They say this hint makes more sense in other languages.",                                                     "Selon moi, ces indices auraient pu être mieux traduits... Duh!",                                               "Según dicen, esta pista revela algo de vital importancia si cambias el idioma del juego...",                                       "Ho sentito dire che la traduzione italiana avrebbe potuto essere fatta meglio...",                                                     "Man erzählt sich, dieser Hinweis mache mehr Sinn in anderen Sprachen."},
    });

    hintTable[JUNK77] = HintText::Junk({
        // obscure text
        Text{"BOK? No way.",                                                                                                "BD'accord? Hors de question.",                                                                                 "¿BVale? Ni hablar.",                                                                                                               "BVa bene? Non ci penso nemmeno.",                                                                                                      "BOK? Niemals!"},
    });

    /*--------------------------
    |     DUNGEON HINT TEXT    |
    ---------------------------*/

    hintTable[DEKU_TREE] = HintText::DungeonName({
        // obscure text
        Text{"an ancient tree",                                                                                             "le Vieil Arbre",                                                                                               "un ancestral árbol",                                                                                                               "un antico albero",                                                                                                                     "in einem uralten Baum"},
    }, {
    },
        // clear text
        Text{"Deku Tree",                                                                                                   "l'Arbre Mojo",                                                                                                 "el Gran Árbol Deku",                                                                                                               "il Grande Albero Deku",                                                                                                                "im Deku-Baum"}
    );

    hintTable[DODONGOS_CAVERN] = HintText::DungeonName({
        // obscure text
        Text{"an immense cavern",                                                                                           "l'Immense Caverne",                                                                                            "una descomunal cueva",                                                                                                             "un'immensa caverna",                                                                                                                   "in einer riesigen Höhle"},
    }, {
    },
        // clear text
        Text{"Dodongo's Cavern",                                                                                            "la Caverne Dodongo",                                                                                           "la Cueva de los Dodongos",                                                                                                         "la caverna dei Dodongo",                                                                                                               "in Dodongos Höhle"}
    );

    hintTable[JABU_JABUS_BELLY] = HintText::DungeonName({
        // obscure text
        Text{"the belly of a deity",                                                                                        "le Ventre d'un Gardien",                                                                                       "la tripa de cierta deidad",                                                                                                        "la pancia di una divinità",                                                                                                            "im Bauche einer Gottheit"},
    }, {
    },
        // clear text
        Text{"Jabu-Jabu's Belly",                                                                                           "le Ventre de Jabu-Jabu",                                                                                       "tripa de Jabu-Jabu",                                                                                                               "la pancia di Jabu Jabu",                                                                                                               "in Jabu-Jabus Bauch"}
    );

    hintTable[FOREST_TEMPLE] = HintText::DungeonName({
        // obscure text
        Text{"a deep forest",                                                                                               "la Profonde Forêt",                                                                                            "las profundidades del bosque",                                                                                                     "una fitta foresta",                                                                                                                    "in dunklen Wäldern"},
    }, {
    },
        // clear text
        Text{"Forest Temple",                                                                                               "le Temple de la Forêt",                                                                                        "el Templo del Bosque",                                                                                                             "il Santuario della Foresta",                                                                                                           "im Waldtempel"}
    );

    hintTable[FIRE_TEMPLE] = HintText::DungeonName({
        // obscure text
        Text{"a high mountain",                                                                                             "la Grande Montagne",                                                                                           "una alta montaña",                                                                                                                 "la vetta di una montagna",                                                                                                             "auf hohem Berge"},
    }, {
    },
        // clear text
        Text{"Fire Temple",                                                                                                 "le Temple du Feu",                                                                                             "el Templo del Fuego",                                                                                                              "il Santuario del Fuoco",                                                                                                               "im Feuertempel"}
    );

    hintTable[WATER_TEMPLE] = HintText::DungeonName({
        // obscure text
        Text{"a vast lake",                                                                                                 "le Vaste Lac",                                                                                                 "un lago inmenso",                                                                                                                  "l'acqua di un lago",                                                                                                                   "im tiefen See"},
    }, {
    },
        // clear text
        Text{"Water Temple",                                                                                                "le Temple de l'Eau",                                                                                           "el Templo del Agua",                                                                                                               "il Santuario dell'Acqua",                                                                                                              "im Wassertempel"}
    );

    hintTable[SPIRIT_TEMPLE] = HintText::DungeonName({
        // obscure text
        Text{"the goddess of the sand",                                                                                     "la Déesse des Sables",                                                                                         "la diosa de las arenas",                                                                                                           "la dea del deserto",                                                                                                                   "innerhalb der Göttin des Sandes"},
    }, {
    },
        // clear text
        Text{"Spirit Temple",                                                                                               "le Temple de l'Esprit",                                                                                        "el Templo del Espíritu",                                                                                                           "il Santuario dello Spirito",                                                                                                           "im Geistertempel"}

    );

    hintTable[SHADOW_TEMPLE] = HintText::DungeonName({
        // obscure text
        Text{"the house of the dead",                                                                                       "la Maison des Morts",                                                                                          "la casa de la muerte",                                                                                                             "la casa dei morti",                                                                                                                    "an der Stätte des Todes"},
    }, {
    },
        // clear text
        Text{"Shadow Temple",                                                                                               "le Temple de l'Ombre",                                                                                         "el Templo de las Sombras",                                                                                                         "il Santuario dell'Ombra",                                                                                                              "im Schattentempel"}
    );

    hintTable[ICE_CAVERN] = HintText::DungeonName({
        // obscure text
        Text{"a frozen maze",                                                                                               "le Dédale Glacé",                                                                                              "un gélido laberinto",                                                                                                              "un gelido dedalo",                                                                                                                     "in einem gefrorenen Irrgarten"},
    }, {
    },
        // clear text
        Text{"Ice Cavern",                                                                                                  "la Caverne Polaire",                                                                                           "la caverna de hielo",                                                                                                              "la caverna di ghiaccio",                                                                                                               "in der Eishöhle"}
    );

    hintTable[BOTTOM_OF_THE_WELL] = HintText::DungeonName({
        // obscure text
        Text{"a shadow's prison",                                                                                           "la Prison d'une Ombre",                                                                                        "la prisión de las sombras",                                                                                                        "la prigione di uno spirito maligno",                                                                                                   "im Gefängnis eines Dämons"},
    }, {
    },
        // clear text
        Text{"Bottom of the Well",                                                                                          "le Puits",                                                                                                     "el fondo del pozo",                                                                                                                "il fondo del pozzo",                                                                                                                   "auf dem Grund des Brunnens"}
    );

    hintTable[GERUDO_TRAINING_GROUNDS] = HintText::DungeonName({
        // obscure text
        Text{"the test of thieves",                                                                                         "l'Épreuve des Voleurs",                                                                                        "la prueba de las bandidas",                                                                                                        "la prova dei ladri",                                                                                                                   "beim Test der Diebe"},
    }, {
    },
        // clear text
        Text{"Gerudo Training Grounds",                                                                                     "le Gymnase Gerudo",                                                                                            "el Centro de Instrucción Gerudo",                                                                                                  "la zona di addestramento Gerudo",                                                                                                      "in der Gerudo Trainingsarena"}
    );

    hintTable[GANONS_CASTLE] = HintText::DungeonName({
        // obscure text
        Text{"a conquered citadel",                                                                                         "le Repaire du Mal",                                                                                            "una conquistada ciudadela",                                                                                                        "una cittadella caduta",                                                                                                                "in einer gefallenen Burg"},
    }, {
    },
        // clear text
        Text{"Inside Ganon's Castle",                                                                                       "l'intérieur du Château de Ganon",                                                                              "el interior del Castillo de Ganon",                                                                                                "l'interno del castello di Ganon",                                                                                                      "in Ganons Schloss"}
    );

    /*--------------------------
    |      BOSS HINT TEXT      |
    ---------------------------*/

    hintTable[QUEEN_GOHMA] = HintText::Boss({
        // obscure text
        Text{"the #Parasitic Armored Arachnid# holds",                                                                      "le #Monstre Insectoïde Géant# possède",                                                                        "el #arácnido parasitario acorazado# porta",                                                                                        "il #parassita corazzato# possiede",                                                                                                    "nahe dem #gepanzerten Spinnenparasiten#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Queen Gohma# holds",                                                                                         "la #Reine Gohma# possède",                                                                                     "la #Reina Goma# porta",                                                                                                            "#Gohma# possiede",                                                                                                                     "nahe der #Spinnenkönigin Gohma#, |wäre|wären|"}
    );

    hintTable[KING_DODONGO] = HintText::Boss({
        // obscure text
        Text{"the #Infernal Dinosaur# holds",                                                                               "le #Dinosaure Infernal# possède",                                                                              "el #dinosaurio infernal# porta",                                                                                                   "il #dinosauro degli inferi# possiede",                                                                                                 "nahe dem #Infernosaurus#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#King Dodongo# holds",                                                                                        "le #Roi Dodongo# possède",                                                                                     "el #Rey Dodongo# porta",                                                                                                           "il #Mega Dodongo# possiede",                                                                                                           "nahe #King Dodongo#, |wäre|wären|"}
    );

    hintTable[BARINADE] = HintText::Boss({
        // obscure text
        Text{"the #Bio-Electric Anemone# holds",                                                                            "l'#Anémone Bioélectrique# possède",                                                                            "la #anémona bioeléctrica# porta",                                                                                                  "l'#anemone bio-elettrico# possiede",                                                                                                   "nahe dem #elektroterrestrischen Biotentakel#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Barinade# holds",                                                                                            "#Barinade# possède",                                                                                           "#Barinade# porta",                                                                                                                 "#Cnidade# possiede",                                                                                                                   "nahe #Barinade#, |wäre|wären|"}
    );

    hintTable[PHANTOM_GANON] = HintText::Boss({
        // obscure text
        Text{"the #Evil Spirit from Beyond# holds",                                                                         "l'#Esprit Maléfique de l'Au-delà# possède",                                                                    "el #espíritu maligno de ultratumba# porta",                                                                                        "lo #spirito del male# possiede",                                                                                                       "nahe dem #reitenden Unheil#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Phantom Ganon# holds",                                                                                       "#Ganon Spectral# possède",                                                                                     "#Ganon Fantasma# porta",                                                                                                           "#Spettro Ganon# possiede",                                                                                                             "nahe #Phantom-Ganon#, |wäre|wären|"}
    );

    hintTable[VOLVAGIA] = HintText::Boss({
        // obscure text
        Text{"the #Subterranean Lava Dragon# holds",                                                                        "le #Dragon des Profondeurs# possède",                                                                          "el #dragón de lava subterráneo# porta",                                                                                            "il #drago di magma# possiede",                                                                                                         "nahe dem #subterranen Lavadrachoiden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Volvagia# holds",                                                                                            "#Volcania# possède",                                                                                           "#Volvagia# porta",                                                                                                                 "#Varubaja# possiede",                                                                                                                  "nahe #Volvagia#, |wäre|wären|"}
    );

    hintTable[MORPHA] = HintText::Boss({
        // obscure text
        Text{"the #Giant Aquatic Amoeba# holds",                                                                            "l'#Amibe Aquatique Géante# possède",                                                                           "la #ameba acuática gigante# porta",                                                                                                "l'#ameba gigante# possiede",                                                                                                           "nahe dem #aquamöben Wassertentakel#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Morpha# holds",                                                                                              "#Morpha# possède",                                                                                             "#Morpha# porta",                                                                                                                   "#Morpha# possiede",                                                                                                                    "nahe #Morpha#, |wäre|wären|"}
    );

    hintTable[BONGO_BONGO] = HintText::Boss({
        // obscure text
        Text{"the #Phantom Shadow Beast# holds",                                                                            "le #Monstre de l'Ombre# possède",                                                                              "la #alimaña oscura espectral# porta",                                                                                              "la #bestia delle tenebre# possiede",                                                                                                   "nahe der #bestialischen Schattenmonstrosität#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Bongo Bongo# holds",                                                                                         "#Bongo Bongo# possède",                                                                                        "#Bongo Bongo# porta",                                                                                                              "#Bongo Bongo# possiede",                                                                                                               "nahe #Bongo Bongo#, |wäre|wären|"}
    );

    hintTable[TWINROVA] = HintText::Boss({
        // obscure text
        Text{"the #Sorceress Sisters# hold",                                                                                "#les Sorcières Jumelles# possèdent",                                                                           "las #hermanas hechiceras# portan",                                                                                                 "le #sorelle megere# possiedono",                                                                                                       "nahe der #höllischen Hexenarmada#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Twinrova# holds",                                                                                            "#Twinrova# possède",                                                                                           "#Birova# porta",                                                                                                                   "#Duerova# possiede",                                                                                                                   "nahe #Twinrova#, |wäre|wären|"}
    );

    // hintTable[LINKS_POCKET_BOSS] = HintText::Boss({
    //     // obscure text
    //     Text{"#@'s pocket# rewards", "#@ débute avec#", "el #bolsillo de @# premia con", "la #tasca di @# premia con", "in #@s Tasche#, |wäre|wären|"},
    // }, {
    // },
    //     // clear text
    //     Text{"#@ already has#", "#@ a déjà#", "el #bolsillo de @ ya tiene#", "#@ già possiede#", "bereits in #@s Besitz#, |wäre|wären|"}
    // );

    /*--------------------------
    |     BRIDGE HINT TEXT     |
    ---------------------------*/

    hintTable[BRIDGE_OPEN_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will have #already&created a bridge# to the castle where&the evil dwells.",
            "Les Sages ont #déjà créé&un pont# vers le repaire du mal.",
            "Los sabios #ya habrán creado un&puente #al castillo, de donde emana el mal.",
            "I Saggi avranno #già creato un ponte#&verso il castello dove risiede il male.",
            "Die Weisen haben #bereits&eine Brücke zum Portal von&Ganons Schloss gelegt#..."
        },
    });

    hintTable[BRIDGE_VANILLA_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will await for the&Hero to collect the #Shadow and Spirit&Medallions# as well as the #Light Arrows#.",
            "Les Sages attendront le Héros muni des&#Médaillons de l'Ombr &et de l'Esprit#&et des #Flèches de Lumière#.",
            "Los sabios aguardarán a que el héroe&obtenga tanto el #Medallón de las&Sombras y el del Espíritu# junto a la #flecha de luz#.",
            "I Saggi aspetteranno che l'Eroe&ottenga sia i #medaglioni dell'Ombra&e dello Spirito# che la #freccia di luce#.",
            "Die Weisen werden darauf warten,&dass der Held das #Amulett des&Schattens, Amulett der Geister#&und die #Licht-Pfeile# sammelt."
        },
    });

    hintTable[BRIDGE_STONES_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will await for the&Hero to collect #%d |Spiritual Stone|Spiritual Stones|#.",
            "Les Sages attendront le&Héros muni de #%d |Pierre Spirituelle|Pierres Spirituelles|#.",
            "Los sabios aguardarán a que el héroe&obtenga #%d |piedra espiritual|piedras espirituales|#.",
            "I Saggi aspetteranno che l'Eroe&ottenga #%d |pietra spirituale|pietre spirituali|#.",
            "Die Weisen werden darauf&warten, dass der Held #%d&|Heiligen Stein|Heilige Steine|# sammelt."
        },
    });

    hintTable[BRIDGE_MEDALLIONS_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will await for the&Hero to collect #%d |Medallion|Medallions|#.",
            "Les Sages attendront le Héros muni de&#%d |Médaillon|Médaillons|#.",
            "Los sabios aguardarán a que el héroe&obtenga #%d |medallón|medallones|#.",
            "I Saggi aspetteranno che l'Eroe&ottenga #%d |medaglione|medaglioni|#.",
            "Die Weisen werden darauf&warten, dass der Held #%d&|Amulett|Amulette|# sammelt."
        },
    });

    hintTable[BRIDGE_REWARDS_HINT] = HintText::Bridge({
        // obscure text 
        Text{
            "The awakened ones will await for the&Hero to collect #%d |Spiritual Stone&or Medallion|Spiritual Stones&and Medallions|#.",
            "Les Sages attendront le Héros muni de&#%d |Pierre Spirituelle ou Médaillon|Pierres spirituelles et/ou Médaillons|#.",
            "Los sabios aguardarán a que el héroe&obtenga #%d |piedra espiritual o medallón|piedras espirtuales y medallones|#.",
            "I Saggi aspetteranno che l'Eroe&ottenga #%d |pietra spirituale o medaglione|pietre spirituali o medaglioni|#.",
            "Die Weisen werden darauf warten,&dass der Held #%d |Heiligen Stein&oder Amulett|Heilige Steine&oder Amulette|# sammelt."
        },
    });

    hintTable[BRIDGE_DUNGEONS_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will await for the&Hero to conquer #%d |Dungeon|Dungeons|#.",
            "Les Sages attendront la conquête de&#%d |Donjon|Donjons|#.",
            "Los sabios aguardarán a que el héroe&complete #%d |mazmorra|mazmorras|#.",
            "I Saggi aspetteranno che l'Eroe&completi #%d dungeon#.",
            "Die Weisen werden darauf&warten, dass der Held #%d&|Labyrinth|Labyrinthe|# abschließt."
        },
    });

    hintTable[BRIDGE_TOKENS_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will await for the&Hero to collect #%d |Gold Skulltula&Token|Gold Skulltula&Tokens|#.",
            "Les Sages attendront le Héros muni de&#%d |symbole|symboles| de Skulltula d'or#.",
            "Los sabios aguardarán a que el héroe&obtenga #%d |símbolo|símbolos| de&skulltula dorada#.",
            "I Saggi aspetteranno che l'Eroe&ottenga #%d |teschio|teschi| d'oro#.",
            "Die Weisen werden darauf&warten, dass der Held #%d&|Skulltula-Symbol|Skulltula-Symbole|# sammelt."
        },
    });

    hintTable[BRIDGE_HEARTS_HINT] = HintText::Bridge({
        // obscure text
        Text{
            "The awakened ones will await for the&Hero to collect #%d |Heart|Hearts|#.",
            "Les Sages attendront le Héros muni de&#%d |cœur|cœurs|#.",
            "Los sabios aguardarán a que el héroe&obtenga #%d |corazón|corazones|#.",
            "I Saggi aspetteranno che l'Eroe&ottenga #%d |cuore|cuori|#.",
            "Die Weisen werden darauf&warten, dass der Held #%d&|Herz|Herzen|# sammelt."
        },
    });

    /*--------------------------
    | GANON BOSS KEY HINT TEXT |
    ---------------------------*/

    hintTable[GANON_BK_START_WITH_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be #given from the start#.",
            "Aussi, la Clé du #Seigneur du Malin# sera #possession même du héros#.",
            "Y obtendrás la llave del #señor del mal# desde el #inicio#.",
            "E la chiave del #re del male# sarà #in possesso dell'eroe#.",
            "Und der #Schlüssel des Bösen#,&wird #von Anfang an, im&Besitz des Helden# sein."
        },
    });

    hintTable[GANON_BK_VANILLA_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be kept in a big chest #inside its tower#.",
            "Aussi, la Clé du #Seigneur du Malin# sera dans un grand coffre #dans sa tour#.",
            "Y la llave del #señor del mal# aguardará en un gran cofre de #su torre#.",
            "E la chiave del #re del male# sarà chiusa in un grosso forziere nella #sua torre#.",
            "Und der #Schlüssel des Bösen#,&wird in der großen Truhe #im&Teufelsturm# zu finden sein."
        },
    });

    hintTable[GANON_BK_OWN_DUNGEON_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be hidden somewhere #inside its castle#.",
            "Aussi, la Clé du #Seigneur du Malin# sera cachée #dans son vaste château#.",
            "Y la llave del #señor del mal# aguardará en #algún lugar de su castillo#.",
            "E la chiave del #re del male# sarà nascosta da qualche parte nel #suo castello#.",
            "Und der #Schlüssel des Bösen#,&wird irgendwo #in Ganons&Schloss# zu finden sein."
        },
    });

    hintTable[GANON_BK_OVERWORLD_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be hidden #outside of dungeons# in Hyrule.",
            "Aussi, la Clé du #Seigneur du Malin# se trouve #hors des donjons# d'Hyrule.",
            "Y la llave del #señor del mal# aguardará #fuera de las mazmorras# de Hyrule.",
            "E la chiave del #re del male# sarà nascosta ad Hyrule #al di fuori dei dungeon#.",
            "Und der #Schlüssel des Bösen#,&wird irgendwo #in Hyrule,&außerhalb von Labyrinthen#&zu finden sein."
        },
    });

    hintTable[GANON_BK_ANY_DUNGEON_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be hidden #inside a dungeon# in Hyrule.",
            "Aussi, la Clé du #Seigneur du Malin# se trouve #dans un donjon# d'Hyrule.",
            "Y la llave del #señor del mal# aguardará #en una mazmorra# de Hyrule.",
            "E la chiave del #re del male# sarà nascosta ad Hyrule #all'interno di un dungeon#.",
            "Und der #Schlüssel des Bösen#,&wird irgendwo #in Hyrule,&innerhalb eines Labyrinths#&zu finden sein."
        },
    });

    hintTable[GANON_BK_ANYWHERE_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be hidden somewhere #in Hyrule#.",
            "Aussi, la Clé du #Seigneur du Malin# se trouve quelque part #dans Hyrule#.",
            "Y la llave del #señor del mal# aguardará en #cualquier lugar de Hyrule#.",
            "E la chiave del #re del male# sarà nascosta #da qualche parte ad Hyrule#.",
            "Und der #Schlüssel des Bösen#,&wird irgendwo #in Hyrule#&zu finden sein."
        },
    });

    hintTable[GANON_BK_TRIFORCE_HINT] = HintText::GanonsBossKey({
        // obscure text
        Text{
            "And the #evil one#'s key will be given to the Hero once the #Triforce# is completed.",
            "Aussi, la Clé du #Seigneur du Malin# se révèlera une fois la #Triforce# assemblée.",
            "Y el héroe recibirá la llave del #señor del mal# cuando haya completado la #Trifuerza#.",
            "E la chiave del #re del male# sarà ottenuta dall'Eroe completando la #Triforza#.",
            "Und der #Schlüssel des Bösen#&wird verliehen, sobald das&#Triforce# vervollständigt wurde."
        },
    });

    /*--------------------------
    |      LACS HINT TEXT      |
    ---------------------------*/

    hintTable[LACS_VANILLA_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once the #Shadow&and Spirit Medallions# are retrieved.",
            "Aussi, Zelda créera la Clé du&#Seigneur du Malin# une fois obtenu les&#Médaillons de l'Ombre et de l'Esprit#.",
            "Y Zelda entregará la llave&del #señor del mal# tras obtener&#el medallón de las sombras y del espíritu#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver ottenuto&i #medaglioni dell'Ombra e dello Spirito#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #die&Amulette des Schattens und&der Geister# geborgen wurden."
        },
    });

    hintTable[LACS_MEDALLIONS_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once #%d&|Medallion# is|Medallions# are| retrieved.",
            "Aussi, Zelda créera la Clé du&#Seigneur du Malin# une fois obtenu&#%d |Médaillon|Médaillons|#.",
            "Y Zelda entregará la llave&del #señor del mal# tras obtener&#%d |medallón|medallones|#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver ottenuto&#%d |medaglione|medaglioni|#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #%d&|Amulett# geborgen wurde|Amulette# geborgen wurden|."
        },
    });

    hintTable[LACS_STONES_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once #%d |Spiritual&Stone# is|Spiritual&Stones# are| retrieved.",
            "Aussi, Zelda créera la Clé du&#Seigneur du Malin# une fois obtenu&#%d |Pierre Spirituelle|Pierres Spirituelles|#.",
            "Y Zelda entregará la llave&del #señor del mal# tras obtener&#%d |piedra espiritual|piedras espirituales|#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver ottenuto&#%d |pietra spirituale|pietre spirituali|#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #%d&|Heiliger Stein# geborgen wurde|Heilige Steine# geborgen wurden|."
        },
    });

    hintTable[LACS_REWARDS_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once #%d |Spiritual&Stone or Medallion# is|Spiritual&Stones and Medallions# are| retrieved.",
            "Aussi, Zelda créera la Clé du&#Seigneur du Malin# une fois obtenu&#%d |Pierre Spirituelle ou Médaillon|Pierres Spirituelles et/ou Médaillons|#.",
            "Y Zelda entregará la llave&del #señor del mal# tras obtener&#%d |piedra espiritual o medallón|piedras espirituales o medallones|#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver ottenuto&#%d |pietra spirituale o medaglione|pietre spirituali o medaglioni|#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #%d&|Heiliger Stein oder Amulett#&geborgen wurde|Heilige Steine oder Amulette#&geborgen wurden|."
        },
    });

    hintTable[LACS_DUNGEONS_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once #%d |Dungeon#&is|Dungeons#&are| conquered.",
            "Aussi, Zelda créera la Clé du&#Seigneur du Malin# une fois que&#%d |Donjon est conquis|Donjons sont conquis|#.",
            "Y Zelda entregará la llave&del #señor del mal# tras completar&#%d |mazmorra|mazmorras|#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver&completato #%d dungeon#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #%d&|Labyrinth# abgeschlossen wurde|Labyrinthe# abgeschlossen wurden|."
        },
    });

    hintTable[LACS_TOKENS_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once #%d |Gold&Skulltula Token# is|Gold&Skulltula Tokens# are| retrieved.",
            "Aussi, Zelda créera la Clé du&#Seigneur du Malin# une fois obtenu&#%d |symbole|symboles| de Skulltula d'or#.",
            "Y Zelda entregará la llave&del #señor del mal# tras obtener&#%d |símbolo|símbolos| de&skulltula dorada#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver ottenuto&#%d |teschio|teschi| d'oro#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #%d&|Skulltula-Symbol# gesammelt wurde|Skulltula-Symbole# gesammelt wurden|."
        },
    });

    hintTable[LACS_HEARTS_HINT] = HintText::LACS({
        // obscure text
        Text{
            "And the #evil one#'s key will be&provided by Zelda once #%d |Heart#&is|Hearts#&are| retrieved.",
            "Aussi, Zelda créera la clé du&#Seigneur du Malin# une fois obtenu&#%d |cœur|cœurs|#.",
            "Y Zelda entregará la llave&del #señor del mal# tras obtener&#%d |corazón|corazones|#.",
            "E la chiave del #re del male# sarà&ricevuta da Zelda dopo aver ottenuto&#%d |cuore|cuori|#.",
            "Und der #Schlüssel des Bösen# wird&von Zelda verliehen, sobald #%d&|Herz# gesammelt wurde|Herzen# gesammelt wurden|."
        },
    });

    /*--------------------------
    |     TRIAL HINT TEXT      |
    ---------------------------*/

    hintTable[SIX_TRIALS] = HintText::Exclude({
        // obscure text
        Text{
            "#Ganon's Tower# is protected by a powerful barrier.",
            "#la Tour de Ganon# est protégée par une puissante barrière.",
            "la #torre de Ganon# está protegida por una poderosa barrera",
            "la #torre di Ganon# è protetta da una potente barriera.",
            "der #Teufelsturm# sei von einer mächtigen Barriere geschützt."
        },
    });

    hintTable[ZERO_TRIALS] = HintText::Exclude({
        // obscure text
        Text{
            "Sheik dispelled the barrier around #Ganon's Tower#.",
            "Sheik a dissipé la barrière autour de #la Tour de Ganon#.",
            "Sheik disipó la barrera alrededor de la #torre de Ganon#.",
            "Sheik ha dissolto la barriera attorno alla #torre di Ganon#.",
            "Shiek habe die Barriere um den #Teufelsturm# aufgelöst."
        },
    });

    hintTable[FOUR_TO_FIVE_TRIALS] = HintText::Exclude({
        // obscure text
        Text{
            " was dispelled by Sheik.",
            " a été dissipée par Sheik.",
            " se disipó gracias a Sheik.",
            " è stata dissolta da Sheik.",
            " sei von Shiek aufgelöst worden."
        },
    });

    hintTable[ONE_TO_THREE_TRIALS] = HintText::Exclude({
        // obscure text
        Text{
            " protects Ganons Tower.",
            " protège la Tour de Ganon.",
            " protege la torre de Ganon",
            " protegge la torre di Ganon.",
            " schütze den Teufelsturm."
        },
    });

    /*--------------------------
    |        ALTAR TEXT        |
    ---------------------------*/

    hintTable[SPIRITUAL_STONE_TEXT_START] = HintText::Altar({
        // obscure text
        Text{
            "3 Spiritual Stones found in Hyrule...",
            "Les trois Pierres Spirituelles cachées dans Hyrule...",
            "Tres piedras espirituales halladas por Hyrule...",
            "Tre pietre spirituali si celano ad Hyrule...",
            "Drei Heilige Steine, zu finden in Hyrule..."
        },
    });

    hintTable[CHILD_ALTAR_TEXT_END_DOTOPEN] = HintText::Altar({
        // obscure text
        Text{
            "Ye who may become a Hero...&The path to the future is open...",
            "À celui qui a quête de devenir héros...&Le futur vous accueille béant...",
            "Para aquel que se convierta en el héroe...&La puerta al futuro está a su disposición...",
            "O tu che diventerai un Eroe...&Il passaggio per il futuro è aperto...",
            "Jener auf dem Weg des Helden...&Der Pfad zur Zukunft sei geöffnet..."
        },
    });

    hintTable[CHILD_ALTAR_TEXT_END_DOTCLOSED] = HintText::Altar({
        // obscure text
        Text{
            "Ye who may become a Hero...&Stand with the Ocarina and&play the Song of Time.",
            "À celui qui a quête de devenir héros...&Portez l'Ocarina et jouez&le Chant du Temps.",
            "Para aquel que se convierta en el héroe...&Tome la ocarina y entone&la Canción del Tiempo.",
            "O tu che diventerai un Eroe...&Prendi l'ocarina e suona&la Canzone del Tempo.",
            "Jener auf dem Weg des Helden...&Nehme er seine Okarina zur Hand und&spiele hier die Hymne der Zeit."
        },
    });

    hintTable[CHILD_ALTAR_TEXT_END_DOTINTENDED] = HintText::Altar({
        // obscure text
        Text{
            "Ye who may become a Hero...&Offer the spiritual stones and&play the Song of Time.",
            "À celui qui a quête de devenir héros...&Présentez les Pierres Spirituelles et&jouez le Chant du Temps.",
            "Para aquel que se convierta en el héroe...&Tome las piedras espirituales y&entone la Canción del Tiempo.",
            "O tu che diventerai un Eroe...&Offri le tre pietre spirituali e&suona la Canzone del Tempo.",
            "Jener mit den drei Heiligen Steinen&nehme seine Okarina zur Hand und&spiele hier die Hymne der Zeit."
        },
    });

    hintTable[ADULT_ALTAR_TEXT_START] = HintText::Altar({
        // obscure text
        Text{
            "When evil rules all, an awakening voice from the Sacred Realm will call those destined to be Sages, who dwell in the #five temples#.",
            "Quand le mal aura triomphé, une voix du Saint Royaume appellera ceux cachés dans les #cinq Temples#, destinés à être Sages.",
            "Cuando el mal lo impregne todo, desde el Reino Sagrado surgirá una voz que hará despertar a los sabios que moran en los #cinco templos#.",
            "Quando il male regnerà sovrano, una voce proveniente dalla terra sacra riunirà i Saggi dei #cinque santuari#.",
            "Beherrscht das Böse die Welt, weilen&jene Weisen, die von der Stimme des&Heiligen Reiches erweckt werden, noch&in den #fünf Tempeln#."
        },
    });

    hintTable[ADULT_ALTAR_TEXT_END] = HintText::Altar({
        // obscure text
        Text{
            "Together with the Hero of Time, the&awakened ones will bind the evil and&return the light of peace to the world...",
            "Ensemble avec le Héros du Temps,&ces Sages emprisonneront le mal et&réinstaureront la lumière de paix dans&le monde...",
            "Con el Héroe del Tiempo, aquellos&que despierten detendrán el mal y&volverán al mundo la luz de la paz...",
            "Insieme all'Eroe del Tempo, i Saggi sconfiggeranno il male e riporteranno&la luce sul mondo...",
            "Zusammen mit dem Auserwählten wer-&den diese ihre Kräfte einsetzen, um&der Welt den Frieden wiederzugeben."
        },
    });

    /*--------------------------
    |   VALIDATION LINE TEXT   |
    ---------------------------*/

    hintTable[VALIDATION_LINE] = HintText::Validation({
        // obscure text
        Text{
            "Hmph... Since you made it this far, I'll let you know what glorious prize of Ganon's you likely missed out on in my tower.^Behold...^",
            "Pah! Puisque tu t'es rendu ici, je te dirai quel Trésor tu as manqué dans ma tour.^Et c'est...^",
            "Mmm... Ya que has llegado hasta aquí, te diré qué preciado objeto de mi propiedad puedes haberte dejado en mi torre.^He aquí...^",
            "Bah! Visto che sei arrivato fin qui, ti rivelerò quale incredibile tesoro ti sei probabilmente perso nella mia torre...^Ammira...^ ",
            "Hmpf... Da du es so weit geschafft hast, werde ich dir sagen, welch herrlichen Preis Ganons du dir entgehen lassen hast.^Erzittere vor... "
        },
    });

    /*---------------------------
    | LIGHT ARROW LOCATION TEXT |
    ----------------------------*/

    hintTable[LIGHT_ARROW_LOCATION_HINT] = HintText::LightArrow({
        // obscure text
        Text{
            "Ha ha ha... You'll never beat me by reflecting my lightning bolts and unleashing the arrows from ",
            "Ha ha ha... Pauvre fou! Tu ne pourras jamais me vaincre sans les Flèches de Lumière que j'ai cachées dans ",
            "Ja, ja, ja... Nunca me derrotarás reflejando mis esferas de energía y desplegando la flecha de luz de ",
            "Ah ah ah... Non mi sconfiggerai mai senza le frecce di luce! Sono ben nascoste in un posto chiamato ",
            "Ha ha ha... Du wirst mich niemals besiegen, indem du meine Energiebälle zurückwirfst und mich dann mit Licht-Pfeilen beschießt!^Sie sind absolut sicher "
        },
    });

    hintTable[YOUR_POCKET] = HintText::Exclude({
        // obscure text
        Text{
            "your pocket",
            "tes poches",
            "tu bolsillo",
            "la tua tasca",
            "in deiner Tasche"
        },
    });

    /*----------------------------
    | MASTER SWORD LOCATION TEXT |
    -----------------------------*/

    hintTable[MASTER_SWORD_LOCATION_HINT] = HintText::MasterSword({
        // obscure text
        Text{
            "And even if you do, you'll never find the legendary blade hidden in ",
            "Et même si tu les trouves, tu ne touveras jamais l'Épée de Légende cachée dans ",
            "E incluso si lo haces, nunca encontrarás la espada legendaria escondida en ",
            "E anche se le trovi, non saprai mai che il nascondiglio della spada leggendaria è ",
            "Und selbst wenn doch, die legendäre Klinge wirst du niemals finden "
        },
    });

    /*--------------------------
    |      GANON LINE TEXT     |
    ---------------------------*/

    hintTable[GANON_LINE01] = HintText::GanonLine({
        // obscure text
        Text{
            "Oh! It's @.&I was expecting someone called Sheik. Do you know what happened to them?",
            "Ah, c'est @.&J'attendais un certain Sheik. Sais-tu ce qui lui est arrivé ?",
            "¡Oh! Pero si es @.&Estaba esperando a alguien llamado Sheik. ¿Sabes qué puede haberle pasado?",
            "Oh, sei @!&Stavo aspettando qualcuno di nome Sheik.&Per caso sai che fine ha fatto?",
            "Oh, du bist es @.&Ich habe jemanden namens Shiek erwartet. Weißt du, was mit ihm passiert ist?"
        },
    });

    hintTable[GANON_LINE02] = HintText::GanonLine({
        // obscure text
        Text{
            "I knew I shouldn't have put the key on the other side of my door.",
            "J'aurais dû garder la clé ici. Hélas...",
            "Sabía que no tendría que haber dejado la llave al otro lado de la puerta.",
            "Sapevo che non avrei dovuto lasciare la chiave dall'altro lato della porta.",
            "Ich wusste, ich hätte den Schlüssel nicht draußen liegen lassen sollen."
        },
    });

    hintTable[GANON_LINE03] = HintText::GanonLine({
        // obscure text
        Text{
            "Looks like it's time for a round of tennis.",
            "C'est l'heure de jouer au tennis.",
            "Parece que es hora de una pachanga de tenis.",
            "Pare sia ora di giocare a tennis.",
            "Es scheint Zeit für eine Runde Tennis zu sein."
        },
    });

    hintTable[GANON_LINE04] = HintText::GanonLine({
        // obscure text
        Text{
            "You'll never deflect my bolts of energy with your sword, then shoot me with those Light Arrows you happen to have.",
            "Ne perds pas ton temps à frapper mes éclairs d'énergie avec ton épée et à me tirer dessus avec tes Flèches de Lumière!",
            "Nunca reflejarás mis esferas de energía con tu espada, para después dispararme con las flechas de luz que tendrás.",
            "Non rifletterai mai i miei attacchi magici con quella spada, tantomeno mi colpirai con quelle frecce di luce che ti ritrovi!",
            "Du wirst mich niemals besiegen, indem du meine Energiebälle zurückwirfst und mich dann mit Licht-Pfeilen beschießt!"
        },
    });

    hintTable[GANON_LINE05] = HintText::GanonLine({
        // obscure text
        Text{
            "Why did I leave my trident back in the desert?",
            "Et dire que j'ai oublié mon trident dans le Désert !",
            "Santa Hylia... ¿Por qué me habré dejado el tridente en el desierto?",
            "Accidenti... Mi sono scordato il tridente, è ancora al deserto!",
            "Verdammt... Ich habe meinen Dreizack in der Wüste gelassen."
        },
    });

    hintTable[GANON_LINE06] = HintText::GanonLine({
        // obscure text
        Text{
            "Zelda is probably going to do something stupid, like send you back to your own timeline.^So this is quite meaningless. Do you really want to save this moron?",
            "Même si je suis vaincu... Zelda te renverra dans ton ère, et je reviendrai conquérir le royaume !^Telle est la prophétie d'Hyrule Historia !",
            "Seguro que Zelda trata de hacer alguna tontería, como enviarte de vuelta a tu línea temporal.^No tiene ningún sentido alguno. ¿De verdad quieres salvar a esa tonta?",
            "Zelda farà senz'altro qualche stupidaggine, tipo mandarti indietro nel tempo creando una divergenza temporale.^Sei sicuro di voler salvare questa tonta?",
            "Zelda wird wahrscheinlich etwas Dummes tun, wie dich in deine eigene Zeit zurück zu schicken.^Ziemlich sinnlos! Willst du diesen Schwachkopf wirklich retten?"
        },
    });

    hintTable[GANON_LINE07] = HintText::GanonLine({
        // obscure text
        Text{
            "What about Zelda makes you think she'd be a better ruler than I?^I saved Lon Lon Ranch,&fed the hungry,&and my castle floats.",
            "Zelda ne sera jamais un meilleur monarque que moi !^J'ai un château volant, mes sujets sont de belles amazones... et mes Moblins sont clairement plus puissants que jamais!",
            "¿Qué te hace pensar que Zelda gobierna mejor que yo?^Yo he salvado el Rancho Lon Lon,&he alimentado a los hambrientos&y hasta hago que mi castillo flote.",
            "Cosa ti fa pensare che Zelda governerebbe meglio di me?^Ho salvato la Fattoria Lon Lon, ho dato da mangiare agli affamati, e ho un castello volante!",
            "Was an Zelda bringt dich dazu zu denken, sie sei ein besserer Herrscher als ich?^Ich habe die Lon Lon-Farm gerettet,&den Hungrigen etwas zu Essen gegeben,&und mein Schloss schwebt!"
        },
    });

    hintTable[GANON_LINE08] = HintText::GanonLine({
        // obscure text
        Text{
            "I've learned this spell,&it's really neat,&I'll keep it later&for your treat!",
            "Gamin, ton destin s'achève,&sous mon sort tu périras!&Cette partie ne fut pas brève,&et cette mort, tu subiras!",
            "Veamos ahora que harás,&la batalla ha de comenzar,&te enviaré de una vez al más allá,&¿listo para afrontar la verdad?",
            "Sei giunto alla fine&della tua avventura,&se sei senza fatine&la tua morte è sicura!",
            "Zelda weint, das arme Kind,&ihr Retter läuft herum wie blind!"
        },
    });

    hintTable[GANON_LINE09] = HintText::GanonLine({
        // obscure text
        Text{
            "Many tricks are up my sleeve,&to save yourself&you'd better leave!",
            "Sale petit garnement,&tu fais erreur !&C'est maintenant que marque&ta dernière heure !",
            "¿No osarás a mí enfrentarte?&Rimas aparte,&¡voy a matarte!",
            "Ci hai messo anche troppo&ad arrivare fin qua,&ora in un botto&vedrai l'aldilà!",
            "Da hilft kein Flehen und kein Flennen,&bald wird dieses Weltlein brennen!"
        },
    });

    hintTable[GANON_LINE10] = HintText::GanonLine({
        // obscure text
        Text{
            "After what you did to Koholint Island, how can you call me the bad guy?",
            "J'admire ce que tu as fait à l'Île Cocolint... Toi et moi, nous devrions faire équipe!",
            "Después de lo que le hiciste a la Isla Koholint, ¿cómo te atreves a llamarme malvado?",
            "Dopo quello che hai fatto all'Isola di Koholint, come puoi chiamarmi cattivo?",
            "Nach allem was du auf Kokolint angerichtet hast, wie kannst du mich den Bösen nennen?"
        },
    });

    hintTable[GANON_LINE11] = HintText::GanonLine({
        // obscure text
        Text{
            "Today, let's begin down&'The Hero is Defeated' timeline.",
            "Si tu me vaincs, Hyrule sera engloutie... mais si tu meurs, on aura A Link to the Past, le meilleur opus de la série!",
            "Hoy daremos lugar a la línea temporal del Héroe Derrotado.&¡Prepárate para el culmen de esta saga!",
            "Questo giorno segnerà l'inizio della linea temporale dell'Eroe Sconfitto.",
            "Heute beginnen wir die&'Der Held wurde besiegt'-Zeitlinie."
        },
    });

    /*--------------------------
    |      SHEIK LINE TEXT     |
    ---------------------------*/

    hintTable[SHEIK_LIGHT_ARROW_LOCATION_HINT] = HintText::SheikLine({
        // obscure text
        Text{
            "I overheard Ganondorf say that he put #the Light Arrows# in ",
            "J'ai entendu Ganondorf dire qu'il a caché #les Flèches de Lumière# dans ",
            "Escuché a Ganondorf decir que pusó #las flechas de luz# en ",
            "Ho scoperto che Ganondorf ha nascosto #le frecce di luce# presso ",
            "Ich habe mitbekommen, wie Ganondorf gesagt hat, dass er #die Lichtpfeile# " // + versteckt hat
        },
    });

    hintTable[SHEIK_MASTER_SWORD_LOCATION_HINT] = HintText::SheikLine({
        // obscure text
        Text{
            "He also stole #the Master Sword# and hid it in ",
            "Il aurait aussi volé #l'Épée de Légende#, qu'il aurait cachée dans ",
            "Él también robó #la Espada Maestra# y la escondió en ",
            "Ha anche rubato #la spada suprema#. L'ho sentito dire qualcosa riguardo ",
            "Er hat außerdem #das Master-Schwert# gestohlen und " // + versteckt
        },
    });

    hintTable[SHEIK_LINE01] = HintText::SheikLine({
        // obscure text
        Text{
            "@, I'll be waiting at Ganon's Castle once you have his #boss key#.",
            "@, je t'attendrai au Château de Ganon une fois que tu auras sa #Clé d'Or#.",
            "@, te esperé en el Castillo de Ganon cuando hás obtenido su #llave de jefe#.",
            "@, ti aspetterò al castello di Ganon quando avrai ottenuto la sua #grande chiave#.",
            "@, ich werde bei Ganons Schloss warten, sobald du seinen #Bossschlüssel# gefunden hast."
        },
    });

    hintTable[SHEIK_LINE02] = HintText::SheikLine({
        // obscure text
        Text{
            "It's time.",
            "Le moment est venu.",
            "Ya es la hora.",
            "È giunto il momento.",
            "Es ist Zeit."
        },
    });

    hintTable[SHEIK_LINE03] = HintText::SheikLine({
        // obscure text
        Text{
            "Looks like you're ready.^Good luck.",
            "On dirait que tu es prêt.^Je te souhaite bonne chance.",
            "Parece que estás listo.^Buena suerte.",
            "Sembra che tu sia pronto.^Buona fortuna.",
            "Scheint als wärst du bereit.^Viel Glück."
        },
    });

    /*--------------------------
    |      MERCHANTS' ITEMS     |
    ---------------------------*/

    hintTable[MEDIGORON_DIALOG] = HintText::MerchantsDialogs({
        // obscure text
        Text{
            "How about buying %s for #200 Rupees#?&" + TWO_WAY_CHOICE() + "#Buy&Don't buy#",
            "Veux-tu acheter %s pour #200 rubis# ?&" + TWO_WAY_CHOICE() + "#Acheter&Ne pas acheter#",
            "¿Me compras %s por #200 rupias#?&" + TWO_WAY_CHOICE() + "#Comprar&No comprar#",
            "Che ne dici? Vuoi comprrrarrre %s per #200 rupie#?&" + TWO_WAY_CHOICE() + "#Sì&No#",
            "Möchtest du %s für #200 Rubine# kaufen?&" + TWO_WAY_CHOICE() + "#Klar!&Nie im Leben!#"
        },
    });

    hintTable[CARPET_SALESMAN_DIALOG_FIRST] = HintText::MerchantsDialogs({
        // obscure text
        Text{
            "Welcome!^I am selling stuff, strange and rare, from&all over the world to everybody. Today's&special is...^" "%s! Terrifying! I won't tell you what it is until I see the money...^How about #200 Rupees#?&&" + TWO_WAY_CHOICE() + "#Buy&Don't buy#",
            "Bienvenue !^Je vends des objets rares et merveilleux du&monde entier. En spécial aujourd'hui...^" "%s ! Un concentré de puissance ! Mais montre tes rubis avant que je te dise ce que c'est...^Disons #200 rubis# ?&&" + TWO_WAY_CHOICE() + "#Acheter&Ne pas acheter#",
            "¡Acércate!^Vendo productos extraños y difíciles de&encontrar... De todo el mundo a todo el&mundo. La oferta de hoy es...^" "¡%s! ¡Terrorífico! No te revelaré su nombre hasta que vea el dinero...^#200 rupias#, ¿qué te parece?&&" + TWO_WAY_CHOICE() + "#Comprar&No comprar#",
            "Benvenuto!^Vendo merce strana e introvabile che&proviene da ogni parte del mondo.&Oggi il pezzo forte è...^" "%s! Non ti dico di che si tratta finché non vedo la grana.^Hai #200 rupie#?&&" + TWO_WAY_CHOICE() + "#Tieni!&Veramente no...#",
            "Willkommen!^Ich verkaufe hier seltsame,&seltene Sachen aus der ganzen Welt.^Mein heutiges Angebot...&" "%s!&Furchterregend oder? Ich erzähle Euch mehr, wenn ich Geld sehe...^Wie wär's mit #200 Rubinen#?&&" + TWO_WAY_CHOICE() + "#Aber sicher!&Ich bin weg!#"
        },
    });

    hintTable[CARPET_SALESMAN_DIALOG_SECOND] = HintText::MerchantsDialogs({
        // obscure text
        Text{
            "Thank you very much!^What I'm selling is... " "#%s!#^The mark that will lead you to the #Spirit&Temple# is the #flag on the " + IF_NOT_MQ() + "left" + MQ_ELSE() + "right" + MQ_END() + "# outside the shop. Be seeing you!",
            "Merci beaucoup !^Cet objet extraordinaire est... " "#%s !#^La marque qui te mènera au #Temple de l'Esprit# est le #drapeau à " + IF_NOT_MQ() + "gauche" + MQ_ELSE() + "droite" + MQ_END() + "# en sortant d'ici. À la prochaine !",
            "¡Muchas gracias!^Lo que vendo es... " "¡#%s!#^La marca que te guiará al #Templo del&Espíritu# es la #bandera que está a la&" + IF_NOT_MQ() + "izquierda" + MQ_ELSE() + "derecha" + MQ_END() + "# al salir de aquí. ¡Nos vemos!",
            "Grazie!^Hai appena comprato... " "#%s!#^La direzione per il #Santuario dello Spirito# è indicata dalla #bandiera sulla " + IF_NOT_MQ() + "sinistra" + MQ_ELSE() + "destra" + MQ_END() + "# del negozio. A presto!",
            "Vielen herzlichen Dank!&" "#%s#! Toll oder?^Das Zeichen, welches Euch zum&#Geistertempel# führt, ist die #Flagge&zur " + IF_NOT_MQ() + "Linken" + MQ_ELSE() + "Rechten" + MQ_END() + "# außerhalb des Ladens.^Schaut mal wieder vorbei!"
        },
    });

    hintTable[GRANNY_DIALOG] = HintText::MerchantsDialogs({
        // obscure text
        Text{
            "! How about #100 Rupees#?&" + TWO_WAY_CHOICE() + "#Buy&Don't buy#",
            " ! Que dis-tu de #100 rubis# ?&" + TWO_WAY_CHOICE() + "#Acheter&Ne pas acheter#",
            ". Vendo por #100 rupias#.&" + TWO_WAY_CHOICE() + "#Comprar&No comprar#",
            "! Che ne dici di #100 rupie#?&" + TWO_WAY_CHOICE() + "#Aggiudicato!&Non mi serve...#",
            "! Sagen wir #100 Rubine#!&" + TWO_WAY_CHOICE() + "#Gerne!&Auf keinen Fall!#"
        },
    });

    /*----------------------------------
    |         DAMPÉ DIARY TEXT         |
    -----------------------------------*/

    hintTable[DAMPE_DIARY_HINT] = HintText::DampeHint({
        // obscure text
        Text{
            "Whoever reads this, please enter #%s#. I will let you have my stretching, shrinking #keepsake#.^I'm waiting for you.&--Dampé",
            "Toi, le petit curieux qui lit ce journal, viens dans #%s#. Et peut-être auras-tu droit à mon précieux #trésor#.^Je t'attends...&--Igor",
            "A quien lea estas palabras: Entra en #%s# y mi fantástico #tesoro# será para ti.^Te espero.&- Dampé",
            "Chiunque legga questo, visiti #%s#. Gli darò il mio #tesoro# BOING BOING.^Firmato: Danpei",
            "Wer immer dies liest, der möge #%s# betreten. Ihm gebe ich meinen langen, kurzen #Schatz#^Ich warte! Boris"
        },
    });

    /*----------------------------------
    |     HOUSE OF SKULLTULA HINTS     |
    -----------------------------------*/

    hintTable[HOUSE_OF_SKULLTULA_HINT] = HintText::SkulltulaHints({
        // obscure text
        Text{
            "Yeaaarrgh! I'm cursed!! Please save me by destroying #%d Spiders of the Curse# and I will give you #%s#.",
            "Beuaaaaark! Je suis maudit ! Je t'en supplie, aide-moi en vainquant #%d Skulltulas d'Or# et je te donnerai #%s#.",
            "¡Grrrrrr! ¡Estoy maldito! Por favor, sálvame destruyendo #%d Arañas de la Maldición# y yo te daría #%s#.",
            "Ahhhhhhhh! Questa maledizione è davvero terribile! Ti prego, salvami distruggendo #%d Aracnule d'oro# e ti darò #%s#.",
            "Aarrrgh! Ich bin verflucht!^Bitte rette mich, indem du #%d Skulltulas# zerstörst und ich werde dir dafür #%s# geben!"
        },
    });
}
// clang-format on
s32 StonesRequiredBySettings() {
    s32 stones = 0;
    if (Settings::Bridge.Is(RAINBOWBRIDGE_STONES)) {
        stones = std::max<s32>({ stones, (s32)Settings::BridgeStoneCount.Value<u8>() });
    }
    if (Settings::Bridge.Is(RAINBOWBRIDGE_REWARDS)) {
        stones = std::max<s32>({ stones, (s32)Settings::BridgeRewardCount.Value<u8>() - 6 });
    }
    if ((Settings::Bridge.Is(RAINBOWBRIDGE_DUNGEONS)) && (Settings::ShuffleRewards.Is(REWARDSHUFFLE_END_OF_DUNGEON))) {
        stones = std::max<s32>({ stones, (s32)Settings::BridgeDungeonCount.Value<u8>() - 6 });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_STONES)) {
        stones = std::max<s32>({ stones, (s32)Settings::LACSStoneCount.Value<u8>() });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_REWARDS)) {
        stones = std::max<s32>({ stones, (s32)Settings::LACSRewardCount.Value<u8>() - 6 });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_DUNGEONS)) {
        stones = std::max<s32>({ stones, (s32)Settings::LACSDungeonCount.Value<u8>() - 6 });
    }
    return stones;
}

s32 MedallionsRequiredBySettings() {
    s32 medallions = 0;
    if (Settings::Bridge.Is(RAINBOWBRIDGE_MEDALLIONS)) {
        medallions = std::max<s32>({ medallions, (s32)Settings::BridgeMedallionCount.Value<u8>() });
    }
    if (Settings::Bridge.Is(RAINBOWBRIDGE_REWARDS)) {
        medallions = std::max<s32>({ medallions, (s32)Settings::BridgeRewardCount.Value<u8>() - 3 });
    }
    if ((Settings::Bridge.Is(RAINBOWBRIDGE_DUNGEONS)) && (Settings::ShuffleRewards.Is(REWARDSHUFFLE_END_OF_DUNGEON))) {
        medallions = std::max<s32>({ medallions, (s32)Settings::BridgeDungeonCount.Value<u8>() - 3 });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_MEDALLIONS)) {
        medallions = std::max<s32>({ medallions, (s32)Settings::LACSMedallionCount.Value<u8>() });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_REWARDS)) {
        medallions = std::max<s32>({ medallions, (s32)Settings::LACSRewardCount.Value<u8>() - 3 });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_DUNGEONS)) {
        medallions = std::max<s32>({ medallions, (s32)Settings::LACSDungeonCount.Value<u8>() - 3 });
    }
    return medallions;
}

s32 TokensRequiredBySettings() {
    s32 tokens = 0;
    if (Settings::Bridge.Is(RAINBOWBRIDGE_TOKENS)) {
        tokens = std::max<s32>({ tokens, (s32)Settings::BridgeTokenCount.Value<u8>() });
    }
    if (Settings::GanonsBossKey.Is(GANONSBOSSKEY_LACS_TOKENS)) {
        tokens = std::max<s32>({ tokens, (s32)Settings::LACSTokenCount.Value<u8>() });
    }
    return tokens;
}

std::array<ConditionalAlwaysHint, 9> conditionalAlwaysHints = {
    std::make_pair(MARKET_10_BIG_POES, []() { return Settings::BigPoeTargetCount.Value<u8>() >= 3; }), // Remember, the option's value being 3 means 4 are required
    std::make_pair(DEKU_THEATER_MASK_OF_TRUTH, []() { return !Settings::CompleteMaskQuest; }),
    std::make_pair(SONG_FROM_OCARINA_OF_TIME, []() { return StonesRequiredBySettings() < 2; }),
    std::make_pair(HF_OCARINA_OF_TIME_ITEM, []() { return StonesRequiredBySettings() < 2; }),
    std::make_pair(SHEIK_IN_KAKARIKO, []() { return MedallionsRequiredBySettings() < 5; }),
    std::make_pair(DMT_TRADE_CLAIM_CHECK, []() { return false; }),
    std::make_pair(KAK_30_GOLD_SKULLTULA_REWARD, []() { return TokensRequiredBySettings() < 30; }),
    std::make_pair(KAK_40_GOLD_SKULLTULA_REWARD, []() { return TokensRequiredBySettings() < 40; }),
    std::make_pair(KAK_50_GOLD_SKULLTULA_REWARD, []() { return TokensRequiredBySettings() < 50; })
};

const HintText& Hint(const HintKey hintKey) {
    return hintTable[hintKey];
}

std::vector<HintText> GetHintCategory(HintCategory category) {

    std::vector<HintText> hintsInCategory = {};

    for (const auto& hint : hintTable) {
        if (hint.GetType() == category) {
            hintsInCategory.push_back(hint);
        }
    }
    return hintsInCategory;
}
