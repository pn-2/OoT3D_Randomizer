#include "hint_list.hpp"
// clang-format off
void HintTable_Init_Exclude_Overworld() {//English                          French                                                                              Spanish                                                                         Italian                                                                     German
    hintTable[KF_KOKIRI_SWORD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #hidden treasure of the Kokiri# is",                      "le #trésor caché des Kokiri# est",                                                 "el #tesoro oculto de los Kokiri# esconde",                                     "il #tesoro nascosto dei Kokiri# è",                                        "der #geheime Schatz der Kokiri#, |wäre|wären|"},
    });

    hintTable[KF_MIDOS_TOP_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #leader of the Kokiri# hides",                            "le #chef des Kokiri# cache",                                                       "el #líder de los Kokiri# esconde",                                             "il #capo dei Kokiri# nasconde",                                            "beim #Anführer der Kokiri#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#inside Mido's house# is",                                    "dans la #maison de Mido# se trouve",                                               "en la #casa de Mido# yace",                                                    "nella #casa di Mido# puoi trovare",                                        "#in Midos Haus#, |wäre|wären|"}
    );

    hintTable[KF_MIDOS_TOP_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #leader of the Kokiri# hides",                            "le #chef des Kokiri# cache",                                                       "el #líder de los Kokiri# esconde",                                             "il #capo dei Kokiri# nasconde",                                            "beim #Anführer der Kokiri#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#inside Mido's house# is",                                    "dans la #maison de Mido# se trouve",                                               "en la #casa de Mido# yace",                                                    "nella #casa di Mido# puoi trovare",                                        "#in Midos Haus#, |wäre|wären|"}
    );

    hintTable[KF_MIDOS_BOTTOM_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #leader of the Kokiri# hides",                            "le #chef des Kokiri# cache",                                                       "el #líder de los Kokiri# esconde",                                             "il #capo dei Kokiri# nasconde",                                            "beim #Anführer der Kokiri#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#inside Mido's house# is",                                    "dans la #maison de Mido# se trouve",                                               "en la #casa de Mido# yace",                                                    "nella #casa di Mido# puoi trovare",                                        "#in Midos Haus#, |wäre|wären|"}
    );

    hintTable[KF_MIDOS_BOTTOM_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #leader of the Kokiri# hides",                            "le #chef des Kokiri# cache",                                                       "el #líder de los Kokiri# esconde",                                             "il #capo dei Kokiri# nasconde",                                            "beim #Anführer der Kokiri#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#inside Mido's house# is",                                    "dans la #maison de Mido# se trouve",                                               "en la #casa de Mido# yace",                                                    "nella #casa di Mido# puoi trovare",                                        "#in Midos Haus#, |wäre|wären|"}
    );

    hintTable[GRAVEYARD_SHIELD_GRAVE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #treasure of a fallen soldier# is",                       "le #trésor d'un soldat mort# est",                                                 "el #tesoro de un soldado caído# esconde",                                      "il #tesoro di un soldato caduto# è",                                       "der #Schatz eines gefallenen Soldaten#, |wäre|wären|"},
    });

    hintTable[DMT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"hidden behind a wall on a #mountain trail# is",               "derrière une façade d'un #chemin de montagne# se trouve",                          "tras una pared del #sendero de la montaña# yace",                              "dietro una parete su un #sentiero di montagna# puoi trovare",              "hinter einer Wand eines #Gebirgspfades#, |wäre|wären|"},
    });

    hintTable[GC_MAZE_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in #Goron City# explosives unlock",                           "des explosions dans le #Village Goron# révèlent",                                  "en la #Ciudad Goron# unos explosivos desbloquean",                             "nella #città dei Goron# gli esplosivi sbloccano",                          "hinter Felsen #Goronias#, |wäre|wären|"},
    });

    hintTable[GC_MAZE_CENTER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in #Goron City# explosives unlock",                           "des explosions dans le #Village Goron# révèlent",                                  "en la #Ciudad Goron# unos explosivos desbloquean",                             "nella #città dei Goron# gli esplosivi sbloccano",                          "hinter Felsen #Goronias#, |wäre|wären|"},
    });

    hintTable[ZD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"fire #beyond a waterfall# reveals",                           "du feu #derrière une cascade# éclaire",                                            "las #llamas tras una una cascada# revelan",                                    "#fuoco oltre una cascata# rivela",                                         "hinter einem #Wasserfall#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_HOOKSHOT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a chest hidden by a #speedy spectre# holds",                  "le coffre du #rapide revenant# contient",                                          "un cofre custodiado por un #espectro veloz# contiene",                         "un forziere nascosto da uno #svelto spettro# contiene",                    "bei einem #flinken Gespenst#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#dead Dampé's first prize# is",                               "la #première course d'Igor# donne",                                                "el primer premio de #la carrera de Dampé# se trata de",                        "la prima ricompensa del #fantasma di Danpei# è",                           "#Boris' erster Preis#, |wäre|wären|"}
    );

    hintTable[GF_CHEST] = HintText::Exclude({
        // obscure text
        Text{"on a #rooftop in the desert# lies",                           "sur un #toit dans le désert# repose",                                              "en una #azotea del desierto# yace",                                            "sopra un #tetto in un deserto# puoi trovare",                              "auf einem #Dach der Wüste#, |wäre|wären|"},
    });

    hintTable[KAK_REDEAD_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#zombies beneath the earth# guard",                           "les #revenants sous terre# protègent",                                             "unos #zombis subterráneos# esconden",                                          "dei #ri-morti sottoterra# proteggono",                                     "in einem #Erdloch mit zwei Zombies#, |wäre|wären|"},
    });

    hintTable[SFM_WOLFOS_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#wolves beneath the earth# guard",                            "les #loups sous terre# protègent",                                                 "unos #lobos subterráneos# esconden",                                           "dei #lupi sottoterra# proteggono",                                         "in einem #Erdloch mit zwei Wolfos#"},
    });

    hintTable[HF_NEAR_MARKET_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole in a field near a drawbridge# holds",                 "la #grotte dans une plaine près d'un pont-levis# contient",                        "bajo el #hoyo de una llanura cercano a un puente# yace",                       "#vicino al ponte levatoio# qualcuno ha sepolto",                           "in einem #Erdloch nahe einer Zugbrücke#, |wäre|wären|"},
    });

    hintTable[HF_SOUTHEAST_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole amongst trees in a field# holds",                     "la #grotte parmi les arbres dans une plaine# contient",                            "bajo el #hoyo de una llanura rodeado de árboles# yace",                        "#in mezzo a degli alberi# in una pianura qualcuno ha sepolto",             "in einem, #von Bäumen umgebenen Erdloch einer Ebene#, |wäre|wären|"},
    });

    hintTable[HF_OPEN_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #open hole in a field# holds",                             "la #grotte ouverte dans une plaine# contient",                                     "bajo el #hoyo descubierto de una llanura# yace",                               "una #buca aperta nella pianura# contiene",                                 "in einem #offenstehenden Erdloch einer Ebene#, |wäre|wären|"},
    });

    hintTable[KAK_OPEN_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #open hole in a town# holds",                              "la #grotte ouverte dans un village# contient",                                     "bajo el #hoyo descubierto de un pueblo# yace",                                 "una #buca aperta in un villaggio# contiene",                               "in einem #offenstehenden Erdloch eines Dorfes#, |wäre|wären|"},
    });

    hintTable[ZR_OPEN_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole along a river# holds",                                "la #grotte ouverte le long d'un fleuve# contient",                                 "bajo un #hoyo junto a un río# yace",                                           "una #buca aperta in riva al fiume# contiene",                              "in einem #Erdloch nahe eines Flusses#, |wäre|wären|"},
    });

    hintTable[KF_STORMS_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole in a forest village# holds",                          "la #grotte inondée de pluie dans le Village Kokiri# révèle",                       "bajo el #hoyo de una tribu del bosque# yace",                                  "nella #foresta dei Kokiri# qualcuno ha sepolto",                           "in einem #Erdloch eines Walddorfes#, |wäre|wären|"},
    });

    hintTable[LW_NEAR_SHORTCUTS_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole in a wooded maze# holds",                             "la #grotte dans un labyrinthe sylvestre# contient",                                "bajo un #hoyo de un laberinto forestal# yace",                                 "#in un dedalo silvestre# qualcuno ha sepolto",                             "in einem #Erdloch eines hölzernen Irrgartens#, |wäre|wären|"},
    });

    hintTable[DMT_STORMS_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole flooded with rain on a mountain# holds",              "la #grotte inondée de pluie sur la montagne# contient",                            "bajo un #hoyo de una montaña inundado de lluvia# yace",                        "#all'ingresso di una città rocciosa# qualcuno ha sepolto",                 "in einem #stürmischen Erdloch eines Berges#, |wäre|wären|"},
    });

    hintTable[DMC_UPPER_GROTTO_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hole in a volcano# holds",                                 "la #grotte dans le volcan# contient",                                              "bajo el #hoyo de un volcán# yace",                                             "#in un vulcano# qualcuno ha sepolto",                                      "in einem #Erdloch eines Vulkans#, |wäre|wären|"},
    });

    hintTable[TOT_MASTER_SWORD] = HintText::Exclude({
        // obscure text
        Text{"a #pedestal in a temple# holds",                              "un #piédestal dans un temple# contient",                                           "un #pedestal en un templo# sostiene",                                          "su #un piedistallo in un santuario# puoi ammirare",                        "auf einem #Podest eines Tempels#, |wäre|wären|"},
    });

    hintTable[TOT_LIGHT_ARROWS_CUTSCENE] = HintText::Exclude({
        // obscure text
        Text{"the #final gift of a princess# is",                           "le #dernier cadeau de la Princesse# est",                                          "el #obsequio final de la princesa# se trata de",                               "l'#ultimo dono della principessa# è",                                      "das #finale Geschenk einer Prinzessin#, |wäre|wären|"},
    });

    hintTable[LW_GIFT_FROM_SARIA] = HintText::Exclude({
        // obscure text
        Text{"the #farewell gift on a bridge# is",                          "le #cadeau d'adieu sur un pont# est en fait",                                      "el #regalo de despedida en un puente# es",                                     "il #regalo d'addio su un ponte# è",                                        "ein #Abschiedsgeschenk auf einer Brücke#, |wäre|wären|"},
        Text{"a #dear friend# gifts",                                       "une #grande amie# te confiera",                                                    "una #gran amiga# concede",                                                     "una #grande amica# dona",                                                  "das Geschenk einer #Kindheitsfreundin#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Saria's Gift# is",                                           "le #cadeau de Saria# est",                                                         "el #regalo de Saria# se trata de",                                             "il #regalo di Saria# è",                                                   "#Salias Geschenk#, |wäre|wären|"}
    );

    hintTable[ZF_GREAT_FAIRY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"the #fairy of winds# holds",                                  "la #Grande Fée du Vent# a",                                                        "el #hada del viento# brinda",                                                  "la #fata del vento# consegna",                                             "in der #Feen-Quelle des Sturmes#, |wäre|wären|"},
    });

    hintTable[HC_GREAT_FAIRY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"the #fairy of fire# holds",                                   "la #Grande Fée du Feu# a",                                                         "el #hada del fuego# brinda",                                                   "la #fata del fuoco# consegna",                                             "in der #Feen-Quelle des Feuers#, |wäre|wären|"},
    });

    hintTable[COLOSSUS_GREAT_FAIRY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"the #fairy of love# holds",                                   "la #Grande Fée de l'Amour# a",                                                     "el #hada del amor# brinda",                                                    "la #fata dell'amore# consegna",                                            "in der #Feen-Quelle der Liebe#, |wäre|wären|"},
    });

    hintTable[DMT_GREAT_FAIRY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"the #Great Fairy of Power# gifts",                            "la #Grande Fée de la Force# a",                                                    "la #Gran Hada del Poder# brinda",                                              "la #Fata radiosa della Forza# consegna",                                   "in der #Feen-Quelle der Fähigkeiten#, |wäre|wären|"},
    });

    hintTable[DMC_GREAT_FAIRY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"the #Great Fairy of Wisdom# gifts",                           "la #Grande Fée de la Sagesse# a",                                                  "la #Gran Hada de la Sabiduría# brinda",                                        "la #Fata radiosa della Saggezza# consegna",                                "in der #Feen-Quelle der Weisheit#, |wäre|wären|"},
    });

    hintTable[OGC_GREAT_FAIRY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"the #Great Fairy of Courage# holds",                          "la #Grande Fée du Courage# a",                                                     "la #Gran Hada del Valor# brinda",                                              "la #Fata radiosa del Coraggio# consegna",                                  "in der #Feen-Quelle des Mutes#, |wäre|wären|"},
    });


    hintTable[SONG_FROM_IMPA] = HintText::Exclude({
        // obscure text
        Text{"#deep in a castle#, Impa teaches",                            "#au fond d'un château#, Impa enseigne",                                            "en el #jardín del castillo Impa enseña#",                                      "#tra le mura del castello#, Impa insegna",                                 "ein, #in einem Schloss# von Impa gelehrtes Lied, |wäre|wären|"},
    });

    hintTable[SONG_FROM_MALON] = HintText::Exclude({
        // obscure text
        Text{"#a farm girl# sings",                                         "la #fille de la ferme# donne",                                                     "una #chica rupestre# canta",                                                   "una #ragazza di campagna# canta",                                          "ein, von einem #Bauernmädchen gesungenes Lied#, |wäre|wären|"},
    });

    hintTable[SONG_FROM_SARIA] = HintText::Exclude({
        // obscure text
        Text{"#deep in the forest#, Saria teaches",                         "#au fond de la forêt#, Saria enseigne",                                            "al #fondo del bosque# Saria enseña",                                           "#in fondo al bosco#, Saria insegna",                                       "ein, #im tiefen Wald# von Salia gelehrtes Lied, |wäre|wären|"},
    });

    hintTable[SONG_FROM_WINDMILL] = HintText::Exclude({
        // obscure text
        Text{"a man #in a windmill# is obsessed with",                      "un homme #dans un moulin# est obsédé par",                                         "el #hombre del molino# está obsesionado con",                                  "#l'uomo del mulino# ha un'ossessione per",                                 "ein, #in einer Windmühle# gelehres Lied, |wäre|wären|"},
    });


    hintTable[HC_MALON_EGG] = HintText::Exclude({
        // obscure text
        Text{"a #girl looking for her father# gives",                       "la #fille qui cherche son père# donne",                                            "una #chica en busca de su padre# otorga",                                      "una #ragazza in cerca di suo padre# dona",                                 "der Gegenstand eines #besorgten Mädchens#, |wäre|wären|"},
    });

    hintTable[HC_ZELDAS_LETTER] = HintText::Exclude({
        // obscure text
        Text{"a #princess in a castle# gifts",                              "la #Princesse dans le château# donne",                                             "la #princesa de un castillo# otorga",                                          "la #principessa nel castello# consegna",                                   "#Zeldas hoheitlicher Auftrag#, |wäre|wären|"},
    });

    hintTable[ZD_DIVING_MINIGAME] = HintText::Exclude({
        // obscure text
        Text{"an #unsustainable business model# gifts",                     "une #mauvaise stratégie commerciale# donne",                                       "un #mal modelo de negocio# premia con",                                        "una #pessima strategia commerciale# elargisce",                            "beim #nicht aufrechtzuerhaltenen Geschäftsmodell#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"those who #dive for Zora rupees# will find",                  "ceux qui #plongent pour des rubis Zora# trouveront",                               "aquellos que se #sumergan por las rupias zora# encontrarán",                   "chi #si immerge per recuperare rupie fra gli Zora# riceve",                "beim #Tauchspiel#, |wäre|wären|"}
    );

    hintTable[LH_CHILD_FISHING] = HintText::Exclude({
        // obscure text
        Text{"#fishing in youth# bestows",                                  "#pêcher dans sa jeunesse# promet",                                                 "#pescar en la juventud# conduce a",                                            "#pescare in gioventù# procura",                                            "der #Fang der Jugend#, |wäre|wären|"},
    });

    hintTable[LH_ADULT_FISHING] = HintText::Exclude({
        // obscure text
        Text{"#fishing in maturity# bestows",                               "#pêcher dans sa maturité# promet",                                                 "#pescar en la madurez# conduce a",                                             "#pescare dopo la maturità# procura",                                       "der #Fang des Alters#, |wäre|wären|"},
    });

    hintTable[LH_LAB_DIVE] = HintText::Exclude({
        // obscure text
        Text{"a #diving experiment# is rewarded with",                      "l'#expérience de plongée# est récompensée par",                                    "#bucear para un experimento# se premia con",                                   "una #prova di immersione# è ricompensata con",                             "beim #Tauchexperiment#, |wäre|wären|"},
    });

    hintTable[GC_ROLLING_GORON_AS_ADULT] = HintText::Exclude({
        // obscure text
        Text{"#comforting yourself# provides",                              "se #réconforter soi-même# donne",                                                  "#confrontarte a ti mismo# otorga",                                             "#confortare se stessi# procura",                                           "bei einer #goronischen Geschichtsstunde#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#reassuring a young Goron# is rewarded with",                 "#rassurer un jeune Goron# donne",                                                  "#calmar a un joven Goron# otorga",                                             "#calmare un giovane Goron# procura",                                       "der Dank fürs #Beruhigen eines jungen Goronen#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_BOWLING_FIRST_PRIZE] = HintText::Exclude({
        // obscure text
        Text{"the #first explosive prize# is",                              "le #premier prix explosif# est",                                                   "el #primer premio explosivo# se trata de",                                     "il #primo premio esplosivo# è",                                            "der #erste explosive Preis#, |wäre|wären|"},
    });

    hintTable[MARKET_BOMBCHU_BOWLING_SECOND_PRIZE] = HintText::Exclude({
        // obscure text
        Text{"the #second explosive prize# is",                             "le #deuxième prix explosif# est",                                                  "el #segundo premio explosivo# se trata de",                                    "il #secondo premio esplosivo# è",                                          "der #zweite explosive Preis#, |wäre|wären|"},
    });

    hintTable[MARKET_LOST_DOG] = HintText::Exclude({
        // obscure text
        Text{"#puppy lovers# will find",                                    "les #amoureux des chiens# trouveront",                                             "los #amantes caninos# encontrarán",                                            "i #cinofili# riceveranno",                                                 "bei einer #Hundeliebhaberin#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#rescuing Richard the Dog# is rewarded with",                 "#retrouver Kiki le chien# est récompensé par",                                     "#rescatar al perrito Ricardo# conduce a",                                      "#salvare Richard il cane# viene ricompensato con",                         "der Finderlohn des #Hundes Richard#, |wäre|wären|"}
    );

    hintTable[LW_OCARINA_MEMORY_GAME] = HintText::Exclude({
        // obscure text
        Text{"the prize for a #game of Simon Says# is",                     "la #récompense d'une partie de Jacques a dit# est",                                "#repetir ciertas melodías# otorga",                                            "serve #buona memoria# per vincere",                                        "der Preis für eine Runde #Simon Says#, |wäre|wären|"},
        Text{"a #child sing-a-long# holds",                                 "les #jeunes flûtistes# donnent",                                                   "#tocar junto a otros# otorga",                                                 "#imitare melodie# procura",                                                "bei einer #kindlichen Musikprobe#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#playing an Ocarina in Lost Woods# is rewarded with",         "#jouer de l'Ocarina dans les Bois Perdus# donne",                                  "#tocar la ocarina en el Bosque Perdido# otorga",                               "#suonare l'ocarina nel bosco perduto# procura",                            "die Belohnung, fürs #Spielen der Okarina in den verlorenen Wäldern#, |wäre|wären|"}
    );

    hintTable[KAK_10_GOLD_SKULLTULA_REWARD] = HintText::Exclude({
        // obscure text
        Text{"#10 bug badges# rewards",                                     "#10 Écussons# donnent",                                                            "#10 medallas de insectos# otorgan",                                            "#10 spille d'insetto# sono premiate con",                                  "die Entschädigung für #10 Insekten-Abzeichen#, |wäre|wären|"},
        Text{"#10 spider souls# yields",                                    "#10 Âmes# donnent",                                                                "#10 almas de araña# otorgan",                                                  "#10 anime di ragno# forniscono",                                           "der Lohn für #10 Spinnenseelen#, |wäre|wären|"},
        Text{"#10 auriferous arachnids# lead to",                           "#10 Arachnides Aurifères# donnent",                                                "#10 arácnidos auríferos# otorgan",                                             "#10 artropodi aurei# forniscono",                                          "die Bezahlung für #10 goldhaltige Arachniden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"slaying #10 Gold Skulltulas# reveals",                        "détruire #10 Skulltulas d'Or# donne",                                              "#exterminar 10 skulltulas doradas# revela",                                    "eliminare #10 Aracnule d'oro# rivela",                                     "die Belohnung, fürs Zerstören von #10 goldenen Skulltulas#, |wäre|wären|"}
    );

    hintTable[KAK_MAN_ON_ROOF] = HintText::Exclude({
        // obscure text
        Text{"a #rooftop wanderer# holds",                                  "une #rencontre sur un toit# donne",                                                "#alguien sobre un tejado# otorga",                                             "#un tizio su un tetto# possiede",                                          "bei einem #Dachgespräch#, |wäre|wären|"},
    });

    hintTable[ZR_MAGIC_BEAN_SALESMAN] = HintText::Exclude({
        // obscure text
        Text{"a seller of #colorful crops# has",                            "un #marchand de légumes# vend",                                                    "el vendedor de un #colorido cultivo# ofrece",                                  "un #mercante di ortaggi colorati# vende",                                  "die Ware eines #Verkäufers bunter Pflanzen#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #bean seller# offers",                                      "le #marchand de haricots magiques# vend",                                          "el #vendedor de judías# ofrece",                                               "il #venditore di fagioli# ha finito i fagioli, quindi ora vende",          "die Ware des #Erbsenverkäufers#, |wäre|wären|"}
    );

    hintTable[ZR_FROGS_IN_THE_RAIN] = HintText::Exclude({
        // obscure text
        Text{"#frogs in a storm# gift",                                     "les #grenouilles sous l'orage# donnent",                                           "las #ranas bajo la tormenta# regalan",                                         "delle #rane in una tempesta# regalano",                                    "bei #stürmischen Fröschen#, |wäre|wären|"},
    });

    hintTable[ZR_FROGS_ZELDAS_LULLABY] = HintText::Exclude({
        // obscure text
        Text{"#sleepy frogs# gift",                                         "#les grenouilles somnolentes# donnent",                                            "las #ranas somnolientas# regalan",                                             "delle #rane assonnate# regalano",                                          "bei #schläfrigen Fröschen#, |wäre|wären|"},
        Text{"#the Froggish Tenor in the back-left# gifts",                 "#le Ténor Grenouillesque au fond à gauche# donne",                                 "el #Sapo Tenore al fondo, a la izquierda#, regala",                            "il #musico batrace in fondo a sinistra# regala",                           "beim #quakenden Tenor hinten-links#, |wäre|wären|"},
      }, {
    },
        // clear text
        Text{"after hearing #Zelda's Lullaby, the frogs# gift",             "à l'écoute de #la Berceuse de Zelda, les Grenouilles# donnent",                    "después de escuchar #la Nana de Zelda, las ranas# regalan",                    "dopo aver ascoltato #la Ninna nanna di Zelda, le rane# regalano",          "bei #Fröschen die Zeldas Wiegenlied gehört# haben, |wäre|wären|"}
    );

    hintTable[ZR_FROGS_EPONAS_SONG] = HintText::Exclude({
        // obscure text
        Text{"#equine frogs# gift",                                         "#les grenouilles équestres# donnent",                                              "las #ranas equinas# regalan",                                                  "delle #rane equine# regalano",                                             "bei #pferdeartigen Fröschen#, |wäre|wären|"},
        Text{"#the Froggish Tenor in the back-right# gifts",                "#le Ténor Grenouillesque au fond à droite# donne",                                 "el #Sapo Tenore al fondo, a la derecha#, regala",                              "il #musico batrace in fondo a destra# regala",                             "beim #quakenden Tenor hinten-rechts#, |wäre|wären|"},
      }, {
    },
        // clear text
        Text{"after hearing #Epona's Song, the frogs# gift",                "à l'écoute du #Chant d'Epona, les Grenouilles# donnent",                           "después de escuchar #la Canción de Epona, las ranas# regalan",                 "dopo aver ascoltato #la Canzone di Epona, le rane# regalano",              "bei #Fröschen die Eponas Lied gehört# haben, |wäre|wären|"}
    );

    hintTable[ZR_FROGS_SARIAS_SONG] = HintText::Exclude({
        // obscure text
        Text{"#sylvan frogs# gift",                                         "#les grenouilles sylvestres# donnent",                                             "las #ranas silvestres# regalan",                                               "delle #rane silvestri# regalano",                                          "bei #sylvanen Fröschen#, |wäre|wären|"},
        Text{"#the Froggish Tenor in the center# gifts",                    "#le Ténor Grenouillesque dans le centre# donne",                                   "el #Sapo Tenore en el centro# regala",                                         "il #musico batrace al centro# regala",                                     "beim #quakenden Tenor in der Mitte#, |wäre|wären|"},
      }, {
    },
        // clear text
        Text{"after hearing #Saria's Song, the frogs# gift",                "à l'écoute du #Chant de Saria, les Grenouilles# donnent",                          "después de escuchar #la Canción de Saria, las ranas# regalan",                 "dopo aver ascoltato #la Canzone di Saria, le rane# regalano",              "bei #Fröschen die Salias Lied gehört# haben, |wäre|wären|"}
    );

    hintTable[ZR_FROGS_SUNS_SONG] = HintText::Exclude({
        // obscure text
        Text{"#enlightened frogs# gift",                                    "#les grenouilles éclairées# donnent",                                              "las #ranas alumbradas# regalan",                                               "delle #rane illuminate# regalano",                                         "bei #erleuchteten Fröschen#, |wäre|wären|"},
        Text{"#the Froggish Tenor in the front-left# gifts",                "#le Ténor Grenouillesque à l'avant gauche# donne",                                 "el #Sapo Tenore al frente, a la izquierda#, regala",                           "il #musico batrace davanti a sinistra# regala",                            "beim #quakenden Tenor vorne-links#, |wäre|wären|"},
      }, {
    },
        // clear text
        Text{"after hearing #the Sun's Song, the frogs# gift",              "à l'écoute du #Chant du Soleil, les Grenouilles# donnent",                         "después de escuchar #la Canción del Sol, las ranas# regalan",                  "dopo aver ascoltato #il Canto del sole, le rane# regalano",                "bei #Fröschen die die Hymne der Sonne gehört# haben, |wäre|wären|"}
    );

    hintTable[ZR_FROGS_SONG_OF_TIME] = HintText::Exclude({
        // obscure text
        Text{"#time-traveling frogs# gift",                                 "#les grenouilles voyageuses dans le temps# donnent",                               "las #ranas viajeras del tiempo# regalan",                                      "delle #rane che viaggiano nel tempo# regalano",                            "bei #zeitreisenden Fröschen#, |wäre|wären|"},
        Text{"#the Froggish Tenor in the front-right# gifts",               "#le Ténor Grenouillesque à l'avant droite# donne",                                 "el #Sapo Tenore al frente, a la derecha#, regala",                             "il #musico batrace davanti a destra# regala",                              "beim #quakenden Tenor vorne-rechts#, |wäre|wären|"},
      }, {
    },
        // clear text
        Text{"after hearing #the Song of Time, the frogs# gift",            "à l'écoute du #Chant du Temps, les Grenouilles# donnent",                          "después de escuchar #la Canción del tiempo, las ranas# regalan",               "dopo aver ascoltato #la Canzone del tempo, le rane# regalano",             "bei #Fröschen die die Hymne der Zeit gehört# haben, |wäre|wären|"}
    );

    hintTable[GF_HBA_1000_POINTS] = HintText::Exclude({
        // obscure text
        Text{"scoring 1000 in #horseback archery# grants",                  "obtenir 1000 points à l'#Archerie Équestre# donne",                                "conseguir 1000 puntos en el #tiro con arco a caballo# premia",                 "se totalizzi almeno 1000 punti al #tiro con l'arco a cavallo# riceverai",  "1.000 Punkte beim #berittenen Bogenschießen#, |wäre|wären|"},
    });

    hintTable[MARKET_SHOOTING_GALLERY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"#shooting in youth# grants",                                  "#faire du tir dans sa jeunesse# donne",                                            "#disparar en la juventud# otorga",                                             "#sparare ai soldi# in gioventù procura",                                   "bei einer #Schießübung der Jugend#, |wäre|wären|"},
    });

    hintTable[KAK_SHOOTING_GALLERY_REWARD] = HintText::Exclude({
        // obscure text
        Text{"#shooting in maturity# grants",                               "#faire du tir dans sa maturité# donne",                                            "#disparar en la madurez# otorga",                                              "#sparare ai soldi# da adulti procura",                                     "bei einer #Schießübung des Alters#, |wäre|wären|"},
    });

    hintTable[LW_TARGET_IN_WOODS] = HintText::Exclude({
        // obscure text
        Text{"shooting a #target in the woods# grants",                     "#tirer une cible dans les bois# donne",                                            "disparar a un #blanco forestal# brinda",                                       "#centrare un ceppo# ti fa sputare in faccia",                              "bei einer #Schießübung des Waldes#, |wäre|wären|"},
    });

    hintTable[KAK_ANJU_AS_ADULT] = HintText::Exclude({
        // obscure text
        Text{"a #chicken caretaker# offers adults",                         "devenir un #éleveur de Cocottes# donne",                                           "una #cuidadora de emplumados# le ofrece a los mayores",                        "un'#allevatrice di polli# affida agli adulti",                             "die Belohnung für #Hühnersitter#, |wäre|wären|"},
    });

    hintTable[LLR_TALONS_CHICKENS] = HintText::Exclude({
        // obscure text
        Text{"#finding Super Cuccos# is rewarded with",                     "#trouver des Super Cocottes# donne",                                               "#hallar los supercucos# conduce a",                                            "il premio per chi trova #i super coccò# è",                                "bei gefundenen #Super-Hühnern#, |wäre|wären|"},
    });

    hintTable[GC_ROLLING_GORON_AS_CHILD] = HintText::Exclude({
        // obscure text
        Text{"the prize offered by a #large rolling Goron# is",             "la récompense d'un #gros Goron qui roule# est",                                    "un #gran Goron rodante# otorga",                                               "il premio offerto da un #grosso Goron rotolante# è",                       "bei einem #großen, rollenden Goronen#, |wäre|wären|"},
    });

    hintTable[LH_UNDERWATER_ITEM] = HintText::Exclude({
        // obscure text
        Text{"the #sunken treasure in a lake# is",                          "le #trésor au fond du lac# est",                                                   "el #tesoro hundido del lago# se trata de",                                     "il #tesoro sommerso nel lago# è",                                          "der #versunkene Schatz eines Sees#, |wäre|wären|"},
    });

    hintTable[GF_GERUDO_TOKEN] = HintText::Exclude({
        // obscure text
        Text{"#rescuing captured carpenters# is rewarded with",             "#secourir les charpentiers capturés# est récompensé par",                          "#rescatar los apresados carpinteros# se premia con",                           "chi salverà i #carpentieri prigionieri# riceverà",                         "bei #geretteten Zimmerleuten#, |wäre|wären|"},
    });

    hintTable[WASTELAND_BOMBCHU_SALESMAN] = HintText::Exclude({
        // obscure text
        Text{"a #carpet guru# sells",                                       "#un marchand dans le désert# vend",                                                "el #genio de una alfombra# vende",                                             "il #mercante volante# vende",                                              "die Ware des #fliegenden Einsiedlers#, |wäre|wären|"},
    });

    hintTable[GC_MEDIGORON] = HintText::Exclude({
        //obscure text
        Text{"#Medigoron# sells",                                           "#Medigoron# vend",                                                                 "#Medigoron# vende",                                                            "#Medigoron# vende",                                                        "#Medigoron#, |wäre|wären|"},
    });

    hintTable[KAK_GRANNYS_SHOP] = HintText::Exclude({
        // obscure text
        Text{"the #potion shop lady# sells",                                "la #vieille apothicaire# vend",                                                    "la #señora de la tienda de pociones# vende",                                   "la #vecchietta del negozio di pozioni# vende",                             "#Omas Allerlei#, |wäre|wären|"},
    });

    hintTable[KAK_IMPAS_HOUSE_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"#imprisoned in a house# lies",                                "#emprisonné dans une maison# se trouve",                                           "#en una casa entre rejas# yace",                                               "in una #cella casalinga# puoi trovare",                                    "#in einem Hause eingesperrt#, |wäre|wären|"},
    });

    hintTable[HF_TEKTITE_GROTTO_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"#deep underwater in a hole# is",                              "#dans les profondeurs d'une grotte inondée# se trouve",                            "#en lo hondo bajo un hoyo# yace",                                              "in una #pozza sotterranea# puoi trovare",                                  "tief #versunken in einem Erdloch#, |wäre|wären|"},
    });

    hintTable[KAK_WINDMILL_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"on a #windmill ledge# lies",                                  "#haut perché dans le moulin# se trouve",                                           "al #borde de un molino# yace",                                                 "#nel mulino, in alto#, puoi trovare",                                      "auf einem #Vorsprung einer Windmühle#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_DAMPE_RACE_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"#racing a ghost# leads to",                                   "faire la course contre un #fantôme rapide# donne",                                 "#perseguir a un fantasma# conduce a",                                          "#gareggiare contro un fantasma# fa vincere",                               "bei einem #geisterhaften Rennen#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#dead Dampe's second# prize is",                              "la #deuxième course d'Igor# donne",                                                "el segundo premio de #la carrera de Dampé# se trata de",                       "la seconda ricompensa del #fantasma di Danpei# è",                         "#Boris' zweiter Preis#, |wäre|wären|"}
    );

    hintTable[LLR_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"in a #ranch silo# lies",                                      "#dans l'entrepôt de la ferme# se cache",                                           "en un #granero rupestre# yace",                                                "nel #granaio della fattoria# puoi trovare",                                "im #Silo der Farm#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"a #crate in a graveyard# hides",                              "la #caisse dans le cimetière# contient",                                           "bajo la #caja de un cementerio# yace",                                         "una #cassa nel cimitero# contiene",                                        "in einer #Kiste des Friedhofs#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_DAMPE_GRAVEDIGGING_TOUR] = HintText::Exclude({
        // obscure text
        Text{"a #gravekeeper digs up#",                                     "le #jeu du fossoyeur# cache",                                                      "cierto #sepultero desentierra#",                                               "un #becchino dissotterra#",                                                "#Boris' Ausgrabung#, |wäre|wären|"},
    });

    hintTable[ZR_NEAR_OPEN_GROTTO_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"on top of a #pillar in a river# lies",                        "#sur un pilier au dessus du fleuve# attend",                                       "en lo alto del #pilar de un río# yace",                                        "in cima a una #colonna sul fiume# puoi trovare",                           "auf einer #Säule eines Flusses#, |wäre|wären|"},
    });

    hintTable[ZR_NEAR_DOMAIN_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"on a #river ledge by a waterfall# lies",                      "#sur la falaise au dessus du fleuve# attend",                                      "al borde de #la entrada a una cascada# yace",                                  "su una sporgenza #vicino alle cascate insonni# puoi trovare",              "auf einem #Vorsprung nahe eines Wasserfalls#, |wäre|wären|"},
    });

    hintTable[LH_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"high on a #lab rooftop# one can find",                        "au-dessus du #toit d'un laboratoire# on peut trouver",                             "en lo #alto de un laboratorio# yace",                                          "sopra il #tetto di un laboratorio# qualcuno ha messo",                     "auf dem #Dach eines Labors#, |wäre|wären|"},
    });

    hintTable[ZF_ICEBERG_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"#floating on ice# is",                                        "#flottant sur la glace# se trouve",                                                "#flotando sobre hielo# yace",                                                  "#saltare fra gli iceberg# porta verso",                                    "auf einer #Eisscholle#, |wäre|wären|"},
    });

    hintTable[GV_WATERFALL_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"behind a #desert waterfall# is",                              "derrière la #cascade dans la vallée# se cache",                                    "tras una #desierta cascada# yace",                                             "#dietro una cascata# c'è una nicchia con",                                 "hinter einem #Wasserfall des Tals#, |wäre|wären|"},
    });

    hintTable[GV_CRATE_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"a #crate in a valley# hides",                                 "une #caisse dans la vallée# contient",                                             "bajo la #caja de un valle# yace",                                              "una #cassa nella valle# contiene",                                         "in einer #Kiste des Tals#, |wäre|wären|"},
    });

    hintTable[COLOSSUS_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"on top of an #arch of stone# lies",                           "une #arche de pierre# est la demeure de",                                          "en lo alto de un #arco de piedra# yace",                                       "in cima a #un arco di pietra# puoi trovare",                               "auf einem #steinernen Torbogen#, |wäre|wären|"},
    });

    hintTable[DMT_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"above a #mountain cavern entrance# is",                       "#au-dessus de la caverne montagneuse# se trouve",                                  "en lo alto de la #entrada de una cueva en la montaña# yace",                   "sopra #l'ingresso di una caverna montana# puoi trovare",                   "über einem #Höhleneingang des Berges#, |wäre|wären|"},
    });

    hintTable[DMC_WALL_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"nestled in a #volcanic wall# is",                             "dans une #alcôve volcanique# se trouve",                                           "entre unas #murallas volcánicas# yace",                                        "in una #nicchia vulcanica# puoi trovare",                                  "in einer #vulkanischen Wand#, |wäre|wären|"},
    });

    hintTable[DMC_VOLCANO_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"obscured by #volcanic ash# is",                               "sous un #panache de cendres volcaniques# gît",                                     "bajo la #ceniza volcánica# yace",                                              "il #fumo di un vulcano# cela",                                             "auf einem #dampfenden Vulkan#, |wäre|wären|"},
    });

    hintTable[GF_NORTH_F1_CARPENTER] = HintText::Exclude({
        // obscure text
        Text{"#defeating Gerudo guards# reveals",                           "#vaincre des gardes Gerudo# révèle",                                               "#derrotar a las guardas Gerudo# revela",                                       "una #guardia Gerudo# possiede",                                            "nahe einer #Gerudo-Wächterin#, |wäre|wären|"},
    });

    hintTable[GF_NORTH_F2_CARPENTER] = HintText::Exclude({
        // obscure text
        Text{"#defeating Gerudo guards# reveals",                           "#vaincre des gardes Gerudo# révèle",                                               "#derrotar a las guardas Gerudo# revela",                                       "una #guardia Gerudo# possiede",                                            "nahe einer #Gerudo-Wächterin#, |wäre|wären|"},
    });

    hintTable[GF_SOUTH_F1_CARPENTER] = HintText::Exclude({
        // obscure text
        Text{"#defeating Gerudo guards# reveals",                           "#vaincre des gardes Gerudo# révèle",                                               "#derrotar a las guardas Gerudo# revela",                                       "una #guardia Gerudo# possiede",                                            "nahe einer #Gerudo-Wächterin#, |wäre|wären|"},
    });

    hintTable[GF_SOUTH_F2_CARPENTER] = HintText::Exclude({
        // obscure text
        Text{"#defeating Gerudo guards# reveals",                           "#vaincre des gardes Gerudo# révèle",                                               "#derrotar a las guardas Gerudo# revela",                                       "una #guardia Gerudo# possiede",                                            "nahe einer #Gerudo-Wächterin#, |wäre|wären|"},
    });


    hintTable[HF_GS_NEAR_KAK_GROTTO] = HintText::Exclude({
        // obscure text
        Text{"a #spider-guarded spider in a hole# hoards",                  "une #Skulltula dans un trou d'arachnides# a",                                      "una #Skulltula custodiada por otra# de un hoyo otorga",                        "in una grotta un #ragno protegge un'altro ragno# con",                     "in einem Erdloch mit #zwei Spinnen#, |wäre|wären|"},
    });


    hintTable[LLR_GS_BACK_WALL] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a ranch# holding",                 "une #nuit au ranch# révèle une Skulltula avec",                                    "la noche revela una #Skulltula del rancho# que otorga",                        "#nella fattoria di notte# esce un ragno con",                              "in einer nachtaktiven #Spinne einer Farm#, |wäre|wären|"},
    });

    hintTable[LLR_GS_RAIN_SHED] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a ranch# holding",                 "une #nuit au ranch# révèle une Skulltula avec",                                    "la noche revela una #Skulltula del rancho# que otorga",                        "#nella fattoria di notte# esce un ragno con",                              "in einer nachtaktiven #Spinne einer Farm#, |wäre|wären|"},
    });

    hintTable[LLR_GS_HOUSE_WINDOW] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a ranch# holding",                 "une #nuit au ranch# révèle une Skulltula avec",                                    "la noche revela una #Skulltula del rancho# que otorga",                        "#nella fattoria di notte# esce un ragno con",                              "in einer nachtaktiven #Spinne einer Farm#, |wäre|wären|"},
    });

    hintTable[LLR_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"a spider hiding in a #ranch tree# holds",                     "une Skulltula cachée dans un #arbre au ranch# contient",                           "una Skulltula escondida en el #árbol de un rancho# otorga",                    "#su un albero nella fattoria# si nasconde un ragno con",                   "in der Spinne im #Baum einer Farm#, |wäre|wären|"},
    });


    hintTable[KF_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried in a forest# holds",                         "une #Skulltula enterrée dans la forêt# a",                                         "una #Skulltula enterrada en un bosque# otorga",                                "un #ragno sepolto nella foresta# nasconde",                                "in einer, #im Wald vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[KF_GS_KNOW_IT_ALL_HOUSE] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a forest# holding",    "une nuit dans le passé révèle une #Skulltula dans la forêt# avec",                 "la noche revela en el pasado una #Skulltula del bosque# que otorga",           "un ragno #dietro una casa di saccenti# ha",                                "in einer nachtaktiven #Spinne eines Waldes#, |wäre|wären|"},
    });

    hintTable[KF_GS_HOUSE_OF_TWINS] = HintText::Exclude({
        // obscure text
        Text{"night in the future reveals a #spider in a forest# holding",  "une nuit dans le futur révèle une #Skulltula dans la forêt# avec",                 "la noche revela en el futuro una #Skulltula del bosque# que otorga",           "un ragno #sopra una casa nella foresta# ha",                               "in einer nachtaktiven #Spinne eines Waldes#, |wäre|wären|"},
    });


    hintTable[LW_GS_BEAN_PATCH_NEAR_BRIDGE] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried deep in a forest maze# holds",               "une #Skulltula enterrée dans le labyrinthe sylvestre# a",                          "una #Skulltula enterrada en un laberinto forestal# otorga",                    "un #ragno sepolto in un dedalo silvestre# ha",                             "in einer, #im Wald vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[LW_GS_BEAN_PATCH_NEAR_THEATER] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried deep in a forest maze# holds",               "une #Skulltula enterrée dans le labyrinthe sylvestre# a",                          "una #Skulltula enterrada en un laberinto forestal# otorga",                    "un #ragno sepolto in un dedalo silvestre# ha",                             "in einer, #im Wald vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[LW_GS_ABOVE_THEATER] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider deep in a forest maze# holding",      "la nuit révèle une #Skulltula haut perchée dans le labyrinthe sylvestre# avec",    "la noche revela una #Skulltula del laberinto forestal# que otorga",            "#in un dedalo silvestre di notte# esce un ragno con",                      "in einer nachtaktiven #Spinne eines Waldes#, |wäre|wären|"},
    });

    hintTable[SFM_GS] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a forest meadow# holding",         "la nuit révèle une #Skulltula dans le sanctuaire sylvestre# avec",                 "la noche revela una #Skulltula de la pradera del bosque# que otorga",          "#in una radura di notte# esce un ragno con",                               "in einer nachtaktiven #Spinne einer Lichtung#, |wäre|wären|"},
    });


    hintTable[OGC_GS] = HintText::Exclude({
        // obscure text
        Text{"a #spider outside a tyrant's tower# holds",                   "une #Skulltula en dehors de la tour d'un tyran# a",                                "una #Skulltula a las afueras de la torre de un tirano# otorga",                "un ragno #vicino alla torre di un tiranno# ha",                            "in einer #Spinne am Turm des Tyrannen#, |wäre|wären|"},
    });

    hintTable[HC_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"a spider hiding in a #tree outside of a castle# holds",       "une Skulltula cachée dans un #arbre au château# contient",                         "una Skulltula escondida en el #árbol de las afueras de un castillo# otorga",   "un #ragno arboreo presso un castello# nasconde",                           "in der Spinne, im #Baum eines Schlosses#, |wäre|wären|"},
    });

    hintTable[MARKET_GS_GUARD_HOUSE] = HintText::Exclude({
        // obscure text
        Text{"a #spider in a guarded crate# holds",                         "une #Skulltula dans une caisse sous protection# a",                                "una #Skulltula bajo una custodiada caja# otorga",                              "un #ragno sotto una cassa custodita# ha",                                  "in der #Spinne einer streng bewachten Kiste#, |wäre|wären|"},
    });


    hintTable[DMC_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried in a volcano# holds",                        "une #Skulltula enterrée dans un volcan# a",                                        "una #Skulltula enterrada en un volcán# otorga",                                "un #ragno sepolto in un vulcano# ha",                                      "in einer, #im Krater vergrabenen Spinne#, |wäre|wären|"},
    });


    hintTable[DMT_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried outside a cavern# holds",                    "une #Skulltula enterrée près d'une caverne# a",                                    "una #Skulltula enterrada a la entrada de una cueva# otorga",                   "un #ragno sepolto all'ingresso di una caverna# ha",                        "in einer, #am Gebirgspfad vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[DMT_GS_NEAR_KAK] = HintText::Exclude({
        // obscure text
        Text{"a #spider hidden in a mountain nook# holds",                  "une #Skulltula cachée dans le flanc d'une montagne# a",                            "una #Skulltula oculta en el rincón de la montaña# otorga",                     "un #ragno in una nicchia montana# si nasconde con",                        "in einer #Spinne einer Bergnische#, |wäre|wären|"},
    });

    hintTable[DMT_GS_ABOVE_DODONGOS_CAVERN] = HintText::Exclude({
        // obscure text
        Text{"the hammer reveals a #spider on a mountain# holding",         "le marteau révèle une #Skulltula sur une montagne# avec",                          "el martillo revela #una Skulltula de la montaña# que otorga",                  "il martello rivela un #ragno in montagna# con",                            "in einer, hinter #braunen Felsen# krabbelnden Spinne, |wäre|wären|"},
    });

    hintTable[DMT_GS_FALLING_ROCKS_PATH] = HintText::Exclude({
        // obscure text
        Text{"the hammer reveals a #spider on a mountain# holding",         "le marteau révèle une #Skulltula sur une montagne# avec",                          "el martillo revela #una Skulltula de la montaña# que otorga",                  "il martello rivela un #ragno in montagna# con",                            "in einer, hinter #braunen Felsen# krabbelnden Spinne, |wäre|wären|"},
    });


    hintTable[GC_GS_CENTER_PLATFORM] = HintText::Exclude({
        // obscure text
        Text{"a #suspended spider# in Goron City holds",                    "une #Skulltula perchée dans le Village Goron# a",                                  "una #Skulltula suspendida# en la Ciudad Goron otorga",                         "un #ragno sospeso# nella città dei Goron ha",                              "in der #einsamen Spinne# Goronias, |wäre|wären|"},
    });

    hintTable[GC_GS_BOULDER_MAZE] = HintText::Exclude({
        // obscure text
        Text{"a spider in a #Goron City crate# holds",                      "une #Skulltula dans une caisse du Village Goron# a",                               "una #Skulltula bajo una caja# de la Ciudad Goron otorga",                      "in una #cassa nella città dei Goron# si nasconde un ragno con",            "in der Spinne einer #Kiste Goronias#, |wäre|wären|"},
    });


    hintTable[KAK_GS_HOUSE_UNDER_CONSTRUCTION] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a town# holding",      "une nuit dans le passé révèle une #Skulltula dans un village# avec",               "la noche del pasado revela una #Skulltula del pueblo# que otorga",             "la notte nel passato rivela un #ragno in un villaggio# con",               "in einer nachtaktiven #Spinne eines Dorfes#, |wäre|wären|"},
    });

    hintTable[KAK_GS_SKULLTULA_HOUSE] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a town# holding",      "une nuit dans le passé révèle une #Skulltula dans un village# avec",               "la noche del pasado revela una #Skulltula del pueblo# que otorga",             "la notte nel passato rivela un #ragno in un villaggio# con",               "in einer nachtaktiven #Spinne eines Dorfes#, |wäre|wären|"},
    });

    hintTable[KAK_GS_GUARDS_HOUSE] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a town# holding",      "une nuit dans le passé révèle une #Skulltula dans un village# avec",               "la noche del pasado revela una #Skulltula del pueblo# que otorga",             "la notte nel passato rivela un #ragno in un villaggio# con",               "in einer nachtaktiven #Spinne eines Dorfes#, |wäre|wären|"},
    });

    hintTable[KAK_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a town# holding",      "une nuit dans le passé révèle une #Skulltula dans un village# avec",               "la noche del pasado revela una #Skulltula del pueblo# que otorga",             "la notte nel passato rivela un #ragno in un villaggio# con",               "in einer nachtaktiven #Spinne eines Dorfes#, |wäre|wären|"},
    });

    hintTable[KAK_GS_WATCHTOWER] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a town# holding",      "une nuit dans le passé révèle une #Skulltula dans un village# avec",               "la noche del pasado revela una #Skulltula del pueblo# que otorga",             "la notte nel passato rivela un #ragno in un villaggio# con",               "in einer nachtaktiven #Spinne eines Dorfes#, |wäre|wären|"},
    });

    hintTable[KAK_GS_ABOVE_IMPAS_HOUSE] = HintText::Exclude({
        // obscure text
        Text{"night in the future reveals a #spider in a town# holding",    "une nuit dans le futur révèle une #Skulltula dans un village# avec",               "la noche del futuro revela una #Skulltula del pueblo# que otorga",             "la notte nel futuro rivela un #ragno in un villaggio# con",                "in einer nachtaktiven #Spinne eines Dorfes#, |wäre|wären|"},
    });


    hintTable[GRAVEYARD_GS_WALL] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a graveyard# holding",             "la nuit révèle une #SKulltula dans un cimetière# avec",                            "la noche revela una #Skulltula del cementerio# que otorga",                    "di notte appare un #ragno nel cimitero# con",                              "in einer nachtaktiven #Spinne eines Friedhofs#, |wäre|wären|"},
    });

    hintTable[GRAVEYARD_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried in a graveyard# holds",                      "une #Skulltula enterrée dans un cimetière# a",                                     "una #Skulltula enterrada en el cementerio# otorga",                            "un #ragno sepolto nel cimitero# ha",                                       "in einer, #am Friedhof vergrabenen Spinne#, |wäre|wären|"},
    });


    hintTable[ZR_GS_LADDER] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a river# holding",     "une nuit dans le passé révèle une #Skulltula le long d'un fleuve# avec",           "la noche del pasado revela una #Skulltula del río# que otorga",                "di notte nel passato appare un #ragno nel fiume# con",                     "in einer nachtaktiven #Spinne eines Flusses#, |wäre|wären|"},
    });

    hintTable[ZR_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"a spider hiding in a #tree by a river# holds",                "une Skulltula cachée dans un #arbre le long d'un fleuve# contient",                "una Skulltula escondida en el #árbol de un río# otorga",                       "un ragno in un #albero presso il fiume# ha",                               "in der Spinne im #Baum nahe eines Flusses#, |wäre|wären|"},
    });

    hintTable[ZR_GS_ABOVE_BRIDGE] = HintText::Exclude({
        // obscure text
        Text{"night in the future reveals a #spider in a river# holding",   "une nuit dans le futur révèle une #Skulltula le long d'un fleuve# avec",           "la noche del futuro revela una #Skulltula del río# que otorga",                "di notte nel futuro appare un #ragno nel fiume# con",                      "in einer nachtaktiven #Spinne eines Flusses#, |wäre|wären|"},
    });

    hintTable[ZR_GS_NEAR_RAISED_GROTTOS] = HintText::Exclude({
        // obscure text
        Text{"night in the future reveals a #spider in a river# holding",   "une nuit dans le futur révèle une #Skulltula le long d'un fleuve# avec",           "la noche del futuro revela una #Skulltula del río# que otorga",                "di notte nel futuro appare un #ragno nel fiume# con",                      "in einer nachtaktiven #Spinne eines Flusses#, |wäre|wären|"},
    });


    hintTable[ZD_GS_FROZEN_WATERFALL] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider by a frozen waterfall# holding",      "la nuit révèle une #Skulltula près d'une cascade gelée# avec",                     "la noche revela una #Skulltula junto a una congelada cascada# que otorga",     "di notte appare un #ragno presso una cascata congelata# con",              "in einer nachtaktiven #Spinne eines gefrorenen Wasserfalls#, |wäre|wären|"},
    });

    hintTable[ZF_GS_ABOVE_THE_LOG] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider near a deity# holding",               "la nuit révèle une #Skulltula près d'un gardien# avec",                            "la noche revela una #Skulltula junto a cierta deidad# que otorga",             "di notte appare un #ragno presso una divinità# con",                       "in einer nachtaktiven #Spinne nahe einer Gottheit#, |wäre|wären|"},
    });

    hintTable[ZF_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"a spider hiding in a #tree near a deity# holds",              "une Skulltula cachée dans un #arbre près d'un gardien# contient",                  "una Skulltula escondida en el #árbol junto a cierta deidad# otorga",           "un ragno su un #albero presso una divinità# ha",                           "in der Spinne am #Baum nahe einer Gottheit#, |wäre|wären|"},
    });


    hintTable[LH_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried by a lake# holds",                           "une #Skulltula enterrée près d'un lac# a",                                         "una #Skulltula enterrada junto a un lago# otorga",                             "un #ragno sepolto presso un lago# ha",                                     "in einer, #am See vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[LH_GS_SMALL_ISLAND] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider by a lake# holding",                  "la nuit révèle une #Skulltula près d'un lac# avec",                                "la noche revela una #Skulltula junto a un lago# que otorga",                   "di notte appare un #ragno lacustre# che ha",                               "in einer nachtaktiven #Spinne eines Sees#, |wäre|wären|"},
    });

    hintTable[LH_GS_LAB_WALL] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider by a lake# holding",                  "la nuit révèle une #Skulltula près d'un lac# avec",                                "la noche revela una #Skulltula junto a un lago# que otorga",                   "di notte appare un #ragno lacustre# che ha",                               "in einer nachtaktiven #Spinne eines Sees#, |wäre|wären|"},
    });

    hintTable[LH_GS_LAB_CRATE] = HintText::Exclude({
        // obscure text
        Text{"a spider deed underwater in a #lab crate# holds",             "une Skulltula immergée dans une #caisse dans un laboratoire# contient",            "una #Skulltula bajo la sumergida caja de un laboratorio# otorga",              "un #ragno subacqueo in un laboratorio# ha",                                "in der Spinne einer #versunkenen Kiste#, |wäre|wären|"},
    });

    hintTable[LH_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider by a lake high in a tree# holding",   "la nuit révèle une #Skulltula haut perchée dans un arbre du lac# avec",            "la noche revela #una Skulltula del lago sobre un árbol# que otorga",           "di notte appare un #ragno arboreo lacustre# che ha",                       "in einer nachtaktiven #Spinne eines Sees#, |wäre|wären|"},
    });


    hintTable[GV_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried in a valley# holds",                         "une #Skulltula enterré dans une vallée# a",                                        "una #Skulltula enterrada en un valle# otorga",                                 "un #ragno sepolto nella valle# nasconde",                                  "in einer, #im Tal vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[GV_GS_SMALL_BRIDGE] = HintText::Exclude({
        // obscure text
        Text{"night in the past reveals a #spider in a valley# holding",    "une nuit dans le passé révèle une #Skulltula dans une vallée# avec",               "la noche del pasado revela una #Skulltula del valle# que otorga",              "di notte nel passato appare un #ragno in una valle# con",                  "in einer nachtaktiven #Spinne des Tals#, |wäre|wären|"},
    });

    hintTable[GV_GS_PILLAR] = HintText::Exclude({
        // obscure text
        Text{"night in the future reveals a #spider in a valley# holding",  "une nuit dans le futur révèle une #Skulltula dans une vallée# avec",               "la noche del futuro revela una #Skulltula del valle# que otorga",              "di notte nel futuro appare un #ragno in una valle# con",                   "in einer nachtaktiven #Spinne des Tals#, |wäre|wären|"},
    });

    hintTable[GV_GS_BEHIND_TENT] = HintText::Exclude({
        // obscure text
        Text{"night in the future reveals a #spider in a valley# holding",  "une nuit dans le futur révèle une #Skulltula dans une vallée# avec",               "la noche del futuro revela una #Skulltula del valle# que otorga",              "di notte nel futuro appare un #ragno in una valle# con",                   "in einer nachtaktiven #Spinne des Tals#, |wäre|wären|"},
    });


    hintTable[GF_GS_ARCHERY_RANGE] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a fortress# holding",              "la nuit révèle une #Skulltula dans une forteresse# avec",                          "la noche revela una #Skulltula de una fortaleza# que otorga",                  "di notte appare un #ragno in una fortezza# con",                           "in einer nachtaktiven #Spinne einer Festung#, |wäre|wären|"},
    });

    hintTable[GF_GS_TOP_FLOOR] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider in a fortress# holding",              "la nuit révèle une #Skulltula dans une forteresse# avec",                          "la noche revela una #Skulltula de una fortaleza# que otorga",                  "di notte appare un #ragno in una fortezza# con",                           "in einer nachtaktiven #Spinne einer Festung#, |wäre|wären|"},
    });


    hintTable[COLOSSUS_GS_BEAN_PATCH] = HintText::Exclude({
        // obscure text
        Text{"a #spider buried in the desert# holds",                       "une #Skulltula enterrée dans le désert# a",                                        "una #Skulltula enterrada en el desierto# otorga",                              "un #ragno sepolto nel deserto# nasconde",                                  "in einer, #in der Wüste vergrabenen Spinne#, |wäre|wären|"},
    });

    hintTable[COLOSSUS_GS_HILL] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider deep in the desert# holding",         "la nuit révèle une #Skulltula au fond du désert# avec",                            "la noche revela una #Skulltula en las profundidades del desierto# que otorga", "di notte appare un #ragno nel cuore del deserto# con",                     "in einer nachtaktiven #Spinne der Wüste#, |wäre|wären|"},
    });

    hintTable[COLOSSUS_GS_TREE] = HintText::Exclude({
        // obscure text
        Text{"night reveals a #spider deep in the desert# holding",         "la nuit révèle une #Skulltula au fond du désert# avec",                            "la noche revela una #Skulltula en las profundidades del desierto# que otorga", "di notte appare un #ragno nel cuore del deserto# con",                     "in einer nachtaktiven #Spinne der Wüste#, |wäre|wären|"},
    });


    hintTable[KF_SHOP_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );

    hintTable[KF_SHOP_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );

    hintTable[KF_SHOP_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );

    hintTable[KF_SHOP_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );

    hintTable[KF_SHOP_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );

    hintTable[KF_SHOP_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );

    hintTable[KF_SHOP_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"a #child shopkeeper# sells",                                  "un #très jeune commerçant# vend",                                                  "un #joven dependiente# vende",                                                 "un #commerciante bambino# vende",                                          "die Ware eines #jungen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kokiri Shop# sells",                                     "la #Boutique Kokiri# vend",                                                        "la #tienda kokiri# vende",                                                     "il #negozio dei Kokiri# vende",                                            "die Ware aus dem #Kokiri-Laden#, |wäre|wären|"}
    );


    hintTable[KAK_POTION_SHOP_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_POTION_SHOP_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Potion Shop# offers",                           "l'#Apothicaire du Village Cocorico# vend",                                         "la #tienda de pociones de Kakariko# ofrece",                                   "il #negozio di pozioni di Calbarico# offre",                               "die Ware vom #Magie-Laden von Kakariko#, |wäre|wären|"}
    );


    hintTable[MARKET_BOMBCHU_SHOP_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );

    hintTable[MARKET_BOMBCHU_SHOP_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"a #insomniac merchant# sells",                                "le #marchand insomniaque# vend",                                                   "un #mercader insomne# vende",                                                  "un #commerciante insonne# vende",                                          "die Ware eines #schlaflosen Ladenbesitzers#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Bombchu merchant# sells",                                  "le #marchand de Missiles Teigneux# vend",                                          "un #mercader de bombchus# vende",                                              "un #commerciante di radiomine# vende",                                     "die Ware eines #Krabbelminenhändlers#, |wäre|wären|"}
    );


    hintTable[MARKET_POTION_SHOP_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_POTION_SHOP_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"an #alchemist# offers",                                       "un #alchimiste# vend",                                                             "un #alquimista# ofrece",                                                       "un #alquimista# vende",                                                    "die Ware eines #Alchemisten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #potion seller# offers",                                    "l'#Apothicaire# vend",                                                             "un #vendedor de pociones# ofrece",                                             "un #farmacista# vende",                                                    "die Ware eines #Elixierverkäufers#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Potion Shop# offers",                             "l'Apothicaire de la Place du Marché# vend",                                        "la #tienda de pociones del mercado# ofrece",                                   "il #negozio di pozioni del mercato# offre",                                "die Ware vom #Magie-Laden des Marktplatzes#, |wäre|wären|"}
    );


    hintTable[MARKET_BAZAAR_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );

    hintTable[MARKET_BAZAAR_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Market Bazaar# offers",                                  "le #Bazar de la Place du Marché# vend",                                            "el #bazar del mercado# ofrece",                                                "il #bazar del mercato# offre",                                             "die Ware des #Basars des Marktplatzes#, |wäre|wären|"}
    );


    hintTable[KAK_BAZAAR_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );

    hintTable[KAK_BAZAAR_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"a #soldier's friend# offers",                                 "l'#ami d'un soldat# vend",                                                         "el #amigo de un soldado# ofrece",                                              "l'#amico di un soldato# offre",                                            "die Ware des #Freundes eines Soldaten#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"the #Bazaar# offers",                                         "le #Bazar# vend",                                                                  "el #bazar# ofrece",                                                            "il #bazar# offre",                                                         "die Ware des #Basars#, |wäre|wären|"},
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"the #Kakariko Bazaar# offers",                                "le #bazar du Village de Cocorico# vend",                                           "el #bazar de Kakariko# ofrece",                                                "il #bazar di Calbarico# offre",                                            "die Ware des #Basars von Kakariko#, |wäre|wären|"}
    );


    hintTable[ZD_SHOP_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );

    hintTable[ZD_SHOP_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"a #humid shop# sells",                                        "une #boutique humide# vend",                                                       "una #tienda húmeda# vende",                                                    "un #negozio umido# vende",                                                 "die Ware eines #Feuchtigkeitsgeschäfts#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Zora shopkeeper# sells",                                   "la #Boutique Zora# vend",                                                          "el #dependiente Zora# vende",                                                  "un #commerciante Zora# vende",                                             "die Ware eines #Ladenbesitzers der Zora#, |wäre|wären|"}
    );


    hintTable[GC_SHOP_ITEM_1] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_2] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_3] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_4] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_5] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_6] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_7] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );

    hintTable[GC_SHOP_ITEM_8] = HintText::Exclude({
        // obscure text
        Text{"a #fiery shop# sells",                                        "une #boutique ardente# vend",                                                      "una #tienda ardiente# vende",                                                  "un #negozio ardente# vende",                                               "die Ware eines #feurigen Ladens#, |wäre|wären|"},
    }, {
        // ambiguous text
        Text{"a #shopkeeper# sells",                                        "un #commerçant# vend",                                                             "un #dependiente# vende",                                                       "un #commerciante# vende",                                                  "die Ware eines #Ladenbesitzers#, |wäre|wären|"},
    },
        // clear text
        Text{"a #Goron shopkeeper# sells",                                  "la #Boutique Goron# vend",                                                         "el #dependiente Goron# vende",                                                 "un #commerciante Goron# vende",                                            "die Ware eines #Ladenbesitzers der Goronen#, |wäre|wären|"}
    );


    hintTable[HF_DEKU_SCRUB_GROTTO] = HintText::Exclude({
        // obscure text
        Text{"a lonely #scrub in a hole# sells",                            "la #Peste Mojo solitaire dans une grotte# vend",                                   "un #singular deku bajo un hoyo# de la llanura vende",                          "un #cespuglio solitario in una grotta# vende",                             "die Ware, des #einsamen Deku-Händlers eines Erdlochs#, |wäre|wären|"},
    });

    hintTable[LLR_DEKU_SCRUB_GROTTO_LEFT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo# du ranch vend",                                           "un #trío de dekus# de una granja venden",                                      "un #trio di cespugli fattori# vende",                                      "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[LLR_DEKU_SCRUB_GROTTO_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo# du ranch vend",                                           "un #trío de dekus# de una granja venden",                                      "un #trio di cespugli fattori# vende",                                      "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[LLR_DEKU_SCRUB_GROTTO_CENTER] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo# du ranch vend",                                           "un #trío de dekus# de una granja venden",                                      "un #trio di cespugli fattori# vende",                                      "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });


    hintTable[LW_DEKU_SCRUB_NEAR_DEKU_THEATER_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"a pair of #scrubs in the woods# sells",                       "le #duo de Pestes Mojo dans les bois# vend",                                       "un par de #dekus del bosque# venden",                                          "un #cespuglio vicino a un teatro# vende",                                  "die Ware, eines #Deku-Händler-Duos der Wälder#, |wäre|wären|"},
    });

    hintTable[LW_DEKU_SCRUB_NEAR_DEKU_THEATER_LEFT] = HintText::Exclude({
        // obscure text
        Text{"a pair of #scrubs in the woods# sells",                       "le #duo de Pestes Mojo dans les bois# vend",                                       "un par de #dekus del bosque# venden",                                          "un #cespuglio vicino a un teatro# vende",                                  "die Ware, eines #Deku-Händler-Duos der Wälder#, |wäre|wären|"},
    });

    hintTable[LW_DEKU_SCRUB_NEAR_BRIDGE] = HintText::Exclude({
        // obscure text
        Text{"a #scrub by a bridge# sells",                                 "la #Peste Mojo près d'un pont# vend",                                              "un #deku bajo un puente# del bosque venden",                                   "un #cespuglio vicino a un ponte# vende",                                   "die Ware, des #Deku-Händlers nahe einer Brücke#, |wäre|wären|"},
    });

    hintTable[LW_DEKU_SCRUB_GROTTO_REAR] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo dans une grotte des bois# vend",                            "un #par de dekus subterráneos# del bosque venden",                             "una #coppia di cespugli nascosti nel bosco# vende",                        "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });

    hintTable[LW_DEKU_SCRUB_GROTTO_FRONT] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo dans une grotte des bois# vend",                            "un #par de dekus subterráneos# del bosque venden",                             "una #coppia di cespugli nascosti nel bosco# vende",                        "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });


    hintTable[SFM_DEKU_SCRUB_GROTTO_REAR] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo au cœur du sanctuaire sylvestre# vend",                     "un #par de dekus subterráneos# de la pradera sagrada venden",                  "una #coppia di cespugli nel cuore della foresta# vende",                   "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });

    hintTable[SFM_DEKU_SCRUB_GROTTO_FRONT] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo au cœur du sanctuaire sylvestre# vend",                     "un #par de dekus subterráneos# de la pradera sagrada venden",                  "una #coppia di cespugli nel cuore della foresta# vende",                   "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });


    hintTable[GC_DEKU_SCRUB_GROTTO_LEFT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo dans le Village Goron# vend",                              "un #trío de dekus# de la Ciudad Goron venden",                                 "un #trio di cespugli fra i Goron# vende",                                  "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[GC_DEKU_SCRUB_GROTTO_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo dans le Village Goron# vend",                              "un #trío de dekus# de la Ciudad Goron venden",                                 "un #trio di cespugli fra i Goron# vende",                                  "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[GC_DEKU_SCRUB_GROTTO_CENTER] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo dans le Village Goron# vend",                              "un #trío de dekus# de la Ciudad Goron venden",                                 "un #trio di cespugli fra i Goron# vende",                                  "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });


    hintTable[DMC_DEKU_SCRUB_GROTTO_LEFT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo dans le volcan# vend",                                     "un #trío de dekus# del volcán venden",                                         "un #trio di cespugli sotto un macigno# vende",                             "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[DMC_DEKU_SCRUB_GROTTO_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo dans le volcan# vend",                                     "un #trío de dekus# del volcán venden",                                         "un #trio di cespugli sotto un macigno# vende",                             "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[DMC_DEKU_SCRUB_GROTTO_CENTER] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo dans le volcan# vend",                                     "un #trío de dekus# del volcán venden",                                         "un #trio di cespugli sotto un macigno# vende",                             "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });


    hintTable[ZR_DEKU_SCRUB_GROTTO_REAR] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo près du fleuve# vend",                                      "un #par de dekus subterráneos# del río venden",                                "una #coppia di cespugli vicino al fiume# vende",                           "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });

    hintTable[ZR_DEKU_SCRUB_GROTTO_FRONT] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo près du fleuve# vend",                                      "un #par de dekus subterráneos# del río venden",                                "una #coppia di cespugli vicino al fiume# vende",                           "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });


    hintTable[LH_DEKU_SCRUB_GROTTO_LEFT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo près du lac# vend",                                        "un #trío de dekus# del lago venden",                                           "un #trio di cespugli sotto una lapide# vende",                             "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[LH_DEKU_SCRUB_GROTTO_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo près du lac# vend",                                        "un #trío de dekus# del lago venden",                                           "un #trio di cespugli sotto una lapide# vende",                             "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });

    hintTable[LH_DEKU_SCRUB_GROTTO_CENTER] = HintText::Exclude({
        // obscure text
        Text{"a #trio of scrubs# sells",                                    "le #trio de Pestes Mojo près du lac# vend",                                        "un #trío de dekus# del lago venden",                                           "un #trio di cespugli sotto una lapide# vende",                             "die Ware eines #Deku-Händler-Trios#, |wäre|wären|"},
    });


    hintTable[GV_DEKU_SCRUB_GROTTO_REAR] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo près de la vallée# vend",                                   "un #par de dekus subterráneos# del valle venden",                              "una #coppia di cespugli da canyon# vende",                                 "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });

    hintTable[GV_DEKU_SCRUB_GROTTO_FRONT] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo près de la vallée# vend",                                   "un #par de dekus subterráneos# del valle venden",                              "una #coppia di cespugli da canyon# vende",                                 "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });


    hintTable[COLOSSUS_DEKU_SCRUB_GROTTO_FRONT] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo dans le désert# vend",                                      "un #par de dekus subterráneos# del desierto venden",                           "una #coppia di cespugli sotto la sabbia# vende",                           "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });

    hintTable[COLOSSUS_DEKU_SCRUB_GROTTO_REAR] = HintText::Exclude({
        // obscure text
        Text{"a #scrub underground duo# sells",                             "le #duo de Pestes Mojo dans le désert# vend",                                      "un #par de dekus subterráneos# del desierto venden",                           "una #coppia di cespugli sotto la sabbia# vende",                           "die Ware, des #Deku-Händler-Duos eines Erdlochs#, |wäre|wären|"},
    });


    hintTable[LLR_STABLES_LEFT_COW] = HintText::Exclude({
        // obscure text
        Text{"a #cow in a stable# gifts",                                   "une #vache dans son étable# donne",                                                "una #vaca del establo# brinda",                                                "una #mucca nella stalla# regala",                                          "die Milch einer #Kuh, im Stall der Farm#, |wäre|wären|"},
    });

    hintTable[LLR_STABLES_RIGHT_COW] = HintText::Exclude({
        // obscure text
        Text{"a #cow in a stable# gifts",                                   "une #vache dans son étable# donne",                                                "una #vaca del establo# brinda",                                                "una #mucca nella stalla# regala",                                          "die Milch einer #Kuh, im Stall der Farm#, |wäre|wären|"},
    });

    hintTable[LLR_TOWER_RIGHT_COW] = HintText::Exclude({
        // obscure text
        Text{"a #cow in a ranch silo# gifts",                               "une #vache dans la tour du ranch# donne",                                          "una #vaca del granero# brinda",                                                "una #mucca in un granaio# regala",                                         "die Milch einer #Kuh, im Silo der Farm#, |wäre|wären|"},
    });

    hintTable[LLR_TOWER_LEFT_COW] = HintText::Exclude({
        // obscure text
        Text{"a #cow in a ranch silo# gifts",                               "une #vache dans la tour du ranch# donne",                                          "una #vaca del granero# brinda",                                                "una #mucca in un granaio# regala",                                         "die Milch einer #Kuh, im Silo der Farm#, |wäre|wären|"},
    });

    hintTable[KAK_IMPAS_HOUSE_COW] = HintText::Exclude({
        // obscure text
        Text{"a #cow imprisoned in a house# protects",                      "la #vache enfermée dans une maison# donne",                                        "una #vaca enjaulada de una casa# brinda",                                      "una #mucca in gabbia# regala",                                             "die Milch, der in einem #Haus eingesperrten Kuh#, |wäre|wären|"},
    });

    hintTable[DMT_COW_GROTTO_COW] = HintText::Exclude({
        // obscure text
        Text{"a #cow in a luxurious hole# offers",                          "la #vache dans une grotte luxueuse# donne",                                        "una #vaca de un lujoso hoyo# brinda",                                          "una #mucca in una grotta lussuosa# regala",                                "die Milch einer #wohlhabenden Kuh#, |wäre|wären|"},
    });
}
// clang-format on
