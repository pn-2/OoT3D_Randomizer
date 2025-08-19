#include "hint_list.hpp"
// clang-format off
void HintTable_Init_Exclude_Dungeon() {//English                                            French                                                                                          Spanish                                                                                     Italian                                                                                             German
    /*--------------------------
    |        DEKU TREE         |
    ---------------------------*/

    hintTable[DEKU_TREE_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in the #center of the Deku Tree# lies",                                       "#le cœur de l'Arbre Mojo# recèle",                                                             "al #centro del Gran Árbol Deku# yace",                                                     "al #centro dell'Albero Deku# puoi trovare",                                                        "im #Zentrum des Deku-Baumes#, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_SLINGSHOT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #treasure guarded by a scrub# in the Deku Tree is",                       "le #trésor protégé par une Peste# dans l'Arbre Mojo est",                                      "un #deku del Gran Árbol Deku# esconde",                                                    "il #forziere custodito da un Deku# nell'omonimo albero contiene",                                  "ein #Schatz, beschützt von einem Laubkerl# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_SLINGSHOT_ROOM_SIDE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #treasure guarded by a scrub# in the Deku Tree is",                       "le #trésor protégé par une Peste# dans l'Arbre Mojo est",                                      "un #deku del Gran Árbol Deku# esconde",                                                    "il #forziere custodito da un Deku# nell'omonimo albero contiene",                                  "ein #Schatz, beschützt von einem Laubkerl# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#pillars of wood# in the Deku Tree lead to",                                  "les #piliers de bois# dans l'Arbre Mojo indiquent",                                            "los #salientes del Gran Árbol Deku# conducen a",                                           "dei #pilastri di legno# nell'Albero Deku conducono verso",                                         "nahe #hölzerner Säulen# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_COMPASS_ROOM_SIDE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#pillars of wood# in the Deku Tree lead to",                                  "les #piliers de bois# dans l'Arbre Mojo indiquent",                                            "los #salientes del Gran Árbol Deku# conducen a",                                           "dei #pilastri di legno# nell'Albero Deku conducono verso",                                         "nahe #hölzerner Säulen# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_BASEMENT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#webs in the Deku Tree# hide",                                                "les #toiles dans l'Arbre Mojo# cachent",                                                       "entre #telarañas del Gran Árbol Deku# yace",                                               "una #ragnatela nell'Albero Deku# copre",                                                           "unterhalb von #Spinnenweben# des Deku-Baumes, |wäre|wären|"},
    });


    hintTable[DEKU_TREE_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in the #center of the Deku Tree# lies",                                       "#le cœur de l'Arbre Mojo# recèle",                                                             "al #centro del Gran Árbol Deku# yace",                                                     "al #centro dell'Albero Deku# puoi trovare",                                                        "im #Zentrum des Deku-Baumes#, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #treasure guarded by a large spider# in the Deku Tree is",                  "le #trésor protégé par une grosse araignée# dans l'Arbre Mojo est",                            "una #gran araña del Gran Árbol Deku# esconde",                                             "il #tesoro protetto da un grosso ragno# nell'Albero Deku è",                                       "ein #Schatz, beschützt von einer großen Spinne# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_SLINGSHOT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#pillars of wood# in the Deku Tree lead to",                                  "les #piliers de bois# dans l'Arbre Mojo indiquent",                                            "los #salientes del Gran Árbol Deku# conducen a",                                           "dei #pilastri di legno# nell'Albero Deku conducono verso",                                         "nahe #hölzerner Säulen# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_SLINGSHOT_ROOM_BACK_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#pillars of wood# in the Deku Tree lead to",                                  "les #piliers de bois# dans l'Arbre Mojo indiquent",                                            "los #salientes del Gran Árbol Deku# conducen a",                                           "dei #pilastri di legno# nell'Albero Deku conducono verso",                                         "nahe #hölzerner Säulen# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_BASEMENT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#webs in the Deku Tree# hide",                                                "les #toiles dans l'Arbre Mojo# cachent",                                                       "entre #telarañas del Gran Árbol Deku# yace",                                               "una #ragnatela nell'Albero Deku# copre",                                                           "unterhalb von #Spinnenweben# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_BEFORE_SPINNING_LOG_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#magical fire in the Deku Tree# leads to",                                    "le #feu magique dans l'Arbre Mojo# éclaire",                                                   "el #fuego mágico en el Gran Árbol Deku# conduce a",                                        "con del #fuoco magico nell'Albero Deku# si |può|possono| ottenere",                                "nahe eines #drehenden Stammes# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_QUEEN_GOHMA_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Parasitic Armored Arachnid# holds",                                      "le #Monstre Insectoïde Géant# possède",                                                        "el #arácnido parasitario acorazado# porta",                                                "il #parassita corazzato# possiede",                                                                "nahe dem #gepanzerten Spinnenparasiten#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Queen Gohma# holds",                                                         "la #Reine Gohma# possède",                                                                     "la #Reina Goma# porta",                                                                    "#Gohma# possiede",                                                                                 "nahe der #Spinnenkönigin Gohma#, |wäre|wären|"}
    );

    hintTable[DEKU_TREE_GS_BASEMENT_BACK_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider deep within the Deku Tree# hides",                                  "une #Skulltula au cœur de l'Arbre Mojo# a",                                                    "una #Skulltula en las profundidades del Árbol Deku# otorga",                               "un #ragno nelle profondità dell'Albero Deku# nasconde",                                            "in einer #Spinne, tief im Deku-Baum#, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_GS_BASEMENT_GATE] = HintText::Exclude({
        // obscure text
        Text{"a #web protects a spider# within the Deku Tree holding",                      "une #Skulltula derrière une toile dans l'Arbre Mojo# a",                                       "una #Skulltula protegida por su tela# del Árbol Deku otorga",                              "un #ragno vicino all'acqua# nell'Albero Deku nasconde",                                            "in einer #Spinne, geschützt von einem Netz# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_GS_BASEMENT_VINES] = HintText::Exclude({
        // obscure text
        Text{"a #web protects a spider# within the Deku Tree holding",                      "une #Skulltula derrière une toile dans l'Arbre Mojo# a",                                       "una #Skulltula protegida por su tela# del Árbol Deku otorga",                              "un #ragno vicino all'acqua# nell'Albero Deku nasconde",                                            "in einer #Spinne, geschützt von einem Netz# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_GS_COMPASS_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider atop the Deku Tree# holds",                                         "une #Skulltula au sommet de l'Arbre Mojo# a",                                                  "una #Skulltula en lo alto del Árbol Deku# otorga",                                         "un #ragno in cima all'Albero Deku# nasconde",                                                      "in einer #Spinne, im oberen Teil des Deku-Baumes#, |wäre|wären|"},
    });


    hintTable[DEKU_TREE_MQ_GS_LOBBY] = HintText::Exclude({
        // obscure text
        Text{"a #spider in a crate# within the Deku Tree hides",                            "une #Skulltula dans une caisse dans l'Arbre Mojo# a",                                          "una #Skulltula bajo una caja# del Árbol Deku otorga",                                      "un #ragno in una cassa# nell'Albero Deku nasconde",                                                "in der #Spinne, in einer Kiste# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_GS_COMPASS_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #wall of rock protects a spider# within the Deku Tree holding",             "une #Skulltula derrière des rochers dans l'Arbre Mojo# a",                                     "una #Skulltula protegida por una pared rocosa# del Árbol Deku otorga",                     "un #ragno dietro dei massi# nell'Albero Deku nasconde",                                            "in einer #Spinne, geschützt von einer Felswand# des Deku-Baumes, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_GS_BASEMENT_BACK_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider deep within the Deku Tree# hides",                                  "une #Skulltula au cœur de l'Arbre Mojo# a",                                                    "una #Skulltula en las profundidades del Árbol Deku# otorga",                               "un #ragno nelle profondità dell'Albero Deku# nasconde",                                            "in einer #Spinne, tief im Deku-Baum#, |wäre|wären|"},
    });

    hintTable[DEKU_TREE_MQ_DEKU_SCRUB] = HintText::Exclude({
        // obscure text
        Text{"a #scrub in the Deku Tree# sells",                                            "la #Peste Mojo dans l'Arbre Mojo# vend",                                                       "un #deku del Gran Árbol Deku# vende",                                                      "un #cespuglio nell'Albero Deku# vende",                                                            "die Ware, eines #Deku-Händlers des Deku-Baumes#, |wäre|wären|"},
    });

    /*--------------------------
    |     DODONGOS CAVERN      |
    ---------------------------*/

    hintTable[DODONGOS_CAVERN_BOSS_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#above King Dodongo# lies",                                                   "#au-dessus du Roi Dodongo# se trouve",                                                         "#sobre el Rey Dodongo# yace",                                                              "#sopra il Mega Dodongo# puoi trovare",                                                             "#überhalb von King Dodongo#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #muddy wall in Dodongo's Cavern# hides",                                    "le #mur fragile dans la Caverne Dodongo# recèle",                                              "tras una #agrietada pared en la Cueva de los Dodongos# yace",                              "una #parete friabile nella caverna dei Dodongo# nasconde",                                         "hinter einer #brüchigen Wand in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #statue in Dodongo's Cavern# guards",                                       "la #statue dans la Caverne Dodongo# protège",                                                  "una #estatua de la Cueva de los Dodongos# esconde",                                        "una #statua nella caverna dei Dodongo# protegge",                                                  "nahe einer #Statue in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_BOMB_FLOWER_PLATFORM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"above a #maze of stone# in Dodongo's Cavern lies",                            "sur #un labyrinthe de pierre# dans la Caverne Dodongo demeure",                                "entre un #laberinto de piedra# en la Cueva de los Dodongos yace",                          "sopra #un dedalo di pietra nella caverna dei Dodongo# puoi trovare",                               "überhalb eines #steinernen Irrgartens# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_BOMB_BAG_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #second lizard cavern battle# yields",                                    "le #deuxième duel de lézards de la Caverne# octroie",                                          "#luchar dos veces contra reptiles en una cueva# conduce a",                                "il #secondo gruppo di lucertole di caverna# protegge",                                             "nahe des #zweiten Höhlenkampfes mit Echsen#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_END_OF_BRIDGE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #chest at the end of a bridge# yields",                                     "le #trésor à l'extrémité d'un pont# contient",                                                 "un #cofre al final de un quebrado puente# contiene",                                       "un #forziere alla fine di un ponte# contiene",                                                     "in einer #Truhe, am Ende einer Brücke#, |wäre|wären|"},
    });


    hintTable[DODONGOS_CAVERN_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #muddy wall in Dodongo's Cavern# hides",                                    "le #mur fragile dans la Caverne Dodongo# recèle",                                              "una #agrietada pared en la Cueva de los Dodongos# esconde",                                "una #parete friabile nella caverna dei Dodongo# nasconde",                                         "hinter einer #brüchigen Wand in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_BOMB_BAG_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #elevated alcove# in Dodongo's Cavern holds",                              "l'#alcôve haut perchée# dans la Caverne Dodongo cache",                                        "una #elevada alcoba# en la Cueva de los Dodongos brinda",                                  "dal #centro della caverna dei Dodongo# puoi vedere un forziere contenente",                        "in einer #erhöhten Nische# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#fire-breathing lizards# in Dodongo's Cavern guard",                          "les #lézards cracheurs de feu# dans la Caverne Dodongo protègent",                             "unos #flamígeros reptiles# en la Cueva de los Dodongos esconden",                          "#lucertole sputafuoco nella caverna dei Dodongo# proteggono",                                      "nahe #feuerspuckender Echsen# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_LARVAE_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#baby spiders# in Dodongo's Cavern guard",                                    "les #petites araignées dans la Caverne Dodongo# protègent",                                    "unas #pequeñas larvas# en la Cueva de los Dodongos esconden",                              "#piccoli parassiti# nella caverna dei Dodongo proteggono",                                         "nahe #Babyspinnen# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_TORCH_PUZZLE_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"above a #maze of stone# in Dodongo's Cavern lies",                            "sur #un labyrinthe de pierre# dans la Caverne Dodongo demeure",                                "sobre un #laberinto de piedra# en la Cueva de los Dodongos yace",                          "sopra #un dedalo di pietra nella caverna dei Dodongo# puoi trovare",                               "über einem #steinernen Irrgarten# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_UNDER_GRAVE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#beneath a headstone# in Dodongo's Cavern lies",                              "#sous une pierre tombale# dans la Caverne Dodongo gît",                                        "#bajo una lápida# en la Cueva de los Dodongos yace",                                       "#sotto una lapide# nella caverna dei Dodongo |giace|giacciono|",                                   "#unter einem Grabstein# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_KING_DODONGO_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Infernal Dinosaur# holds",                                               "le #Dinosaure Infernal# possède",                                                              "el #dinosaurio infernal# porta",                                                           "il #dinosauro degli inferi# possiede",                                                             "nahe dem #Infernosaurus#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#King Dodongo# holds",                                                        "le #Roi Dodongo# possède",                                                                     "el #Rey Dodongo# porta",                                                                   "il #Mega Dodongo# possiede",                                                                       "nahe #King Dodongo#, |wäre|wären|"}
    );

    hintTable[DODONGOS_CAVERN_GS_VINES_ABOVE_STAIRS] = HintText::Exclude({
        // obscure text
        Text{"a #spider entangled in vines# in Dodongo's Cavern guards",                    "une #Skulltula sur les vignes dans la Caverne Dodongo# a",                                     "una #Skulltula sobre unas cepas# de la Cueva de los Dodongos otorga",                      "un #ragno su dei rampicanti# nella caverna dei Dodongo nasconde",                                  "in einer, #in Reben verstrickten Spinne# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_GS_SCARECROW] = HintText::Exclude({
        // obscure text
        Text{"a #spider among explosive slugs# hides",                                      "une #Skulltula au milieu de limaces explosives# a",                                            "una #Skulltula rodeada de explosivos gusanos# otorga",                                     "un #ragno fra lumache esplosive# nella caverna dei Dodongo protegge",                              "in einer, #außer Reichweite liegenden Spinne# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_GS_ALCOVE_ABOVE_STAIRS] = HintText::Exclude({
        // obscure text
        Text{"a #spider just out of reach# in Dodongo's Cavern holds",                      "une #Skulltula en haut des escaliers de la Caverne Dodongo# a",                                "una #Skulltula fuera del alcance# de la Cueva de los Dodongos otorga",                     "un #ragno in cima alle scale mobili# possiede",                                                    "in einer, #außer Reichweite liegenden Spinne# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_GS_BACK_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider behind a statue# in Dodongo's Cavern holds",                        "une #Skulltula au cœur de la Caverne Dodongo# a",                                              "una #Skulltula tras una estatua# de la Cueva de los Dodongos otorga",                      "un #ragno si nasconde dietro una statua# nella caverna dei Dodongo con",                           "in einer, #hinter einer Statue versteckten Spinne# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_GS_SIDE_ROOM_NEAR_LOWER_LIZALFOS] = HintText::Exclude({
        // obscure text
        Text{"a #spider among bats# in Dodongo's Cavern holds",                             "une #Skulltula entourée de Saigneurs dans la Caverne Dodongo# a",                              "una #Skulltula rodeada de murciélagos# de la Cueva de los Dodongos otorga",                "un #ragno in mezzo ai pipistrelli# nella caverna dei Dodongo nasconde",                            "in einer, #von Fledermäusen umgebenen Spinne# in Dodongos Höhle, |wäre|wären|"},
    });


    hintTable[DODONGOS_CAVERN_MQ_GS_SCRUB_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider high on a wall# in Dodongo's Cavern holds",                         "une #Skulltula haut perchée dans la Caverne Dodongo# a",                                       "una #Skulltula en lo alto de una pared# de la Cueva de los Dodongos otorga",               "un #ragno in alto su un muro# nella caverna dei Dodongo protegge",                                 "in einer, #an einer hohen Wand krabbelnden Spinne# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_GS_LIZALFOS_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider on top of a pillar of rock# in Dodongo's Cavern holds",             "une #Skulltula sur l'énorme pilier de roc de la Caverne Dodongo# a",                           "una #Skulltula en lo alto de un pilar# de la Cueva de los Dodongos otorga",                "un #ragno sopra una colonna di pietra# nella caverna dei Dodongo nasconde",                        "in einer, #auf einer Steinsäule krabbelnden Spinne# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_GS_LARVAE_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider in a crate# in Dodongo's Cavern holds",                             "une #Skulltula dans une caisse de la Caverne Dodongo# a",                                      "una #Skulltula bajo una caja# de la Cueva de los Dodongos otorga",                         "un #ragno in una cassa# nella caverna dei Dodongo nasconde",                                       "in der #Spinne, einer Kiste# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_GS_BACK_AREA] = HintText::Exclude({
        // obscure text
        Text{"a #spider among graves# in Dodongo's Cavern holds",                           "une #Skulltula parmi les tombes de la Caverne Dodongo# a",                                     "una #Skulltula entre lápidas# en la Cueva de los Dodongos otorga",                         "un #ragno fra le lapidi# nella caverna dei Dodongo nasconde",                                      "in einer #Spinne, nahe Gräbern# in Dodongos Höhle, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_LEFT] = HintText::Exclude({
        // obscure text
        Text{"a pair of #scrubs in Dodongo's Cavern# sells",                                "le #duo de Pestes Mojo dans la Caverne Dodongo# vend",                                         "un #par de dekus en la Cueva de los Dodongos# venden",                                     "una #coppia di cespugli# nella caverna dei Dodongo vende",                                         "die Ware, eines #Deku-Händler-Duos in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_DEKU_SCRUB_SIDE_ROOM_NEAR_DODONGOS] = HintText::Exclude({
        // obscure text
        Text{"a #scrub guarded by Lizalfos# sells",                                         "la #Peste Mojo au cœur de la Caverne Dodongo# vend",                                           "un #deku custodiado por Lizalfos# vende",                                                  "un #cespuglio solitario vicino ai Dodongo# nell'omonima caverna vende",                            "die Ware, eines #von Lizalfos beschützten Deku-Händlers#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"a pair of #scrubs in Dodongo's Cavern# sells",                                "le #duo de Pestes Mojo dans la Caverne Dodongo# vend",                                         "un #par de dekus en la Cueva de los Dodongos# venden",                                     "una #coppia di cespugli# nella caverna dei Dodongo vende",                                         "die Ware, eines #Deku-Händler-Duos in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_DEKU_SCRUB_LOBBY] = HintText::Exclude({
        // obscure text
        Text{"a #scrub in Dodongo's Cavern# sells",                                         "la #Peste Mojo dans l'entrée de la Caverne Dodongo# vend",                                     "un #deku en la Cueva de los Dodongos# vende",                                              "un #cespuglio solitario# vicino all'ingresso della caverna dei Dodongo vende",                     "die Ware, eines #Deku-Händlers in Dodongos Höhle#, |wäre|wären|"},
    });


    hintTable[DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_REAR] = HintText::Exclude({
        // obscure text
        Text{"a pair of #scrubs in Dodongo's Cavern# sells",                                "le #duo de Pestes Mojo dans l'entrée de la Caverne Dodongo# vend",                             "un #par de dekus en la Cueva de los Dodongos# venden",                                     "una #coppia di cespugli# nella caverna dei Dodongo vende",                                         "die Ware, eines #Deku-Händler-Duos in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_FRONT] = HintText::Exclude({
        // obscure text
        Text{"a pair of #scrubs in Dodongo's Cavern# sells",                                "le #duo de Pestes Mojo dans l'entrée de la Caverne Dodongo# vend",                             "un #par de dekus en la Cueva de los Dodongos# venden",                                     "una #coppia di cespugli# nella caverna dei Dodongo vende",                                         "die Ware, eines #Deku-Händler-Duos in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_DEKU_SCRUB_STAIRCASE] = HintText::Exclude({
        // obscure text
        Text{"a #scrub in Dodongo's Cavern# sells",                                         "la #Peste Mojo au sommet des escaliers dans la Caverne Dodongo# vend",                         "un #deku en la Cueva de los Dodongos# vende",                                              "un #cespuglio in cima alle scale mobili# vende",                                                   "die Ware, eines #Deku-Händlers in Dodongos Höhle#, |wäre|wären|"},
    });

    hintTable[DODONGOS_CAVERN_MQ_DEKU_SCRUB_SIDE_ROOM_NEAR_LOWER_LIZALFOS] = HintText::Exclude({
        // obscure text
        Text{"a #scrub guarded by Lizalfos# sells",                                         "la #Peste Mojo au cœur de la Caverne Dodongo# vend",                                           "un #deku custodiado por Lizalfos# vende",                                                  "un #cespuglio vicino ai Lizalfos# della caverna dei Dodongo vende",                                "die Ware, eines #von Lizalfos beschützten Deku-Händlers#, |wäre|wären|"},
    });

    /*--------------------------
    |     JABU JABUS BELLY     |
    ---------------------------*/

    hintTable[JABU_JABUS_BELLY_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#tentacle trouble# in a deity's belly guards",                                "une #membrane problématique# dans le ventre d'un gardien protège",                             "un #problema tentaculoso# en la tripa de cierta deidad esconde",                           "bisogna risolvere un #problema di tentacoli# per ottenere",                                        "nahe eines #Tentakelproblems# im Bauche einer Gottheit, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #slimy thing# guards",                                                      "le #Tentacule Parasite Rouge# protège",                                                        "un #tentáculo parasitario# protege",                                                       "un #coso rosso# protegge",                                                                         "nahe eines #schleimigen Dings#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#bubble trouble# in a deity's belly guards",                                  "une #horde de bulles# dans le ventre d'un gardien protège",                                    "un #problema burbujesco# en la tripa de cierta deidad esconde",                            "bisogna risolvere un #problema di bolle# per ottenere",                                            "nahe eines #Blubberblasenproblems# im Bauche einer Gottheit, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#bubbles# guard",                                                             "des #Bulld'O# entourent",                                                                      "unas #burbujas# protegen",                                                                 "gli #shabom# proteggono",                                                                          "nahe #Blubberblasen#, |wäre|wären|"}
    );


    hintTable[JABU_JABUS_BELLY_MQ_FIRST_ROOM_SIDE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"shooting a #mouth cow# reveals",                                              "tirer sur une #vache# révèle",                                                                 "#dispararle a una vaca# revela",                                                           "sparare a una #mucca in bocca# rivela",                                                            "nahe einer #Kuh im Maule# einer Gottheit, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#pop rocks# hide",                                                            "des #pierres aux reins# cachent",                                                              "#cepillarse los dientes con explosivos# revela",                                           "#gargarismi esplosivi# rivelano",                                                                  "eine #prickelnde Entdeckung# einer Gottheit, |wäre|wären|"},
        Text{"an #explosive palate# holds",                                                 "des #gargouillis explosifs# cachent",                                                          "un #paladar explosivo# esconde",                                                           "un #groppo in gola# nasconde",                                                                     "ein #explosiver Geschmack#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #boulder before cows# hides",                                               "des #rochers près des vaches# cachent",                                                        "cierta #roca rodeada de vacas# esconde",                                                   "un #macigno nella bocca di Jabu Jabu# nasconde",                                                   "unter einem #Felsen im Maule# einer Gottheit, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_MQ_SECOND_ROOM_LOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"near a #spiked elevator# lies",                                               "près d'un #ascenseur visqueux# se trouve",                                                     "cerca de un #ascensor puntiagudo# yace",                                                   "un forziere sotto un #ascensore spinoso# contiene",                                                "nahe eines #stacheligen Aufzugs#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #drowning cow# unveils",                                                    "une #vache engloutie# a",                                                                      "una #vaca sumergida# revela",                                                              "una #mucca sommozzatrice# fa apparire",                                                            "nahe einer #ertrinkenden Kuh#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_SECOND_ROOM_UPPER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#moving anatomy# creates a path to",                                          "un #organe descendant# mène à",                                                                "un #ser movedizo entre paredes# conduce a",                                                "un #intervento chirurgico# apre la via per",                                                       "nahe sich #bewegender Anatomie#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_BASEMENT_NEAR_SWITCHES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #pair of digested cows# hold",                                              "#deux vaches digérées# détiennent",                                                            "un #par de digeridas vacas# otorgan",                                                      "una #coppia di mucche digerite# nasconde",                                                         "nahe #zwei halb-verdauten Kühen#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_BASEMENT_NEAR_VINES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #pair of digested cows# hold",                                              "#deux vaches digérées# détiennent",                                                            "un #par de digeridas vacas# otorgan",                                                      "una #coppia di mucche digerite# nasconde",                                                         "nahe #zwei halb-verdauten Kühen#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_NEAR_BOSS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #final cows' reward# in a deity's belly is",                              "le #cadeau des dernières vaches# ingérées est",                                                "las #vacas al final# de la tripa de cierta deidad otorgan",                                "il #premio dell'ultima mucca inghiottita# è",                                                      "nahe #den letzten Kühen# im Bauche einer Gottheit, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_FALLING_LIKE_LIKE_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#cows protected by falling monsters# in a deity's belly guard",               "des #vaches protégées par des monstres tombants# cachent",                                     "unas #vacas custodiadas por monstruos del techo# de la tripa de cierta deidad otorgan",    "delle #mucche inghiottite liberano dei mostri# per difendere",                                     "nahe, von #herabfallenden Monstern beschützten Kühen#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_BOOMERANG_ROOM_SMALL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a school of #stingers swallowed by a deity# guard",                           "les #Mantas avalées par un gardien# protègent",                                                "unos #stingers engullidos por cierta deidad# guardan",                                     "una divinità ha inghiottito #un banco di trigoni volanti# con",                                    "nahe eines #verschluckten Fischschwarms#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a school of #stingers swallowed by Jabu-Jabu# guard",                         "les #Mantas avalées par Jabu-Jabu# protègent",                                                 "unos #stingers engullidos por Jabu-Jabu# guardan",                                         "#un banco di trigoni volanti# nella pancia di Jabu Jabu protegge",                                 "nahe #Fischen in Jabu-Jabus Bauch#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_MQ_BOOMERANG_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a school of #stingers swallowed by a deity# guard",                           "les #Mantas avalées par un gardien# protègent",                                                "unos #stingers engullidos por cierta deidad# guardan",                                     "una divinità ha inghiottito #un banco di trigoni volanti# con",                                    "nahe eines #verschluckten Fischschwarms#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a school of #stingers swallowed by Jabu-Jabu# guard",                         "les #Mantas avalées par Jabu-Jabu# protègent",                                                 "unos #stingers engullidos por Jabu-Jabu# guardan",                                         "#un banco di trigoni volanti# nella pancia di Jabu Jabu protegge",                                 "nahe #Fischen in Jabu-Jabus Bauch#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_BARINADE_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Bio-Electric Anemone# holds",                                            "l'#Anémone Bioélectrique# possède",                                                            "la #anémona bioeléctrica# porta",                                                          "l'#anemone bio-elettrico# possiede",                                                               "nahe dem #elektroterrestrischen Biotentakel#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Barinade# holds",                                                            "#Barinade# possède",                                                                           "#Barinade# porta",                                                                         "#Cnidade# possiede",                                                                               "nahe #Barinade#, |wäre|wären|"}
    );

    hintTable[JABU_JABUS_BELLY_GS_LOBBY_BASEMENT_LOWER] = HintText::Exclude({
        // obscure text
        Text{"a #spider resting near a princess# in Jabu-Jabu's Belly holds",               "une #Skulltula près de la Princesse dans le Ventre de Jabu-Jabu# a",                           "una #Skulltula junto a una princesa# en la Tripa de Jabu-Jabu otorga",                     "un #ragno vicino a una principessa# nella pancia di Jabu Jabu ha",                                 "in einer #Spinne, nahe einer Prinzessin# in Jabu-Jabus Bauch, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_GS_LOBBY_BASEMENT_UPPER] = HintText::Exclude({
        // obscure text
        Text{"a #spider resting near a princess# in Jabu-Jabu's Belly holds",               "une #Skulltula près de la Princesse dans le Ventre de Jabu-Jabu# a",                           "una #Skulltula junto a una princesa# en la Tripa de Jabu-Jabu otorga",                     "un #ragno vicino a una principessa# nella pancia di Jabu Jabu ha",                                 "in einer #Spinne, nahe einer Prinzessin# in Jabu-Jabus Bauch, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_GS_NEAR_BOSS] = HintText::Exclude({
        // obscure text
        Text{"#jellyfish surround a spider# holding",                                       "une #Skulltula entourée de Méduses dans le Ventre de Jabu-Jabu# a",                            "una #Skulltula rodeada de medusas# otorga",                                                "un #ragno circondato da meduse# possiede",                                                         "in einer #Spinne nahe Quallen#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_GS_WATER_SWITCH_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider guarded by a school of stingers# in Jabu-Jabu's Belly holds",       "une #Skulltula protégée par des Mantas dans le Ventre de Jabu-Jabu# a",                        "una #Skulltula rodeada por unos stingers# en la Tripa de Jabu-Jabu otorga",                "un #ragno protetto da trigoni volanti# nasconde",                                                  "in einer #Spinne, nahe eines Fischschwarms# in Jabu-Jabus Bauch"},
    });


    hintTable[JABU_JABUS_BELLY_MQ_GS_TAILPASARAN_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider surrounded by electricity# in Jabu-Jabu's Belly holds",             "une #Skulltula entourée d'électricité dans le Ventre de Jabu-Jabu# a",                         "una #Skulltula rodeada de electricidad# en la Tripa de Jabu-Jabu otorga",                  "un #ragno circondato da trivolt# nasconde",                                                        "in einer, #von Elektrizität umgebenen Spinne# in Jabu-Jabus Bauch, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_GS_BOOMERANG_CHEST_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider guarded by a school of stingers# in Jabu-Jabu's Belly holds",       "une #Skulltula protégée par des Mantas dans le Ventre de Jabu-Jabu# a",                        "una #Skulltula protegida por unos stingers# en la Tripa de Jabu-Jabu otorga",              "un #ragno protetto da trigoni volanti# nasconde",                                                  "in einer #Spinne, nahe eines Fischschwarms# in Jabu-Jabus Bauch"},
    });

    hintTable[JABU_JABUS_BELLY_MQ_GS_NEAR_BOSS] = HintText::Exclude({
        // obscure text
        Text{"a #spider in a web within Jabu-Jabu's Belly# holds",                          "une #Skulltula sur une toile dans le Ventre de Jabu-Jabu# a",                                  "una #Skulltula sobre una red# en la Tripa de Jabu-Jabu otorga",                            "un #ragno sopra una rete# nella pancia di Jabu Jabu nasconde",                                     "in einer, #Spinne in einem Netz in Jabu-Jabus Bauch#, |wäre|wären|"},
    });

    hintTable[JABU_JABUS_BELLY_DEKU_SCRUB] = HintText::Exclude({
        // obscure text
        Text{"a #scrub in a deity# sells",                                                  "la #Peste Mojo dans le ventre d'un gardien# vend",                                             "un #deku dentro de cierta deidad# vende",                                                  "un #cespuglio inghiottito# vende",                                                                 "die Ware, eines #Deku-Händlers in einer Gottheit#, |wäre|wären|"},
    });

    /*--------------------------
    |      FOREST TEMPLE       |
    ---------------------------*/

    hintTable[FOREST_TEMPLE_FIRST_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #tree in the Forest Temple# supports",                                      "sur un #arbre dans le Temple de la Forêt# se trouve",                                          "sobre un #árbol del Templo del Bosque# yace",                                              "un #albero nel Santuario della Foresta# sostiene",                                                 "auf einem #Baum des Waldtempels#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_FIRST_STALFOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#defeating enemies beneath a falling ceiling# in Forest Temple yields",       "#deux ennemis tombant du plafond# dans le Temple de la Forêt protègent",                       "#derrotar enemigos caídos de lo alto# del Templo del Bosque revela",                       "dei #mostri sotto un ottagono mobile# nel Santuario della Foresta difendono",                      "unterhalb einer #fallenden Decke# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_WELL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #sunken chest deep in the woods# contains",                                 "le #coffre submergé au fond de la forêt# contient",                                            "un #sumergido cofre en lo profundo del bosque# contiene",                                  "un #forziere sommerso nel cuore della foresta# contiene",                                          "in einer #versunkenen Truhe tief im Wald#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #fiery skull# in Forest Temple guards",                                     "le #crâne enflammé# dans le Temple de la Forêt protège",                                       "una #ardiente calavera# del Templo del Bosque esconde",                                    "un #teschio focoso# nel Santuario della Foresta protegge",                                         "nahe eines #feurigen Schädels# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_RAISED_ISLAND_COURTYARD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #chest on a small island# in the Forest Temple holds",                      "le #coffre sur l'îlot# du Temple de la Forêt contient",                                        "un #cofre sobre una isla# del Templo del Bosque contiene",                                 "un #forziere su una piccola isola# nel Santuario della Foresta contiene",                          "in einer #Truhe, auf einer kleinen Insel# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_FALLING_CEILING_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"beneath a #checkerboard falling ceiling# lies",                               "sous #l'échiquier tombant du plafond# gît",                                                    "tras un #techo de ajedrez# yace",                                                          "sotto una #scacchiera che cade# puoi trovare",                                                     "unter einem #fallenden Schachbrett#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_EYE_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #sharp eye# will spot",                                                     "l'#œil perçant# verra",                                                                        "un #afilado ojo# revela",                                                                  "un #occhio acuto# nella foresta vede",                                                             "nahe eines #geblendeten Auges# des Waldtempels, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#blocks of stone# in the Forest Temple surround",                             "les #blocs de pierre# dans le Temple de la Forêt entourent",                                   "cerca de unos #bloques de piedra# del Templo del Bosque yace",                             "#blocchi di pietra# nel Santuario della Foresta circondano",                                       "nahe #steinerner Blöcke# des Waldtempels, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #turned trunk# contains",                                                   "le #coffre pivoté# contient",                                                                  "en una #sala con otro punto de vista# se esconde",                                         "un #baule basculante# contiene",                                                                   "in einem #verdrehten Baumstamm#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_FLOORMASTER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"deep in the forest #shadows guard a chest# containing",                       "au fond de la forêt, les #ombres protègent un coffre# contenant",                              "en lo profundo del bosque #unas sombras# esconden",                                        "nel profondo della foresta una #mano mozza# protegge",                                             "nahe eines #Schattens, tief im Walde#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_BOW_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #army of the dead# guards",                                                "des #squelettes sylvestres# protègent",                                                        "un #ejército de soldados caídos# guarda",                                                  "un #esercito di morti# protegge",                                                                  "nahe der #Armee der Toten# des Waldtempels, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Stalfos deep in the Forest Temple# guard",                                   "#trois Stalfos dans le Temple de la Forêt# protègent",                                         "los #Stalfos en lo profundo del Templo del Bosque# guardan",                               "#tre Stalfos# nel Santuario della Foresta proteggono",                                             "nahe #Stalfos, tief im Walde#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_RED_POE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#Joelle# guards",                                                             "#Joelle# protège",                                                                             "#Joelle# guarda",                                                                          "#Jo# protegge",                                                                                    "nahe #Hetti#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #red ghost# guards",                                                        "#Joelle, le fantôme Rouge#, protège",                                                          "un #espectro rojo# guarda",                                                                "uno #spettro rosso# protegge",                                                                     "nahe eines #roten Irrlichts#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_BLUE_POE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#Beth# guards",                                                               "#Beth# protège",                                                                               "#Beth# guarda",                                                                            "#Beth# protegge",                                                                                  "nahe #Netti#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #blue ghost# guards",                                                       "#Beth, le fantôme bleu#, protège",                                                             "un #espectro azul# guarda",                                                                "uno #spettro blu# protegge",                                                                       "nahe eines #blauen Irrlichts#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_BASEMENT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#revolving walls# in the Forest Temple conceal",                              "des #murs rotatifs dans le Temple de la Forêt# recèlent",                                      "las #paredes giratorias# del Templo del Bosque conceden",                                  "#muri rotanti# nel Santuario della Foresta nascondono",                                            "nahe #drehbarer Wände# des Waldtempels, |wäre|wären|"},
    });


    hintTable[FOREST_TEMPLE_MQ_FIRST_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #tree in the Forest Temple# supports",                                      "sur un #arbre dans le Temple de la Forêt# se trouve",                                          "sobre un #árbol del Templo del Bosque# yace",                                              "un #albero nel Santuario della Foresta# sostiene",                                                 "auf einem #Baum des Waldtempels#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_WOLFOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#defeating enemies beneath a falling ceiling# in Forest Temple yields",       "#deux ennemis tombant du plafond# dans le Temple de la Forêt protègent",                       "#derrotar enemigos caídos de lo alto# del Templo del Bosque revela",                       "dei #mostri sotto un ottagono mobile# nel Santuario della Foresta difendono",                      "unterhalb einer #fallenden Decke# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_BOW_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #army of the dead# guards",                                                "des #squelettes sylvestres# protègent",                                                        "un #ejército de soldados caídos# guarda",                                                  "un #esercito di morti# protegge",                                                                  "nahe der #Armee der Toten# des Waldtempels, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Stalfos deep in the Forest Temple# guard",                                   "#trois Stalfos dans le Temple de la Forêt# protègent",                                         "los #Stalfos en lo profundo del Templo del Bosque# guardan",                               "#tre Stalfos# nel Santuario della Foresta proteggono",                                             "nahe #Stalfos, tief im Walde#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_MQ_RAISED_ISLAND_COURTYARD_LOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #chest on a small island# in the Forest Temple holds",                      "le #coffre sur l'îlot# du Temple de la Forêt contient",                                        "un #cofre sobre una isla# del Templo del Bosque contiene",                                 "un #forziere su una piccola isola# nel Santuario della Foresta contiene",                          "in einer #Truhe, auf einer kleinen Insel# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_RAISED_ISLAND_COURTYARD_UPPER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#high in a courtyard# within the Forest Temple is",                           "#haut perché dans le jardin# du Temple de la Forêt repose",                                    "un #cofre en lo alto de un patio# del Templo del Bosque contiene",                         "un #forziere su un balcone# nel Santuario della Foresta contiene",                                 "#hoch oben im Innenhof# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_WELL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #sunken chest deep in the woods# contains",                                 "le #coffre submergé au fond de la forêt# contient",                                            "un #sumergido cofre en lo profundo del bosque# contiene",                                  "un #forziere sommerso nel cuore della foresta# contiene",                                          "in einer #versunkenen Truhe, tief im Walde#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#Joelle# guards",                                                             "#Joelle# protège",                                                                             "#Joelle# guarda",                                                                          "#Jo# protegge",                                                                                    "nahe #Hetti#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #red ghost# guards",                                                        "#Joelle, le fantôme rouge#, protège",                                                          "un #fantasma rojo# guarda",                                                                "uno #spettro rosso# protegge",                                                                     "nahe eines #roten Irrlichts#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#Beth# guards",                                                               "#Beth# protège",                                                                               "#Beth# guarda",                                                                            "#Beth# protegge",                                                                                  "nahe #Netti#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #blue ghost# guards",                                                       "#Beth, le fantôme bleu#, protège",                                                             "un #fantasma azul# guarda",                                                                "uno #spettro blu# protegge",                                                                       "nahe eines #blauen Irrlichts#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_MQ_FALLING_CEILING_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"beneath a #checkerboard falling ceiling# lies",                               "sous #l'échiquier tombant du plafond# gît",                                                    "tras un #techo de ajedrez# yace",                                                          "sotto una #scacchiera che cade# puoi trovare",                                                     "unter einem #fallenden Schachbrett#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_BASEMENT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#revolving walls# in the Forest Temple conceal",                              "des #murs rotatifs dans le Temple de la Forêt# recèlent",                                      "las #paredes giratorias# del Templo del Bosque conceden",                                  "#muri rotanti# nel Santuario della Foresta nascondono",                                            "nahe #drehbarer Wände# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_REDEAD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"deep in the forest #undead guard a chest# containing",                        "au fond de la forêt, des #Effrois protègent un coffre# contenant",                             "en lo profundo del bosque #guardias del más allá# guardan",                                "nel profondo della foresta i #non morti# difendono",                                               "nahe eines #Zombies, tief im Walde#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #turned trunk# contains",                                                   "le #coffre pivoté# contient",                                                                  "en una #sala con otro punto de vista# se esconde",                                         "un #baule basculante# contiene",                                                                   "in einem #verdrehten Baumstamm#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_PHANTOM_GANON_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Evil Spirit from Beyond# holds",                                         "l'#Esprit Maléfique de l'Au-Delà# possède",                                                    "el #espíritu maligno de ultratumba# porta",                                                "lo #spirito del male# possiede",                                                                   "nahe dem #reitenden Unheil#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Phantom Ganon# holds",                                                       "#Ganon Spectral# possède",                                                                     "#Ganon Fantasma# porta",                                                                   "#Spettro Ganon# possiede",                                                                         "nahe #Phantom-Ganon#, |wäre|wären|"}
    );

    hintTable[FOREST_TEMPLE_GS_RAISED_ISLAND_COURTYARD] = HintText::Exclude({
        // obscure text
        Text{"a #spider on a small island# in the Forest Temple holds",                     "une #Skulltula sur l'îlot du Temple de la Forêt# a",                                           "una #Skulltula sobre una pequeña isla# del Templo del Bosque otorga",                      "un #ragno su una piccola isola# nel Santuario della Foresta nasconde",                             "in einer #Spinne, auf einer kleinen Insel# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_GS_FIRST_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider high on a wall of vines# in the Forest Temple holds",               "une #Skulltula sur un mur de vignes du Temple de la Forêt# a",                                 "una #Skulltula en lo alto de una pared de cepas# del Templo del Bosque otorga",            "un #ragno sull'edera# nel Santuario della Foresta tiene",                                          "in einer #Spinne des Waldtempels, hoch oben an einer Wand voller Reben#, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_GS_LEVEL_ISLAND_COURTYARD] = HintText::Exclude({
        // obscure text
        Text{"#stone columns# lead to a spider in the Forest Temple hiding",                "des #colonnes de pierre# dans le Temple de la Forêt mènent à une Skulltula cachant",           "unas #columnas del Templo del Bosque# conducen a una Skulltula que otorga",                "un #ragno sopra colonne di pietra# nel Santuario della Foresta conserva",                          "in einer Spinne, überhalb von #Steinsäulen# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_GS_LOBBY] = HintText::Exclude({
        // obscure text
        Text{"a #spider among ghosts# in the Forest Temple guards",                         "une #Skulltula au milieu des fantômes# dans le Temple de la Forêt a",                          "una #Skulltula rodeada de fantasmas# del Templo del Bosque otorga",                        "un #ragno fra gli spettri# al centro del Santuario della Foresta custodisce",                      "in einer #Spinne, nahe Irrlichtern# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_GS_BASEMENT] = HintText::Exclude({
        // obscure text
        Text{"a #spider within revolving walls# in the Forest Temple holds",                "une #Skulltula derrière les murs pivotants du Temple de la Forêt# a",                          "una #Skulltula entre paredes giratorias# del Templo del Bosque otorga",                    "un #ragno fra muri rotanti# nel Santuario della Foresta nasconde",                                 "in einer #Spinne, nahe drehbarer Wände# des Waldtempels, |wäre|wären|"},
    });


    hintTable[FOREST_TEMPLE_MQ_GS_FIRST_HALLWAY] = HintText::Exclude({
        // obscure text
        Text{"an #ivy-hidden spider# in the Forest Temple hoards",                          "une #Skulltula près de l'Entrée du Temple de la Forêt# a",                                     "una #Skulltula escondida entre cepas# del Templo del Bosque otorga",                       "un #ragno dopo altri tre# nel Santuario della Foresta protegge",                                   "in einer, #in Efeu versteckten Spinne# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_GS_BLOCK_PUSH_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider in a hidden nook# within the Forest Temple holds",                  "une #Skulltula dans un recoin caché du Temple de la Forêt# a",                                 "una #Skulltula en una esquina oculta# del Templo del Bosque otorga",                       "un #ragno in una nicchia laterale# nel Santuario della Foresta nasconde",                          "in einer #Spinne, einer geheimen Nische# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_GS_RAISED_ISLAND_COURTYARD] = HintText::Exclude({
        // obscure text
        Text{"a #spider on an arch# in the Forest Temple holds",                            "une #Skulltula sur une arche# du Temple de la Forêt a",                                        "una #Skulltula sobre un arco# del Templo del Bosque otorga",                               "un #ragno su un'architrave# nel Santuario della Foresta custodisce",                               "in einer #Spinne, eines Torbogens# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_GS_LEVEL_ISLAND_COURTYARD] = HintText::Exclude({
        // obscure text
        Text{"a #spider on a ledge# in the Forest Temple holds",                            "une #Skulltula sur un rebord# du Temple de la Forêt a",                                        "una #Skulltula en un borde# del Templo del Bosque otorga",                                 "un #ragno sopra un pozzo# nel Santuario della Foresta nasconde",                                   "in einer #Spinne, eines Vorsprungs# des Waldtempels, |wäre|wären|"},
    });

    hintTable[FOREST_TEMPLE_MQ_GS_WELL] = HintText::Exclude({
        // obscure text
        Text{"#draining a well# in Forest Temple uncovers a spider with",                   "#vider un puits# dans le Temple de la Forêt révèle une Skulltula avec",                        "#vaciar el pozo# del Templo del Bosque desvela una Skulltula que otorga",                  "un #ragno dentro un pozzo# nel Santuario della Foresta nasconde",                                  "in einer #Spinne, eines ausgetrockneten Brunnens# des Waldtempels, |wäre|wären|"},
    });

    /*--------------------------
    |       FIRE TEMPLE        |
    ---------------------------*/

    hintTable[FIRE_TEMPLE_NEAR_BOSS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#near a dragon# is",                                                          "#près d'un dragon# se trouve",                                                                 "#cerca de un dragón# yace",                                                                "#vicino a un drago# un forziere contiene",                                                         "in der Nähe eines #Drachens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_FLARE_DANCER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Flare Dancer behind a totem# guards",                                    "le #Danse-Flamme derrière un totem# protège",                                                  "el #Bailafuego tras unos tótems# esconde",                                                 "il #Fiammerino dietro un totem# protegge",                                                         "nahe dem #Flammenderwisch, jenseits eines Totems#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #prison beyond a totem# holds",                                             "la #prison derrière un totem# contient",                                                       "en una #prisión tras unos tótems# yace",                                                   "una #cella dietro un totem# contiene",                                                             "in einer #Zelle jenseits eines Totems#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BIG_LAVA_ROOM_BLOCKED_DOOR_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#explosives over a lava pit# unveil",                                         "des #explosifs dans un lac de lave# révèlent",                                                 "los #explosivos en un mar de llamas# revelan",                                             "#esplosioni presso un lago di lava# rivelano",                                                     "hinter einer #verdächtigen Wand einer Lavagrube#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BIG_LAVA_ROOM_LOWER_OPEN_DOOR_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #Goron trapped near lava# holds",                                           "le #Goron emprisonné près de la lave# a",                                                      "un #goron atrapado cerca de un mar de llamas# guarda",                                     "un #Goron prigioniero vicino a un lago di lava# possiede",                                         "nahe eines, #bei Lava eingesperrten Goronen#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BOULDER_MAZE_LOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #Goron at the end of a maze# holds",                                        "le #Goron dans le labyrinthe# a",                                                              "un #goron al final de un laberinto# guarda",                                               "un #Goron all'estremità di un labirinto# possiede",                                                "nahe eines #Goronen, am Ende eines Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BOULDER_MAZE_UPPER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #Goron above a maze# holds",                                                "le #Goron au dessus du labyrinthe# a",                                                         "un #goron sobre un laberinto# guarda",                                                     "un #Goron sopra un labirinto# possiede",                                                           "nahe eines #Goronen, überhalb eines Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BOULDER_MAZE_SIDE_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #Goron hidden near a maze# holds",                                          "le #Goron caché près du labyrinthe# a",                                                        "un #goron escondido tras un laberinto# guarda",                                            "un #Goron vicino a un labirinto# possiede",                                                        "nahe eines #Goronen bei einem Irrgarten#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_BOULDER_MAZE_SHORTCUT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #blocked path# in Fire Temple holds",                                       "un #sol fragile dans le Temple du Feu# contient",                                              "en un #camino bloqueado# del Templo del Fuego yace",                                       "#sotto un pavimento crepato# nel Santuario del Fuoco c'è un Goron con",                            "in einer #nützlichen Abkürzung# des Feuertempels, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #caged chest# in the Fire Temple hoards",                                   "un #coffre emprisonné# dans le Temple du Feu contient",                                        "un #cofre entre rejas# del Templo del Fuego contiene",                                     "un #forziere in una gabbia senza soffitto# nel Santuario del Fuoco contiene",                      "in einer #eingekerkerten Truhe im Feuertempel#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #chest in a fiery maze# contains",                                          "un #coffre dans un labyrinthe enflammé# contient",                                             "un #cofre de un ardiente laberinto# contiene",                                             "un #forziere presso un labirinto di fiamme# contiene",                                             "in einer #Truhe eines feurigen Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_HIGHEST_GORON_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #Goron atop the Fire Temple# holds",                                        "le #Goron au sommet du Temple du Feu# a",                                                      "un #goron en lo alto del Templo del Fuego# guarda",                                        "un #Goron in cima al Santuario del Fuoco# possiede",                                               "nahe eines #Goronen, im oberen Teil des Feuertempels#, |wäre|wären|"},
    });


    hintTable[FIRE_TEMPLE_MQ_NEAR_BOSS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#near a dragon# is",                                                          "#près d'un Dragon# gît",                                                                       "#cerca de un dragón# yace",                                                                "#vicino a un drago# un forziere contiene",                                                         "in der Nähe eines #Drachens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_MEGATON_HAMMER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Flare Dancer in the depths of a volcano# guards",                        "le #Danse-Flamme au cœur du Volcan# a",                                                        "el #Bailafuego en lo profundo del volcán# esconde",                                        "il #Fiammerino nelle profondità di un vulcano# protegge",                                          "nahe dem #Flammenderwisch, in den Tiefen eines Vulkans#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"the #Flare Dancer in the depths of the Fire Temple# guards",                  "le #Danse-Flamme au cœur du Temple du Feu# a",                                                 "el #Bailafuego en lo profundo del Templo del Fuego# esconde",                              "il #Fiammerino nelle profondità del Santuario del Fuoco# protegge",                                "nahe dem #Flammenderwisch, in den Tiefen des Feuertempels#, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #blocked path# in Fire Temple holds",                                       "le #chemin scellé# dans le Temple du Feu contient",                                            "en un #camino bloqueado# del Templo del Fuego yace",                                       "#sotto un pavimento crepato# nel Santuario del Fuoco puoi trovare",                                "in einer #nützlichen Abkürzung# des Feuertempels, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_LIZALFOS_MAZE_LOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#crates in a maze# contain",                                                  "des #caisses dans le Labyrinthe# contiennent",                                                 "las #cajas de un laberinto# contienen",                                                    "delle #casse in un labirinto# nel Santuario del Fuoco contengono",                                 "in einer #Kiste eines Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_LIZALFOS_MAZE_UPPER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#crates in a maze# contain",                                                  "des #caisses dans le Labyrinthe# contiennent",                                                 "las #cajas de un laberinto# contienen",                                                    "delle #casse in un labirinto# nel Santuario del Fuoco contengono",                                 "in einer #Kiste eines Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_MAP_ROOM_SIDE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #falling slug# in the Fire Temple guards",                                  "la #limace tombante# dans le Temple du Feu protège",                                           "una #babosa del techo# del Templo del Fuego guarda",                                       "una #lumaca grigia# nel Santuario del Fuoco protegge",                                             "nahe eines #fallenden, sehr hungrigen Monsters# des Feuertempels, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"using a #hammer in the depths of the Fire Temple# reveals",                   "frapper avec le #marteau au cœur du Temple du Feu# révèle",                                    "usar el #martillo en lo profundo del Templo del Fuego# revela",                            "usare il #martello nel profondo del Santuario del Fuoco# rivela",                                  "nahe eines #rostigen Schalters#, im unteren Teil des Feuertempels, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#illuminating a lava pit# reveals the path to",                               "#éclairer le lac de lave# révèle",                                                             "#iluminar un mar de llamas# revela",                                                       "#illuminare un lago di lava# apre la via per",                                                     "hinter #brennenden Fackeln einer Lavagrube#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_BIG_LAVA_ROOM_BLOCKED_DOOR_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#explosives over a lava pit# unveil",                                         "des #explosifs dans un lac de lave# révèlent",                                                 "los #explosivos en un mar de llamas# revelan",                                             "#esplosioni presso un lago di lava# rivelano",                                                     "hinter einer #verdächtigen Wand einer Lavagrube#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_LIZALFOS_MAZE_SIDE_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #Goron hidden near a maze# holds",                                          "le #Goron caché près du labyrinthe# a",                                                        "un #goron cerca de un laberinto# guarda",                                                  "un #Goron vicino a un labirinto# possiede",                                                        "nahe eines #Goronen bei einem Irrgarten#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"hidden #beneath a block of stone# lies",                                      "caché #derrière un bloc de pierre# se trouve",                                                 "#bajo unos bloques de piedra# yace",                                                       "#sotto un blocco di pietra# puoi scoprire",                                                        "unterhalb eines #steinernen Blocks# des Feuertempels, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_VOLVAGIA_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Subterranean Lava Dragon# holds",                                        "le #Dragon des Profondeurs# possède",                                                          "el #dragón de lava subterráneo# porta",                                                    "il #drago di magma# possiede",                                                                     "nahe dem #subterranen Lavadrachoiden#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Volvagia# holds",                                                            "#Volcania# possède",                                                                           "#Volvagia# porta",                                                                         "#Varubaja# possiede",                                                                              "nahe #Volvagia#, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_GS_SONG_OF_TIME_ROOM] = HintText::Exclude({
        // obscure text
        Text{"#eight tiles of malice# guard a spider holding",                              "une #Skulltula protégée par huit tuiles dans le Temple du Feu# a",                             "#ocho baldosas de maldad# custodian una Skulltula que otorga",                             "#otto piastrelle# proteggono un ragno che ha",                                                     "in einer Spinne, nahe #acht feindlich gesinnter Fliesen#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_GS_BOSS_KEY_LOOP] = HintText::Exclude({
        // obscure text
        Text{"#five tiles of malice# guard a spider holding",                               "une #Skulltula protégée par cinq tuiles dans le Temple du Feu# a",                             "#cinco baldosas de maldad# custodian una Skulltula que otorga",                            "#cinque piastrelle# proteggono un ragno che ha",                                                   "in einer Spinne, nahe #fünf feindlich gesinnter Fliesen#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_GS_BOULDER_MAZE] = HintText::Exclude({
        // obscure text
        Text{"#explosives in a maze# unveil a spider hiding",                               "une #Skulltula derrière un mur fragile du Temple du Feu# a",                                   "los #explosivos en un laberinto# desvelan una Skulltula que otorga",                       "#esplosioni in un labirinto# nel Santuario del Fuoco rivelano un ragno che nasconde",              "in einer Spinne, hinter einer #brüchigen Wand eines Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_GS_SCARECROW_TOP] = HintText::Exclude({
        // obscure text
        Text{"a #spider-friendly scarecrow# atop a volcano hides",                          "une #Skulltula repérée par l'épouvantail du volcan# a",                                        "un #espantapájaros en lo alto de un volcán# custodia una Skulltula que otorga",            "uno #spaventapasseri in cima al vulcano# indica un ragno che ha",                                  "in einer #Spinne über einer Vogelscheuche#, im oberen Teil eines Vulkans, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #spider-friendly scarecrow# atop the Fire Temple hides",                    "une #Skulltula repérée par l'épouvantail du Temple du Feu# a",                                 "un #espantapájaros del Templo del Fuego# custodia una Skulltula que otorga",               "uno #spaventapasseri nel Santuario del Fuoco# indica un ragno che ha",                             "in einer #Spinne über einer Vogelscheuche#, im oberen Teil des Feuertempels, |wäre|wären|"}
    );

    hintTable[FIRE_TEMPLE_GS_SCARECROW_CLIMB] = HintText::Exclude({
        // obscure text
        Text{"a #spider-friendly scarecrow# atop a volcano hides",                          "une #Skulltula repérée par l'épouvantail du Volcan# a",                                        "un #espantapájaros en lo alto de un volcán# custodia una Skulltula que otorga",            "uno #spaventapasseri in cima al vulcano# indica un ragno che ha",                                  "in einer #Spinne über einer Vogelscheuche#, im oberen Teil eines Vulkans, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a #spider-friendly scarecrow# atop the Fire Temple hides",                    "une #Skulltula repérée par l'épouvantail du Temple du Feu# a",                                 "un #espantapájaros del Templo del Fuego# custodia una Skulltula que otorga",               "uno #spaventapasseri nel Santuario del Fuoco# indica un ragno che ha",                             "in einer #Spinne über einer Vogelscheuche#, im oberen Teil des Feuertempels, |wäre|wären|"}
    );


    hintTable[FIRE_TEMPLE_MQ_GS_ABOVE_FIRE_WALL_MAZE] = HintText::Exclude({
        // obscure text
        Text{"a #spider above a fiery maze# holds",                                         "une #Skulltula au dessus du labyrinthe enflammé du Temple du Feu# a",                          "una #Skulltula sobre un ardiente laberinto# otorga",                                       "un #ragno sopra un labirinto di fiamme# nasconde",                                                 "in einer #Spinne über einem feurigen Irrgarten#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_GS_FIRE_WALL_MAZE_CENTER] = HintText::Exclude({
        // obscure text
        Text{"a #spider within a fiery maze# holds",                                        "une #Skulltula dans le labyrinthe enflammé du Temple du Feu# a",                               "una #Skulltula en el interior de un ardiente laberinto# otorga",                           "un #ragno dentro un labirinto di fiamme# nasconde",                                                "in einer #Spinne eines feurigen Irrgartens#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_GS_BIG_LAVA_ROOM_OPEN_DOOR] = HintText::Exclude({
        // obscure text
        Text{"a #Goron trapped near lava# befriended a spider with",                        "une #Skulltula emprisonnée près du lac de lave du Temple du Feu# a",                           "una #Skulltula amiga de un Goron atrapado junto a la lava# otorga",                        "un #Goron prigioniero vicino a un lago di lava# è insieme a un ragno con",                         "nahe eines, #bei Lava eingesperrten Goronen#, |wäre|wären|"},
    });

    hintTable[FIRE_TEMPLE_MQ_GS_FIRE_WALL_MAZE_SIDE_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider beside a fiery maze# holds",                                        "une #Skulltula près du labyrinthe enflammé du Temple du Feu# a",                               "una #Skulltula junto a un ardiente laberinto# otorga",                                     "un #ragno presso un labirinto di fiamme# nasconde",                                                "in einer #Spinne, nahe eines feurigen Irrgartens#, |wäre|wären|"},
    });

    /*--------------------------
    |       WATER TEMPLE       |
    ---------------------------*/

    hintTable[WATER_TEMPLE_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#rolling spikes# in the Water Temple surround",                               "des #Spikes dans le Temple de l'Eau# entourent",                                               "unas #rodantes púas# del Templo del Agua guardan",                                         "dei #ricci di ferro# nel Santuario dell'Acqua proteggono",                                         "nahe #rollender Stacheln# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#roaming stingers in the Water Temple# guard",                                "des #Mantas dans le Temple de l'Eau# protègent",                                               "unos #errantes stingers# del Templo del Agua guardan",                                     "dei #trigoni volanti nel Santuario dell'Acqua# proteggono",                                        "in einer, gut-gewässerten Truhe des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_TORCHES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#fire in the Water Temple# reveals",                                          "des #flammes dans le Temple de l'Eau# révèlent",                                               "el #fuego en el Templo del Agua# revela",                                                  "#fuochi nel Santuario dell'Acqua# rivelano",                                                       "nahe #brennender Fackeln# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_DRAGON_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #serpent's prize# in the Water Temple is",                                  "la #récompense du serpent# dans le Temple de l'Eau est",                                       "el #escamado premio# del Templo del Agua se trata de",                                     "il #premio di un dragone# nel Santuario dell'Acqua è",                                             "der #Preis einer Schlange# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_CENTRAL_BOW_TARGET_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#blinding an eye# in the Water Temple leads to",                              "#l'œil# du Temple de l'Eau voit",                                                              "#cegar un ojo# del Templo del Agua conduce a",                                             "#accecare un occhio# nel Santuario dell'Acqua apre la via per",                                    "nahe eines #geblendeten Auges# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_CENTRAL_PILLAR_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in the #depths of the Water Temple# lies",                                    "le #cœur du Temple de l'Eau# cache",                                                           "en las #profundidades del Templo del Agua# yace",                                          "#nel più profondo del Santuario dell'Acqua# puoi recuperare",                                      "in #den Tiefen# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_CRACKED_WALL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#through a crack# in the Water Temple is",                                    "le #mur fragile# du Temple de l'Eau cache",                                                    "tras una #agrietada pared# del Templo del Agua yace",                                      "#oltre una crepa#, nel Santuario dell'Acqua, un forziere contiene",                                "#hinter einer brüchigen Wand# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_LONGSHOT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#facing yourself# reveals",                                                   "se #vaincre soi-même# révèle",                                                                 "#luchar contra ti mismo# revela",                                                          "#affrontare sè stessi# procura",                                                                   "hinter einer #Selbstreflexion#, |wäre|wären|"},
        Text{"a #dark reflection# of yourself guards",                                      "son #propre reflet# cache",                                                                    "el #oscuro reflejo de ti mismo# guarda",                                                   "la #tua ombra# difende",                                                                           "nahe eines #dunklen Spiegelbilds#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Dark @# guards",                                                             "l'#Ombre de @# protège",                                                                       "#@ Oscuro# guarda",                                                                        "#@ oscuro# protegge",                                                                              "nahe #dem schwarzen @#, |wäre|wären|"}
    );


    hintTable[WATER_TEMPLE_MQ_CENTRAL_PILLAR_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in the #depths of the Water Temple# lies",                                    "le #cœur du Temple de l'Eau# cache",                                                           "en las #profundidades del Templo del Agua# yace",                                          "#nel più profondo del Santuario dell'Acqua# puoi recuperare",                                      "in #den Tiefen# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MQ_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"fire in the Water Temple unlocks a #vast gate# revealing a chest with",       "des #flammes au cœur du Temple de l'Eau# révèlent",                                            "el fuego en el Templo del Agua alza una #gran valla# con",                                 "fuochi nel Santuario dell'Acqua aprono un #grande cancello# davanti a un forziere con",            "nahe #brennender Fackeln#, hinter einem #riesigen Gatter# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MQ_LONGSHOT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#through a crack# in the Water Temple is",                                    "le #mur fragile# du Temple de l'Eau cache",                                                    "tras una #agrietada pared# del Templo del Agua yace",                                      "#oltre una crepa#, nel Santuario dell'Acqua, un forziere contiene",                                "#hinter einer gebrochenen Wand# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#fire in the Water Temple# reveals",                                          "des #flammes dans le Temple de l'Eau# révèlent",                                               "el #fuego en el Templo del Agua# revela",                                                  "#fuochi nel Santuario dell'Acqua# rivelano",                                                       "nahe #brennender Fackeln# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#sparring soldiers# in the Water Temple guard",                               "les #soldats du Temple de l'Eau# protègent",                                                   "#acabar con unos soldados# del Templo del Agua revela",                                    "#tre soldati# nel Santuario dell'Acqua difendono",                                                 "nahe der #Armee der Toten# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MORPHA_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Giant Aquatic Amoeba# holds",                                            "l'#Amibe Aquatique Géante# possède",                                                           "la #ameba acuática gigante# porta",                                                        "l'#ameba gigante# possiede",                                                                       "nahe dem #aquamöben Wassertentakel#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Morpha# holds",                                                              "#Morpha# possède",                                                                             "#Morpha# porta",                                                                           "#Morpha# possiede",                                                                                "nahe #Morpha#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_GS_FALLING_PLATFORM_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider over a waterfall# in the Water Temple holds",                       "une #Skulltula au dessus d'une cascade du Temple de l'Eau# a",                                 "una #Skulltula tras una cascada# del Templo del Agua otorga",                              "un #ragno di fianco a una cascata# nel Santuario dell'Acqua nasconde",                             "in einer #Spinne, über einem Wasserfall# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_GS_CENTRAL_PILLAR] = HintText::Exclude({
        // obscure text
        Text{"a #spider in the center of the Water Temple# holds",                          "une #Skulltula au centre du Temple de l'Eau# a",                                               "una #Skulltula en el centro del Templo del Agua# otorga",                                  "un #ragno al centro del Santuario dell'Acqua# possiede",                                           "in einer #Spinne, im Zentrum# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_GS_NEAR_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a spider protected by #rolling boulders under the lake# hides",               "une #Skulltula derrière les rochers roulants sous le lac# a",                                  "una #Skulltula protegida por rocas rodantes# bajo el lago otorga",                         "un ragno protetto da #macigni rotolanti sotto il lago# nasconde",                                  "in einer Spinne, nahe #rollender Felsen am Grund des Sees#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"a spider protected by #rolling boulders in the Water Temple# hides",          "une #Skulltula derrière les rochers roulants du Temple de l'Eau# a",                           "una #Skulltula protegida por rocas rodantes# del Templo del Agua otorga",                  "un ragno protetto da #macigni rotolanti nel Santuario dell'Acqua# nasconde",                       "in einer Spinne, nahe #rollender Felsen des Wassertempels#, |wäre|wären|"}
    );

    hintTable[WATER_TEMPLE_GS_RIVER] = HintText::Exclude({
        // obscure text
        Text{"a #spider over a river# in the Water Temple holds",                           "une #Skulltula au dessus de la rivière dans le Temple de l'Eau# a",                            "una #Skulltula sobre un río# del Templo del Agua otorga",                                  "un #ragno sopra un fiume# nel Santuario dell'Acqua nasconde",                                      "in einer #Spinne, oberhalb eines Flusses# des Wassertempels, |wäre|wären|"},
    });


    hintTable[WATER_TEMPLE_MQ_GS_BEFORE_UPPER_WATER_SWITCH] = HintText::Exclude({
        // obscure text
        Text{"#beyond a pit of lizards# is a spider holding",                               "#au-delà d'un trou à lézards# se trouve une araignée avec",                                    "#más allá de un pozo de reptiles# una Skulltula otorga",                                   "un #ragno sopra una lucertola# nel Santuario dell'Acqua difende",                                  "in einer Spinne, nahe eines #Triforce-Symbols# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MQ_GS_LIZALFOS_HALLWAY] = HintText::Exclude({
        // obscure text
        Text{"#lizards guard a spider# in the Water Temple with",                           "des #lézards protègent une Skulltula# dans le Temple de l'Eau avec",                           "unos #reptiles custodian una Skulltula# del Templo del Agua que otorga",                   "un #ragno protetto da lucertole# nel Santuario dell'Acqua nasconde",                               "in einer, #von Echsen beschützten Spinne# des Wassertempels, |wäre|wären|"},
    });

    hintTable[WATER_TEMPLE_MQ_GS_RIVER] = HintText::Exclude({
        // obscure text
        Text{"a #spider over a river# in the Water Temple holds",                           "une #Skulltula au dessus de la rivière# dans le Temple de l'Eau a",                            "una #Skulltula sobre un río# del Templo del Agua otorga",                                  "un #ragno sopra un fiume# nel Santuario dell'Acqua nasconde",                                      "in einer #Spinne, oberhalb eines Flusses# des Wassertempels, |wäre|wären|"},
    });

    /*--------------------------
    |      SPIRIT TEMPLE       |
    ---------------------------*/

    hintTable[SPIRIT_TEMPLE_CHILD_BRIDGE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a child conquers a #skull in green fire# in the Spirit Temple to reach",      "un enfant vaincra un #crâne au halo vert# dans le Temple de l'Esprit# et aura",                "el joven que #baje el puente# del Templo del Espíritu encontrará",                         "se un bambino oltrepassa un #teschio verde# nel Santuario dello Spirito raggiungerà",              "hinter einem #grünen, brennenden Schädel# des Geistertempels der Vergangenhei, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_CHILD_EARLY_TORCHES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a child can find a #caged chest# in the Spirit Temple with",                  "un enfant peut trouver un #coffre en cage# dans le Temple de l'Esprit avec",                   "un joven puede encontrar un #cofre entre rejas# del Templo del Espíritu con",              "nel Santuario dello Spirito un bambino può trovare un #forziere ingabbiato# contenente",           "in einer #eingekerkerten Truhe# des Geistertempels der Vergangenheit, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#across a pit of sand# in the Spirit Temple lies",                            "#franchir le trou tablonneux dans le Temple de l'Esprit# amène à",                             "tras un #pozo de arena# del Templo del Espíritu yace",                                     "#oltre una fossa sabbiosa# nel Santuario dello Spirito puoi trovare",                              "#hinter einer Sandgrube# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_EARLY_ADULT_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#dodging boulders to collect silver rupees# in the Spirit Temple yields",     "les #rubis argentés entourés de Rochers dans le Temple de l'Esprit# révèlent",                 "#esquivar rocas y conseguir plateadas rupias# en el Templo del Espíritu conduce a",        "chi #raccoglie rupie schivando macigni# nel Santuario dello Spirito otterrà",                      "nahe #Silber, umgeben von rollenden Felsen# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_FIRST_MIRROR_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #shadow circling reflected light# in the Spirit Temple guards",             "l'#ombre près d'un miroir# du Temple de l'Esprit protège",                                     "un #círculo de reflectante luz# del Templo del Espíritu guarda",                           "una #mano mozza attorno a luce riflessa# nel Santuario dello Spirito protegge",                    "nahe eines #Schattens, bei reflektiertem Licht# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_FIRST_MIRROR_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #shadow circling reflected light# in the Spirit Temple guards",             "l'#ombre près d'un miroir# du Temple de l'Esprit protège",                                     "un #círculo de reflectante luz# del Templo del Espíritu guarda",                           "una #mano mozza attorno a luce riflessa# nel Santuario dello Spirito protegge",                    "nahe eines #Schattens, bei reflektiertem Licht# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#before a giant statue# in the Spirit Temple lies",                           "#devant la statue# dans le Temple de l'Esprit gît",                                            "#ante una gran estatua# del Templo del Espíritu aguarda",                                  "#ai piedi di una statua gigante# nel Santuario dello Spirito puoi trovare",                        "#vor der riesigen Statue# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_CHILD_CLIMB_NORTH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#lizards in the Spirit Temple# guard",                                        "les #Lézards dans le Temple de l'Esprit# protègent",                                           "los #reptiles del Templo del Espíritu# guardan",                                           "delle #lucertole nel Santuario dello Spirito# proteggono",                                         "nahe #Echsen des Geistertempels#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_CHILD_CLIMB_EAST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#lizards in the Spirit Temple# guard",                                        "les lézards dans le Temple de l'Esprit# protègent",                                            "los #reptiles del Templo del Espíritu# guardan",                                           "delle #lucertole nel Santuario dello Spirito# proteggono",                                         "nahe #Echsen des Geistertempels#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_SUN_BLOCK_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#torchlight among Beamos# in the Spirit Temple reveals",                      "les #torches autour des Sentinelles# éclairent",                                               "las #antorchas junto a Beamos# del Templo del Espíritu revelan",                           "le #torce attorno ai Laseros# nel Santuario dello Spirito illuminano",                             "nahe #brennender Fackeln, bei Beamos# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_STATUE_ROOM_HAND_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #statue in the Spirit Temple# holds",                                       "la #statue dans le Temple de l'Esprit# tient",                                                 "una #estatua del Templo del Espíritu# esconde",                                            "una #statua gigante# nel Santuario dello Spirito tiene in mano",                                   "auf einer Hand, der #riesigen Statue des Geistertempels#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_STATUE_ROOM_NORTHEAST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"on a #ledge by a statue# in the Spirit Temple rests",                         "#haut perché près de la statue# dans le Temple de l'Esprit se trouve",                         "al #borde de una estatua# del Templo del Espíritu yace",                                   "#accanto a una statua# nel Santuario dello Spirito puoi trovare",                                  "auf einem #Vorsprung, nahe der riesigen Statue# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_NEAR_FOUR_ARMOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"those who #show the light among statues# in the Spirit Temple find",          "le #soleil près des statues# du Temple de l'Esprit cache",                                     "aquellos que #iluminen ante las estatuas# del Templo del Espíritu encontrarán",            "#riflettendo vicino a 4 statue# nel Santuario dello Spirito puoi scoprire",                        "nahe einer #lichtbedürftigen Sonne, bei Statuen# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_HALLWAY_RIGHT_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth in the Spirit Temple# reveals",                             "le #Monocle de Vérité dans le Temple de l'Esprit# révèle",                                     "el #Ojo de la Verdad# en el Templo del Espíritu revela",                                   "l'#occhio della verità nel Santuario dello Spirito# rivela",                                       "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des #Geistertempels#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_HALLWAY_LEFT_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth in the Spirit Temple# reveals",                             "le #Monocle de Vérité dans le Temple de l'Esprit# révèle",                                     "el #Ojo de la Verdad# en el Templo del Espíritu revela",                                   "l'#occhio della verità nel Santuario dello Spirito# rivela",                                       "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des #Geistertempels#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #chest engulfed in flame# in the Spirit Temple holds",                      "le #coffre enflammé# dans le Temple de l'Esprit contient",                                     "un #cofre rodeado de llamas# del Templo del Espíritu contiene",                            "un #forziere scottante# nel Santuario dello Spirito contiene",                                     "in einer #flammenden Truhe# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_TOPMOST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"those who #show the light above the Colossus# find",                          "le #soleil au sommet du Colosse# révèle",                                                      "aquellos que #iluminen en lo alto del Coloso# encontrarán",                                "#chi sa riflettere bene# in cima al colosso può trovare",                                          "nahe einer #lichtbedürftigen Sonne, an der Spitze des Kolosses#, |wäre|wären|"},
    });


    hintTable[SPIRIT_TEMPLE_MQ_ENTRANCE_FRONT_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#lying unguarded# in the Spirit Temple is",                                   "dans #l'entrée du Temple de l'Esprit# se trouve",                                              "en la #entrada del Templo del Espíritu# yace",                                             "un forziere #incustodito# all'ingresso del Santuario dello Spirito contiene",                      "in einer #unbewachten Truhe# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_ENTRANCE_BACK_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #switch in a pillar# within the Spirit Temple drops",                       "l'#interrupteur dans un pilier# du Temple de l'Esprit cache",                                  "el #interruptor de un pilar# del Templo del Espíritu revela",                              "un #interruttore in un pilastro# nel Santuario dello Spirito fa cadere",                           "nahe eines Schalters, an einer Säule des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_ENTRANCE_FRONT_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#collecting rupees through a water jet# reveals",                             "collecter les #Rubis Argentés à travers un jet d'eau# révèle",                                 "#hacerte con rupias tras un géiser# revela",                                               "#raccogliere rupie attraversando un geyser# rivela",                                               "nahe #Silber bei einem Wasserstrahl#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_ENTRANCE_BACK_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #eye blinded by stone# within the Spirit Temple conceals",                 "#l'œil derrière le rocher# dans le Temple de l'Esprit voit",                                   "#cegar a un ojo# del Templo del Espíritu revela",                                          "un #occhio coperto di pietra# nel Santuario dello Spirito nasconde",                               "nahe eines #geblendeten Auges# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"surrounded by #fire and wrappings# lies",                                     "entouré par des #flammes et bandages# se trouve",                                              "rodeado de #fuego y vendas# yace",                                                         "un #Anubi# sta appollaiato su un forziere contenente",                                             "hinter #feurigen Schnecken# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_MAP_ROOM_ENEMY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a child defeats a #gauntlet of monsters# within the Spirit Temple to find",   "l'enfant qui vainc #plusieurs monstres# dans le Temple de l'Esprit trouvera",                  "el joven que derrote #unos monstruos# del Templo del Espíritu encontrará",                 "se un bambino sconfigge #molti mostri# nel Santuario dello Spirito otterrà",                       "hinter einem #Spießrutenlauf der Jugend# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_CHILD_CLIMB_NORTH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#explosive sunlight# within the Spirit Temple uncovers",                      "un #rayon de lumière explosif# dans le Temple de l'Esprit révèle",                             "una #explosiva luz solar# del Templo del Espíritu revela",                                 "un #raggio di sole esplosivo# nel Santuario dello Spirito fa apparire",                            "nahe #explosivem Sonnenlicht# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_CHILD_CLIMB_SOUTH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#trapped by falling enemies# within the Spirit Temple is",                    "des #ennemis tombants# dans le Temple de l'Esprit protègent",                                  "#rodeado de enemigos del cielo# del Templo del Espíritu yace",                             "un #mostro che aspetta di caderti in testa# nel Santuario dello Spirito protegge",                 "nahe eines #fallenden, sehr hungrigen Monsters# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#blinding the colossus# unveils",                                             "#l'œil dans le Colosse# voit",                                                                 "#cegar al coloso# revela",                                                                 "#accecare il ginocchio del colosso# rivela",                                                       "nahe eines #geblendeten Auges# des Kolosses, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_STATUE_ROOM_LULLABY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #royal melody awakens the colossus# to reveal",                             "la #Chanson Royale éveille le Colosse# et révèle",                                             "la #melodía real que despierte al coloso# revelará",                                       "una #melodia reale risveglia il colosso# e rivela",                                                "nach #hoheitlicher Musik im Koloss#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_STATUE_ROOM_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth# finds the colossus's hidden",                              "#le Monocle de Vérité# verra dans le Colosse",                                                 "el #Ojo de la Verdad# en el Templo del Espíritu encontrará",                               "l'#occhio della verità# nel Santuario dello Spirito rivela",                                       "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des #Geistertempels#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_SILVER_BLOCK_HALLWAY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#the old hide what the young find# to reveal",                                "l'#adulte cachera ce que l'enfant trouvera# pour révéler",                                     "el #adulto esconde lo que el joven anhela#, revelando",                                    "#ciò che gli adulti nascondono e i bambini trovano# è",                                            "nahe eines, #im Alter blockierten geblendeten Auges# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_SUN_BLOCK_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#sunlight in a maze of fire# hides",                                          "#la lumière dans un labyrinthe de feu# révèle",                                                "la #luz solar de un ígneo laberinto# esconde",                                             "un #raggio di sole fra teschi infuocati# rivela",                                                  "nahe #Sonnenlicht eines feurigen Irrgartens#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_LEEVER_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#across a pit of sand# in the Spirit Temple lies",                            "franchir le trou tablonneux dans le Temple de l'Esprit# amène à",                              "#a través del pozo de arena# del Templo del Espíritu yace",                                "#oltre una fossa sabbiosa# nel Santuario dello Spirito puoi trovare",                              "#hinter einer Sandgrube# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_BEAMOS_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"where #temporal stone blocks the path# within the Spirit Temple lies",        "les #pierres temporelles# dans le Temple de l'Esprit cachent",                                 "donde los #bloques temporales bloquean# en el Templo del Espíritu yace",                   "laddove #pietre temporali bloccano la via# nel Santuario dello Spirito puoi trovare",              "hinter #Zeitportal-Steinen# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_CHEST_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #chest of double purpose# holds",                                           "le #coffre à double usage# contient",                                                          "un #cofre de doble uso# contiene",                                                         "un #forziere a duplice uso# nel Santuario dello Spirito contiene",                                 "in einer #Truhe mit mehreren Verwendungszwecken#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #temporal stone blocks the light# leading to",                              "une #pierre temporelle bloque la lumière# qui donne accès à",                                  "un #bloque temporal bloquea la luz# que conduce a",                                        "una #pietra temporale blocca la luce# che apre la via per",                                        "nahe eines, #im Licht stehenden Zeitportal-Steins#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_MIRROR_PUZZLE_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"those who #show the light above the Colossus# find",                          "le trésor invisible #au sommet du Colosse# contient",                                          "aquellos que #revelen la luz sobre el Coloso# encontrarán",                                "#chi sa riflettere bene# in cima al colosso può trovare",                                          "nahe einer #lichtbedürftigen Sonne, an der Spitze des Kolosses#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_TWINROVA_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Sorceress Sisters# hold",                                                "#les Sorcières Jumelles# possèdent",                                                           "las #hermanas hechiceras# portan",                                                         "le #sorelle megere# possiedono",                                                                   "nahe der #höllischen Hexenarmada#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Twinrova# holds",                                                            "#Twinrova# possède",                                                                           "#Birova# porta",                                                                           "#Duerova# possiede",                                                                               "nahe #Twinrova#, |wäre|wären|"}
    );

    hintTable[SPIRIT_TEMPLE_GS_HALL_AFTER_SUN_BLOCK_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a spider in the #hall of a knight# guards",                                   "une Skulltula dans #le hall d'un chevalier# protège",                                          "una #Skulltula en el salón de un guerrero# otorga",                                        "un #ragno vicino a un possente guerriero# protegge",                                               "in einer Spinne der #Halle eines Ritters#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_GS_BOULDER_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider behind a temporal stone# in the Spirit Temple yields",              "une #Skulltula derrière une pierre temporelle# du Temple de l'Esprit a",                       "una #Skulltula tras un bloque temporal# del Templo del Espíritu otorga",                   "un ragno #dietro una pietra temporale# nel Santuario dello Spirito nasconde",                      "in einer #Spinne, hinter einem Zeitportal-Stein# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_GS_LOBBY] = HintText::Exclude({
        // obscure text
        Text{"a #spider beside a statue# holds",                                            "une #Skulltula à côté d'une statue# a",                                                        "una #Skulltula junto a una estatua# del Templo del Espíritu otorga",                       "un ragno #di fianco a una statua gigante# nasconde",                                               "in einer #Spinne, nahe einer riesigen Statue#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_GS_SUN_ON_FLOOR_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider at the top of a deep shaft# in the Spirit Temple holds",            "une #Skulltula au sommet d'un puits profond# du Temple de l'Esprit a",                         "una #Skulltula en lo alto de un gran hueco# del Templo del Espíritu otorga",               "un ragno #in cima a un condotto scalabile# nel Santuario dello Spirito nasconde",                  "in einer Spinne, #an der Spitze eines tiefen Schachts# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_GS_METAL_FENCE] = HintText::Exclude({
        // obscure text
        Text{"a child defeats a #spider among bats# in the Spirit Temple to gain",          "un enfant éliminera une #araignée parmi des Saigneurs# pour obtenir",                          "el joven que derrote la #Skulltula entre murciélagos# del Templo del Espíritu hallará",    "un bambino può sconfiggere #un ragno fra i pipistrelli# nel Santuario dello Spirito per ottenere", "in einer, #von Fledermäusen umgebenen Spinne# des Geistertempels, |wäre|wären|"},
    });


    hintTable[SPIRIT_TEMPLE_MQ_GS_LEEVER_ROOM] = HintText::Exclude({
        // obscure text
        Text{"#above a pit of sand# in the Spirit Temple hides",                            "une #Skulltula au dessus du Trou Sablonneux# du Temple de l'Esprit cache",                     "una #Skulltula sobre un pozo de arena# del Templo del Espíritu otorga",                    "#sopra una fossa sabbiosa# nel Santuario dello Spirito si nasconde un ragno con",                  "in einer Spinne, #über einer Sandgrube# des Geistertempels, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_GS_NINE_THRONES_ROOM_WEST] = HintText::Exclude({
        // obscure text
        Text{"a spider in the #hall of a knight# guards",                                   "une #Skulltula dans la salle aux neuf trônes du Temple de l'Esprit# a",                        "una #Skulltula en el salón de un guerrero# otorga",                                        "un #ragno nella sala di un guerriero# nasconde",                                                   "in einer Spinne der #Halle eines Ritters#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_GS_NINE_THRONES_ROOM_NORTH] = HintText::Exclude({
        // obscure text
        Text{"a spider in the #hall of a knight# guards",                                   "une #Skulltula dans la salle aux neuf trônes du Temple de l'Esprit# a",                        "una #Skulltula en el salón de un guerrero# otorga",                                        "un #ragno nella sala di un guerriero# nasconde",                                                   "in einer Spinne der #Halle eines Ritters#, |wäre|wären|"},
    });

    hintTable[SPIRIT_TEMPLE_MQ_GS_SUN_BLOCK_ROOM] = HintText::Exclude({
        // obscure text
        Text{"#upon a web of glass# in the Spirit Temple sits a spider holding",            "une #Skulltula sur une paroi de verre# du Temple de l'Esprit a",                               "#sobre una plataforma de cristal# yace una Skulltula que otorga",                          "#sopra una tela di vetro# nel Santuario dello Spirito un ragno nasconde",                          "in einer Spinne, eines #gläsernen Netzes# des Geistertempels, |wäre|wären|"},
    });

    /*--------------------------
    |      SHADOW TEMPLE       |
    ---------------------------*/

    hintTable[SHADOW_TEMPLE_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth# pierces a hall of faces to reveal",                        "le #Monocole de Vérité# verra dans les couloirs du Temple de l'Ombre",                         "el #Ojo de la Verdad# descubrirá un pasillo de facetas con",                               "l'#occhio della verità# penetra corridoi di facce per rivelare",                                   "hinter der Halle der Gesichter, vom #Auge der Wahrheit# aufgedeckt, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_HOVER_BOOTS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #nether dweller in the Shadow Temple# holds",                               "le #spectre du Temple de l'Ombre# cache",                                                      "un #temido morador del Templo de las Sombras# guarda",                                     "un #tipo manesco nel Santuario dell'Ombra# possiede",                                              "nahe dem #unterirdischen Bewohner des Schattentempels#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Dead Hand in the Shadow Temple# holds",                                      "le #Poigneur dans le Temple de l'Ombre# cache",                                                "la #Mano Muerta del Templo de las Sombras# guarda",                                        "lo #Smaniosso nel Santuario dell'Ombra# possiede",                                                 "nahe dem #Hirnsauger des Schattentempels#, |wäre|wären|"}
    );

    hintTable[SHADOW_TEMPLE_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#mummies revealed by the Eye of Truth# guard",                                "les #Gibdos révélés par le Monocole de Vérité# protègent",                                     "las #momias reveladas por el Ojo de la Verdad# guardan",                                   "delle #mummie oltre un muro finto# nel Santuario dell'Ombra difendono",                            "nahe, vom #Auge der Wahrheit# aufgedeckten Mumien, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_EARLY_SILVER_RUPEE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#spinning scythes# protect",                                                  "les #faucheurs danseurs# du Temple de l'Ombre protègent",                                      "las #giratorias guadañas# protegen",                                                       "delle #falci rotanti# nel Santuario dell'Ombra proteggono",                                        "nahe #rotierender Sensen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_INVISIBLE_BLADES_VISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#invisible blades# guard",                                                    "les #faucheurs invisibles# du Temple de l'Ombre protègent",                                    "las #hojas invisibles# guardan",                                                           "delle #falci invisibili# nel Santuario dell'Ombra proteggono",                                     "nahe #unsichtbarer Klingen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_INVISIBLE_BLADES_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#invisible blades# guard",                                                    "les #faucheurs invisibles# du Temple de l'Ombre protègent",                                    "las #hojas invisibles# guardan",                                                           "delle #falci invisibili# nel Santuario dell'Ombra proteggono",                                     "nahe #unsichtbarer Klingen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_FALLING_SPIKES_LOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#falling spikes# block the path to",                                          "des #pics tombant du plafond# bloquent la voie vers",                                          "los #pinchos de un techo# conducen a",                                                     "la #pioggia d'acciaio# blocca la via per",                                                         "hinter #fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_FALLING_SPIKES_UPPER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#falling spikes# block the path to",                                          "des #pics tombant du plafond# bloquent la voie vers",                                          "los #pinchos de un techo# conducen a",                                                     "la #pioggia d'acciaio# blocca la via per",                                                         "hinter #fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_FALLING_SPIKES_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#falling spikes# block the path to",                                          "des #pics tombant du plafond# bloquent la voie vers",                                          "los #pinchos de un techo# conducen a",                                                     "la #pioggia d'acciaio# blocca la via per",                                                         "hinter #fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_INVISIBLE_SPIKES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #dead roam among invisible spikes# guarding",                             "les #morts qui errent parmi des pics invisibles# protègent",                                   "los #muertos que vagan por pinchos invisibles# protegen",                                  "i #morti vaganti fra spine invisibili# possiedono",                                                "in einer, #von den Toten beschützten Truhe# nahe unsichtbarer Stacheln, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_WIND_HINT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #invisible chest guarded by the dead# holds",                              "un #coffre invisible protégé par les morts# contient",                                         "un #cofre invisible custodiado por los del más allá# contiene",                            "un #forziere invisibile in una strada chiusa# nel Santuario dell'Ombra contiene",                  "in einer #unsichtbaren, von den Toten beschützten Truhe#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_AFTER_WIND_ENEMY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#mummies guarding a ferry# hide",                                             "les #Gibdos qui protègent le bâteau sinistre# cachent",                                        "las #momias que protegen un navío# esconden",                                              "delle #mummie presso un traghetto infernale# nascondono",                                          "nahe #Mumien, die eine Fähre# bewachen, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_AFTER_WIND_HIDDEN_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#mummies guarding a ferry# hide",                                             "les #Gibdos qui protègent le bâteau sinistre# cachent",                                        "las #momias que protegen un navío# esconden",                                              "delle #mummie presso un traghetto infernale# nascondono",                                          "nahe #Mumien, die eine Fähre# bewachen, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_SPIKE_WALLS_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#walls consumed by a ball of fire# reveal",                                   "des #murs réduits en cendre# révèlent",                                                        "las #paredes consumidas por una esfera ígnea# revelan",                                    "#pareti lignee deboli alla sfera ignea# coprono",                                                  "hinter #feueranfälligen Wänden#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#walls consumed by a ball of fire# reveal",                                   "des #murs réduits en cendre# révèlent",                                                        "las #paredes consumidas por una esfera ígnea# revelan",                                    "#pareti lignee deboli alla sfera ignea# coprono",                                                  "hinter #feueranfälligen Wänden#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"#inside a burning skull# lies",                                               "#dans un crâne enflammé# gît",                                                                 "en el #interior de una calavera en llamas# aguarda",                                       "da un #vaso a forma di teschio# |salta|saltano| fuori",                                            "#in einem brennenden Schädel#, |wäre|wären|"},
    });


    hintTable[SHADOW_TEMPLE_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth# pierces a hall of faces to reveal",                        "le #Monocole de Vérité# verra dans les couloirs du Temple de l'Ombre",                         "el #Ojo de la Verdad# descubre un pasillo de facetas con",                                 "l'#occhio della verità# penetra corridoi di facce per rivelare",                                   "hinter der Halle der Gesichter, vom #Auge der Wahrheit# aufgedeckt, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_HOVER_BOOTS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #nether dweller in the Shadow Temple# holds",                               "le #spectre du Temple de l'Ombre# cache",                                                      "un #temido morador del Templo de las Sombras# guarda",                                     "un #tipo manesco nel Santuario dell'Ombra# possiede",                                              "nahe dem #unterirdischen Bewohner des Schattentempels#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Dead Hand in the Shadow Temple# holds",                                      "le #Poigneur dans le Temple de l'Ombre# cache",                                                "la #Mano Muerta del Templo de las Sombras# guarda",                                        "lo #Smaniosso nel Santuario dell'Ombra# possiede",                                                 "nahe dem #Hirnsauger des Schattentempels#, |wäre|wären|"}
    );

    hintTable[SHADOW_TEMPLE_MQ_EARLY_GIBDOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#mummies revealed by the Eye of Truth# guard",                                "les #Gibdos révélés par le Monocole de Vérité# protègent",                                     "las #momias reveladas por el Ojo de la Verdad# guardan",                                   "delle #mummie oltre un muro finto# nel Santuario dell'Ombra difendono",                            "nahe, vom #Auge der Wahrheit# aufgedeckten Mumien, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#spinning scythes# protect",                                                  "les #faucheurs danseurs# du Temple de l'Ombre protègent",                                      "las #giratorias guadañas# protegen",                                                       "delle #falci rotanti# nel Santuario dell'Ombra proteggono",                                        "nahe #rotierender Sensen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_BEAMOS_SILVER_RUPEES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#collecting rupees in a vast cavern# within the Shadow Temple unveils",       "#collecter les rubis argentés au sein d'une grande caverne# dans le Temple de l'Ombre donne",  "hacerte con las #rupias en una gran caverna# del Templo de las Sombras revela",            "#raccogliere rupie in una vasta caverna# nel Santuario dell'Ombra rivela",                         "nahe Silber, einer weitläufigen Höhle des Schattentempels, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_FALLING_SPIKES_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#falling spikes# block the path to",                                          "des #pics tombant du plafond# bloquent la voie vers",                                          "los #pinchos de un techo# conducen a",                                                     "la #pioggia d'acciaio# blocca la via per",                                                         "hinter #fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_FALLING_SPIKES_LOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#falling spikes# block the path to",                                          "des #pics tombant du plafond# bloquent la voie vers",                                          "los #pinchos de un techo# conducen a",                                                     "la #pioggia d'acciaio# blocca la via per",                                                         "hinter #fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_FALLING_SPIKES_UPPER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#falling spikes# block the path to",                                          "des #pics tombant du plafond# bloquent la voie vers",                                          "los #pinchos de un techo# conducen a",                                                     "la #pioggia d'acciaio# blocca la via per",                                                         "hinter #fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_INVISIBLE_SPIKES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #dead roam among invisible spikes# guarding",                             "les #morts qui errent parmi des pics invisibles# protègent",                                   "los #muertos que vagan por pinchos invisibles# protegen",                                  "i #morti vaganti fra spine invisibili# possiedono",                                                "in einer, #von den Toten beschützten Truhe#, nahe unsichtbarer Stacheln, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#walls consumed by a ball of fire# reveal",                                   "des #murs réduits en cendre# révèlent",                                                        "las #paredes consumidas por una esfera ígnea# revelan",                                    "#pareti lignee deboli alla sfera ignea# coprono",                                                  "hinter #feueranfälligen Wänden#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_SPIKE_WALLS_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#walls consumed by a ball of fire# reveal",                                   "des #murs réduits en cendre# révèlent",                                                        "las #paredes consumidas por una esfera ígnea# revelan",                                    "#pareti lignee deboli alla sfera ignea# coprono",                                                  "hinter #feueranfälligen Wänden#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_STALFOS_ROOM_CHEST] = HintText::Exclude({
        // obscure text
        Text{"near an #empty pedestal# within the Shadow Temple lies",                      "près d'un #piédestal vide# du Temple de l'Ombre se trouve",                                    "cerca de un #vacío pedestal# del Templo de las Sombras yace",                              "vicino a un #piedistallo vuoto# nel Santuario dell'Ombra puoi trovare",                            "nahe eines #leeren Podests# des Schattentempels, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_INVISIBLE_BLADES_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#invisible blades# guard",                                                    "les #faucheurs invisibles# du Temple de l'Ombre protègent",                                    "unas #hojas invisibles# guardan",                                                          "delle #falci invisibili# nel Santuario dell'Ombra proteggono",                                     "nahe #unsichtbarer Klingen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_INVISIBLE_BLADES_VISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#invisible blades# guard",                                                    "les #faucheurs invisibles# du Temple de l'Ombre protègent",                                    "unas #hojas invisibles# guardan",                                                          "delle #falci invisibili# nel Santuario dell'Ombra proteggono",                                     "nahe #unsichtbarer Klingen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_WIND_HINT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #invisible chest guarded by the dead# holds",                              "un #coffre invisible protégé par les morts# contient",                                         "un #cofre invisible custodiado por los del más allá# contiene",                            "un #forziere invisibile in una strada chiusa# nel Santuario dell'Ombra contiene",                  "in einer #unsichtbaren, von den Toten beschützten Truhe#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_AFTER_WIND_HIDDEN_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#mummies guarding a ferry# hide",                                             "les #Gibdos qui protègent le bâteau sinistre# cachent",                                        "las #momias que protegen un navío# esconden",                                              "delle #mummie presso un traghetto infernale# nascondono",                                          "nahe #Mumien, die eine Fähre# bewachen, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_AFTER_WIND_ENEMY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#mummies guarding a ferry# hide",                                             "les #Gibdos qui protègent le bâteau sinistre# cachent",                                        "las #momias que protegen un navío# esconden",                                              "delle #mummie presso un traghetto infernale# nascondono",                                          "nahe #Mumien, die eine Fähre# bewachen, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_NEAR_SHIP_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#caged near a ship# lies",                                                    "#dans une cage près du bâteau sinistre# attend",                                               "#entre rejas al lado de un navío# yace",                                                   "#in una gabbia vicino a un traghetto infernale# puoi trovare",                                     "in einem #Käfig, nahe eines Schiffes#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"#behind three burning skulls# lies",                                          "#derrière trois crânes enflammés# se cache",                                                   "tras #tres ardientes calaveras# yace",                                                     "#dietro tre vasi a forma di teschio# puoi trovare",                                                "hinter #drei brennenden Schädeln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_BONGO_BONGO_HEART] = HintText::Exclude({
        // obscure text
        Text{"the #Phantom Shadow Beast# holds",                                            "le #Monstre de l'Ombre# possède",                                                              "la #alimaña oscura espectral# porta",                                                      "la #bestia delle tenebre# possiede",                                                               "nahe der #bestialischen Schattenmonstrosität#, |wäre|wären|"},
    }, {
    },
        // clear text
        Text{"#Bongo Bongo# holds",                                                         "#Bongo Bongo# possède",                                                                        "#Bongo Bongo# porta",                                                                      "#Bongo Bongo# possiede",                                                                           "nahe #Bongo Bongo#, |wäre|wären|"}
    );

    hintTable[SHADOW_TEMPLE_GS_SINGLE_GIANT_POT] = HintText::Exclude({
        // obscure text
        Text{"#beyond a burning skull# lies a spider with",                                 "une #Skulltula derrière un crâne enflammé# a",                                                 "#tras una ardiente calavera# yace una Skulltula que otorga",                               "#dietro un vaso a forma di teschio# si nasconde un ragno con",                                     "in einer Spinne hinter #einem brennenden Schädel#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_GS_FALLING_SPIKES_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider beyond falling spikes# holds",                                      "une #Skulltula au delà des pics tombant du plafond# a",                                        "una #Skulltula tras los pinchos del techo# otorga",                                        "un #ragno oltre la pioggia d'acciaio# nasconde",                                                   "in einer #Spinne hinter fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_GS_TRIPLE_GIANT_POT] = HintText::Exclude({
        // obscure text
        Text{"#beyond three burning skulls# lies a spider with",                            "une #Skulltula derrière trois crânes enflammés# a",                                            "#tras tres ardientes calaveras# yace una Skulltula que otorga",                            "#oltre tre vasi a forma di teschio# si nasconde un ragno con",                                     "in einer Spinne hinter #drei brennenden Schädeln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_GS_LIKE_LIKE_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a spider guarded by #invisible blades# holds",                                "une #Skulltula protégée par les faucheurs invisibles# a",                                      "una #Skulltula custodiada por hojas invisibles# otorga",                                   "un ragno protetto da #falci invisibili# nel Santuario dell'Ombra nasconde",                        "in einer Spinne, nahe #unsichtbarer Klingen#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_GS_NEAR_SHIP] = HintText::Exclude({
        // obscure text
        Text{"a spider near a #docked ship# hoards",                                        "une Skulltula près d'un #bâteau sinistre# a",                                                  "una #Skulltula cercana a un navío# otorga",                                                "un ragno vicino a un #traghetto infernale# nasconde",                                              "in einer Spinne, nahe eines #anlegenden Schiffes#, |wäre|wären|"},
    });


    hintTable[SHADOW_TEMPLE_MQ_GS_FALLING_SPIKES_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider beyond falling spikes# holds",                                      "une #Skulltula au delà des pics tombant du plafond# a",                                        "una #Skulltula tras los pinchos del techo# otorga",                                        "un #ragno oltre la pioggia d'acciaio# nasconde",                                                   "in einer #Spinne hinter fallenden Stacheln#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_GS_WIND_HINT_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider amidst roaring winds# in the Shadow Temple holds",                  "une #Skulltula au cœur des vents du Temple de l'Ombre# a",                                     "una #Skulltula entre ventarrones# del Templo de las Sombras otorga",                       "un ragno #oltre i 20# nel Santuario dell'Ombra nasconde",                                          "in einer #Spinne, nahe tosenden Winden# des Schattentempels, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_GS_AFTER_WIND] = HintText::Exclude({
        // obscure text
        Text{"a #spider beneath gruesome debris# in the Shadow Temple hides",               "une #Skulltula sous des débris du Temple de l'Ombre# a",                                       "una #Skulltula bajo unos horripilantes escombros# del Templo de las Sombras otorga",       "un ragno si nasconde #sotto i detriti# nel Santuario dell'Ombra tenendo",                          "in einer #Spinne unter grausigen Trümmern# des Schattentempels, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_GS_AFTER_SHIP] = HintText::Exclude({
        // obscure text
        Text{"a #fallen statue# reveals a spider with",                                     "une #statue écroulée# révèle une Skulltula avec",                                              "una #estatua caída# revelará una Skulltula que otorgue",                                   "nel Santuario dell'Ombra una #statua cade# vicino a un ragno con",                                 "in einer Spinne, nahe einer #umgefallenen Statue#, |wäre|wären|"},
    });

    hintTable[SHADOW_TEMPLE_MQ_GS_NEAR_BOSS] = HintText::Exclude({
        // obscure text
        Text{"a #suspended spider# guards",                                                 "une #Skulltula suspendue dans le vide# a",                                                     "una #Skulltula flotante# del Templo de las Sombras otorga",                                "un #ragno fluttuante# nel Santuario dell'Ombra nasconde",                                          "in der #einsamen Spinne# des Schattentempels, |wäre|wären|"},
    });

    /*--------------------------
    |    BOTTOM OF THE WELL    |
    ---------------------------*/

    hintTable[BOTTOM_OF_THE_WELL_FRONT_LEFT_FAKE_WALL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth in the well# reveals",                                      "le #Monocle de Vérité dans le Puits# révèle",                                                  "el #Ojo de la Verdad en el pozo# revela",                                                  "l'#occhio della verità nel pozzo# rivela",                                                         "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_FRONT_CENTER_BOMBABLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#gruesome debris# in the well hides",                                         "des #débris dans le Puits# cachent",                                                           "unos #horripilantes escombros# del pozo esconden",                                         "#dei detriti nel pozzo# coprono",                                                                  "unter #grausigen Trümmern# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_RIGHT_BOTTOM_FAKE_WALL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth in the well# reveals",                                      "le #Monocle de Vérité dans le Puits# révèle",                                                  "el #Ojo de la Verdad en el pozo# revela",                                                  "l'#occhio della verità nel pozzo# rivela",                                                         "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #hidden entrance to a cage# in the well leads to",                          "un #chemin caché vers une cage# du Puits mène à",                                              "la #entrada oculta de una celda# del pozo conduce a",                                      "una #gabbia con un ingresso nascosto# nel pozzo contiene",                                         "in einem #Käfig# des Brunnens, #mit verstecktem Eingang#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_CENTER_SKULLTULA_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #spider guarding a cage# in the well protects",                             "l'#araignée dans la cage# du Puits protège",                                                   "una #araña protegiendo una celda# del pozo guarda",                                        "un #ragno in una gabbia# nel pozzo protegge",                                                      "in einem, #von einer Spinne beschützten Käfig# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_BACK_LEFT_BOMBABLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#gruesome debris# in the well hides",                                         "des #débris dans le Puits# cachent",                                                           "unos #horripilantes escombros# del pozo esconden",                                         "#dei detriti nel pozzo# coprono",                                                                  "unter #grausigen Trümmern# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#Dead Hand's invisible secret# is",                                           "le #trésor invisible du Poigneur# est",                                                        "el #secreto invisible de la Mano Muerta# esconde",                                         "il #segreto invisibile dello Smaniosso# è",                                                        "#Hirnsaugers unsichtbares Geheimnis#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_UNDERWATER_FRONT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #royal melody in the well# uncovers",                                       "la #Mélodie Royale dans le Puits# révèle",                                                     "una #melodía real en el pozo# revela",                                                     "una #melodia regale# nel pozzo asciuga",                                                           "nach #hoheitlicher Musik im Brunnen#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_UNDERWATER_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #royal melody in the well# uncovers",                                       "la #Mélodie Royale dans le Puits# révèle",                                                     "una #melodía real en el pozo# revela",                                                     "una #melodia regale# nel pozzo asciuga",                                                           "nach #hoheitlicher Musik im Brunnen#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"in the #depths of the well# lies",                                            "dans les #profondeurs du Puits# se trouve",                                                    "en las #profundidades del pozo# yace",                                                     "nelle #profondità del pozzo# puoi trovare",                                                        "in den #Tiefen des Brunnens#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_FIRE_KEESE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#perilous pits# in the well guard the path to",                               "#trois trous# dans le Puits sont sur le chemin vers",                                          "#peligrosos fosos# del pozo conducen a",                                                   "fra #pericolose fosse# nel pozzo puoi trovare",                                                    "nahe #gefährlicher Schächte# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_LIKE_LIKE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#locked in a cage# in the well lies",                                         "#dans une cage# du Puits attend",                                                              "#entre rejas# en el pozo yace",                                                            "una #gabbia chiusa# nel pozzo contiene",                                                           "in einem #verschlossenen Käfig# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"#inside a coffin# hides",                                                     "dans #un cercueil# demeure",                                                                   "en el #interior de un ataúd# yace",                                                        "#dentro una bara# puoi trovare",                                                                   "in einem #Sarg#, |wäre|wären|"},
    });


    hintTable[BOTTOM_OF_THE_WELL_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #royal melody in the well# uncovers",                                       "la #Mélodie Royale dans le Puits# révèle",                                                     "una #melodía real en el pozo# revela",                                                     "una #melodia regale# nel pozzo sblocca",                                                           "nach #hoheitlicher Musik im Brunnen#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_MQ_LENS_OF_TRUTH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"an #army of the dead# in the well guards",                                    "l'#armée des morts# dans le Puits protège",                                                    "un #ejército del más allá# del pozo guarda",                                               "una #famiglia di morti# nel pozzo protegge",                                                       "nahe der #Armee der Toten# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_MQ_DEAD_HAND_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"#Dead Hand's explosive secret# is",                                           "le #secret explosif du Poigneur# est",                                                         "el #explosivo secreto de la Mano Muerta# esconde",                                         "il #segreto sepolto dello Smaniosso# è",                                                           "#Hirnsaugers explosives Geheimnis#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_MQ_EAST_INNER_ROOM_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"an #invisible path in the well# leads to",                                    "un #chemin caché dans le Puits# amène à",                                                      "un #camino invisible del pozo# conduce a",                                                 "un #sentiero invisibile# nel pozzo porta verso",                                                   "hinter einem #unsichtbaren Pfad des Brunnens#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_GS_LIKE_LIKE_CAGE] = HintText::Exclude({
        // obscure text
        Text{"a #spider locked in a cage# in the well holds",                               "une #Skulltula dans une cage au fond du Puits# a",                                             "una #Skulltula enjaulada# del pozo otorga",                                                "un #ragno prigioniero# nel pozzo possiede",                                                        "in der #Spinne, eines verschlossenen Käfigs# des Brunnens#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_GS_EAST_INNER_ROOM] = HintText::Exclude({
        // obscure text
        Text{"an #invisible path in the well# leads to",                                    "un #chemin caché dans le Puits# amène à",                                                      "un #camino invisible del pozo# conduce a una Skulltula que otorga",                        "un #sentiero invisibile# nel pozzo porta verso un ragno con",                                      "hinter einem #unsichtbaren Pfad des Brunnens#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_GS_WEST_INNER_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider locked in a crypt# within the well guards",                         "une #Skulltula enfermée dans une crypte# au sein du Puits a",                                  "una #Skulltula encerrada en una cripta# del pozo otorga",                                  "un #ragno in una cripta# nel pozzo possiede",                                                      "in der #Spinne, einer verschlossenen Krypta# des Brunnens, |wäre|wären|"},
    });


    hintTable[BOTTOM_OF_THE_WELL_MQ_GS_BASEMENT] = HintText::Exclude({
        // obscure text
        Text{"a #gauntlet of invisible spiders# protects",                                  "un groupe d'#araignées invisibles# protège",                                                   "unas #arañas invisibles# custodian una Skulltula que otorga",                              "un #ragno protetto da una sfilza di simili invisibili# nel pozzo possiede",                        "in der Spinne hinter einem #arachniden Spießrutenlauf#, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_MQ_GS_COFFIN_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider crawling near the dead# in the well holds",                         "une #Skulltula rampant près des morts# dans le Puits a",                                       "una #Skulltula junto a los muertos# del pozo otorga",                                      "un #ragno dietro alle bare# nel pozzo nasconde",                                                   "in der #Spinne, nahe Särgen# des Brunnens, |wäre|wären|"},
    });

    hintTable[BOTTOM_OF_THE_WELL_MQ_GS_WEST_INNER_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider locked in a crypt# within the well guards",                         "une #Skulltula enfermée dans une crypte# au sein du Puits a",                                  "una #Skulltula encerrada en una cripta# del pozo otorga",                                  "un #ragno in una cripta# nel pozzo possiede",                                                      "in der #Spinne, einer verschlossenen Krypta# des Brunnens, |wäre|wären|"},
    });

    /*--------------------------
    |        ICE CAVERN        |
    ---------------------------*/

    hintTable[ICE_CAVERN_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#winds of ice# surround",                                                     " des #vents de glace# entourent",                                                              "#heladas borrascas# rodean",                                                               "dei #soffi gelati# circondano",                                                                    "von #eisigen Winden umgeben#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #wall of ice# protects",                                                    "un #mur de glace# protège",                                                                    "una #gélida pared# protege",                                                               "un #muro di ghiaccio# cela",                                                                       "hinter einer #Wand aus Eis#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_IRON_BOOTS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #monster in a frozen cavern# guards",                                       "un #monstre dans une caverne de glace# protège",                                               "un #monstruo de una helada caverna# guarda",                                               "un #guardiano in una caverna ghiacciata# protegge",                                                "nahe eines #Monsters einer gefrorenen Höhle#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"a #wall of ice# protects",                                                    "un #mur de glace# protège",                                                                    "una #gélida pared# protege",                                                               "un #muro di ghiaccio# cela",                                                                       "hinter einer #Wand aus Eis#, |wäre|wären|"},
    });


    hintTable[ICE_CAVERN_MQ_IRON_BOOTS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #monster in a frozen cavern# guards",                                       "un #monstre dans une caverne de glace# protège",                                               "un #monstruo de una helada caverna# guarda",                                               "un #guardiano in una caverna ghiacciata# protegge",                                                "nahe eines #Monsters einer gefrorenen Höhle#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_MQ_COMPASS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#winds of ice# surround",                                                     "des #vents de glace# entourent",                                                               "#heladas borrascas# rodean",                                                               "dei #soffi gelati# circondano",                                                                    "von #eisigen Winden umgeben#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_MQ_MAP_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #wall of ice# protects",                                                    "#un mur de glace# protège",                                                                    "una #gélida pared# protege",                                                               "un #muro di ghiaccio# cela",                                                                       "hinter einer #Wand aus Eis#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_MQ_FREESTANDING_POH] = HintText::Exclude({
        // obscure text
        Text{"#winds of ice# surround",                                                     " des #vents de glace# entourent",                                                              "#heladas borrascas# rodean",                                                               "dei #soffi gelati# circondano",                                                                    "von #eisigen Winden umgeben#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_GS_PUSH_BLOCK_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider above icy pits# holds",                                             "une #Skulltula au-dessus d'un goufre glacial# a",                                              "una #Skulltula sobre gélidos vacíos# otorga",                                              "un ragno #sopra un crepaccio nel ghiaccio# cela",                                                  "in einer #Spinne über eisigen Abgründen#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_GS_SPINNING_SCYTHE_ROOM] = HintText::Exclude({
        // obscure text
        Text{"#spinning ice# guards a spider holding",                                      "deux #lames de glace# protègent une Skulltula avec",                                           "unos #témpanos giratorios# custodian una Skulltula que otorga",                            "un ragno #sopra un tritaghiaccio# nasconde",                                                       "in einer, von #rotierendem Eis# geschützten Spinne, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_GS_HEART_PIECE_ROOM] = HintText::Exclude({
        // obscure text
        Text{"a #spider behind a wall of ice# hides",                                       "une #Skulltula derrière un mur de glace# a",                                                   "una #Skulltula tras una gélida pared# otorga",                                             "un #ragno dietro un muro di ghiaccio# cela",                                                       "in einer #Spinne hinter einer Wand aus Eis#, |wäre|wären|"},
    });


    hintTable[ICE_CAVERN_MQ_GS_SCARECROW] = HintText::Exclude({
        // obscure text
        Text{"a #spider above icy pits# holds",                                             "une #Skulltula au-dessus d'un goufre glacial# a",                                              "una #Skulltula sobre gélidos vacíos# otorga",                                              "un ragno #presso un crepaccio nel ghiaccio# cela",                                                 "in einer #Spinne über eisigen Abgründen#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_MQ_GS_ICE_BLOCK] = HintText::Exclude({
        // obscure text
        Text{"a #web of ice# surrounds a spider with",                                      "une #toile de glace# recouvre une Skulltula avec",                                             "una #gélida red# rodea a una Skulltula que otorga",                                        "un #ragno in una tela di ghiaccio# si nasconde con",                                               "in einer Spinne in #eisigen Spinnenweben#, |wäre|wären|"},
    });

    hintTable[ICE_CAVERN_MQ_GS_RED_ICE] = HintText::Exclude({
        // obscure text
        Text{"a #spider in fiery ice# hoards",                                              "une #Skulltula figée dans de la glace ardente# garde",                                         "una #Skulltula tras un ardiente hielo# otorga",                                            "un ragno nel #fuoco ghiacciato# ha",                                                               "in einer #Spinne in feurigem Eis#, |wäre|wären|"},
    });

    /*--------------------------
    | GERUDO TRAINING GROUNDS  |
    ---------------------------*/

    hintTable[GERUDO_TRAINING_GROUNDS_LOBBY_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #blinded eye in the Gerudo Training Grounds# drops",                        "l'#œil dans le Gymnase Gerudo# voit",                                                          "#cegar un ojo en el Centro de Instrucción Gerudo# revela",                                 "un #occhio accecato nella zona di addestramento Gerudo# mostra",                                   "nahe eines #geblendeten Auges# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_LOBBY_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #blinded eye in the Gerudo Training Grounds# drops",                        "l'#œil dans le Gymnase Gerudo# voit",                                                          "#cegar un ojo en el Centro de Instrucción Gerudo# revela",                                 "un #occhio accecato nella zona di addestramento Gerudo# mostra",                                   "nahe eines #geblendeten Auges# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_STALFOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#soldiers walking on shifting sands# in the Gerudo Training Grounds guard",   "les #soldats marchant sur les sables mouvants# dans le Gymnase Gerudo protègent",              "#soldados en resbaladizas arenas# del Centro de Instrucción Gerudo protegen",              "addestrarsi combattendo #soldati sulla sabbia# procura",                                           "nahe, auf #Treibsand laufenden Soldaten# des Training der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_BEAMOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reptilian warriors# in the Gerudo Training Grounds protect",                 "les #guerriers lézards# dans le Gymnase Gerudo protègent",                                     "#unos escamosos guerreros# del Centro de Instrucción Gerudo protegen",                     "addestrarsi combattendo #rettili guerrieri# procura",                                              "nahe #reptilen Kriegern# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HIDDEN_CEILING_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth# in the Gerudo Training Grounds reveals",                   "le #Monocle de Vérité# dans le Gymnase Gerudo révèle",                                         "el #Ojo de la Verdad# en el Centro de Instrucción Gerudo revela",                          "l'#occhio della verità nella zona di addestramento Gerudo# mostra la via per",                     "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MAZE_PATH_FIRST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the first prize of #the thieves' training# is",                               "le #premier prix# du Gymnase Gerudo est",                                                      "el primer premio de la #instrucción bandida# se trata de",                                 "la prima ricompensa dell'#allenamento dei ladri# è",                                               "der #erste Preis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MAZE_PATH_SECOND_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the second prize of #the thieves' training# is",                              "le #deuxième prix# du Gymnase Gerudo est",                                                     "el segundo premio de la #instrucción bandida# se trata de",                                "la seconda ricompensa dell'#allenamento dei ladri# è",                                             "der #zweite Preis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MAZE_PATH_THIRD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the third prize of #the thieves' training# is",                               "le #troisième prix# du Gymnase Gerudo est",                                                    "el tercer premio de la #instrucción bandida# se trata de",                                 "la terza ricompensa dell'#allenamento dei ladri# è",                                               "der #dritte Preis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MAZE_RIGHT_CENTRAL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Song of Time# in the Gerudo Training Grounds leads to",                  "le #Chant du Temps# révèle dans le Gymnase Gerudo",                                            "la #Canción del Tiempo# en el Centro de Instrucción Gerudo conduce a",                     "la #Canzone del tempo# nella zona di addestramento Gerudo apre la via per",                        "nach der #Hymne der Zeit# beim Training der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MAZE_RIGHT_SIDE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Song of Time# in the Gerudo Training Grounds leads to",                  "le #Chant du Temps# révèle dans le Gymnase Gerudo",                                            "la #Canción del Tiempo# en el Centro de Instrucción Gerudo conduce a",                     "la #Canzone del tempo# nella zona di addestramento Gerudo apre la via per",                        "nach der #Hymne der Zeit# beim Training der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HAMMER_ROOM_CLEAR_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#fiery foes# in the Gerudo Training Grounds guard",                           "les #ennemis de feu# du Gymnase Gerudo protègent",                                             "unos #flamígeros enemigos# del Centro de Instrucción Gerudo guardan",                      "addestrarsi #combattendo nemici di fuoco# procura",                                                "nahe #feurigen Feinden# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HAMMER_ROOM_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#engulfed in flame# where thieves train lies",                                "le #trésor enflammé# du Gymnase Gerudo est",                                                   "donde entrenan las bandidas #entre llamas# yace",                                          "un forziere #circondato di fiamme# dove i ladri si addestrano contiene",                           "in einer #flammenden Truhe# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_EYE_STATUE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"thieves #blind four faces# to find",                                          "les voleurs #aveugleront quatre visages# pour trouver",                                        "las bandidas #ciegan cuatro bustos# para hallar",                                          "addestrarsi #accecando statue# procura",                                                           "nahe #vier geblendeter Augen#, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_NEAR_SCARECROW_CHEST] = HintText::Exclude({
        // obscure text
        Text{"thieves #blind four faces# to find",                                          "les voleurs #aveugleront quatre visages# pour trouver",                                        "las bandidas #ciegan cuatro bustos# para hallar",                                          "addestrarsi #accecando statue# procura",                                                           "nahe #vier geblendeter Augen#, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_BEFORE_HEAVY_BLOCK_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#before a block of silver# thieves can find",                                 "#près d'un bloc argenté#, les voleurs peuvent trouver",                                        "#ante un plateado bloque# las bandidas hallan",                                            "addestrarsi #di fronte a un blocco d'argento# procura",                                            "vor einem #silbernen Block# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HEAVY_BLOCK_FIRST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #feat of strength# rewards thieves with",                                   "une #démonstration de force# récompense les voleurs avec",                                     "una #hazaña de fuerza# premia a las bandidas con",                                         "addestrarsi #spingendo un blocco d'argento# procura",                                              "hinter einem #Kraftakt# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HEAVY_BLOCK_SECOND_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #feat of strength# rewards thieves with",                                   "une #démonstration de force# récompense les voleurs avec",                                     "una #hazaña de fuerza# premia a las bandidas con",                                         "addestrarsi #spingendo un blocco d'argento# procura",                                              "hinter einem #Kraftakt# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HEAVY_BLOCK_THIRD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #feat of strength# rewards thieves with",                                   "une #démonstration de force# récompense les voleurs avec",                                     "una #hazaña de fuerza# premia a las bandidas con",                                         "addestrarsi #spingendo un blocco d'argento# procura",                                              "hinter einem #Kraftakt# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_HEAVY_BLOCK_FOURTH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #feat of strength# rewards thieves with",                                   "une #démonstration de force# récompense les voleurs avec",                                     "una #hazaña de fuerza# premia a las bandidas con",                                         "addestrarsi #spingendo un blocco d'argento# procura",                                              "hinter einem #Kraftakt# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"the #Song of Time# in the Gerudo Training Grounds leads to",                  "le #Chant du Temps# dans le Gymnase Gerudo donne accès à",                                     "la #Canción del Tiempo# en el Centro de Instrucción Gerudo conduce a",                     "la #Canzone del tempo# nella zona di addestramento Gerudo apre la via per",                        "nach der #Hymne der Zeit# beim Training der Diebe, |wäre|wären|"},
    });


    hintTable[GERUDO_TRAINING_GROUNDS_MQ_LOBBY_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#thieves prepare for training# with",                                         "les #voleurs se préparent à l'entraînement# avec",                                             "las #bandidas se instruyen# con",                                                          "i #ladri si preparano all'addestramento# con",                                                     "vor dem Training der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_LOBBY_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#thieves prepare for training# with",                                         "les #voleurs se préparent à l'entraînement# avec",                                             "las #bandidas se instruyen# con",                                                          "i #ladri si preparano all'addestramento# con",                                                     "vor dem Training der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_FIRST_IRON_KNUCKLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#soldiers walking on shifting sands# in the Gerudo Training Grounds guard",   "les #soldats marchant sur les sables mouvants# dans le Gymnase Gerudo protègent",              "#soldados en resbaladizas arenas# del Centro de Instrucción Gerudo protegen",              "addestrarsi combattendo un #soldato sulla sabbia# procura",                                        "nahe, auf #Treibsand laufenden Soldaten# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_BEFORE_HEAVY_BLOCK_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#before a block of silver# thieves can find",                                 "#près d'un bloc argenté# les voleurs peuvent trouver",                                         "#ante un plateado bloque# las bandidas hallan",                                            "addestrarsi #di fronte a un blocco d'argento# procura",                                            "vor einem #silbernen Block# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_EYE_STATUE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"thieves #blind four faces# to find",                                          "les voleurs #aveugleront quatre visages# pour trouver",                                        "las bandidas #ciegan cuatro bustos# para hallar",                                          "addestrarsi #accecando statue# procura",                                                           "nahe #vier geblendeter Augen#, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_FLAME_CIRCLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#engulfed in flame# where thieves train lies",                                "le #trésor enflammé# du Gymnase Gerudo est",                                                   "donde entrenan las bandidas #entre llamas# yace",                                          "un forziere #circondato di fiamme# dove i ladri si addestrano contiene",                           "in einer #flammenden Truhe# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_SECOND_IRON_KNUCKLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#fiery foes# in the Gerudo Training Grounds guard",                           "les #ennemis de feu# du Gymnase Gerudo protègent",                                             "unos #flamígeros enemigos# del Centro de Instrucción Gerudo guardan",                      "addestrarsi #combattendo nemici di fuoco# procura",                                                "nahe #feurigen Feinden# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_DINOLFOS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reptilian warriors# in the Gerudo Training Grounds protect",                 "les #guerriers lézards# dans le Gymnase Gerudo protègent",                                     "#unos escamosos guerreros# del Centro de Instrucción Gerudo protegen",                     "addestrarsi combattendo #rettili guerrieri# procura",                                              "nahe #reptilen Kriegern# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_MAZE_RIGHT_CENTRAL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #path of fire# leads thieves to",                                           "un #chemin enflammé# guide les voleurs vers",                                                  "un #camino de fuego# conduce a las bandidas a",                                            "il #mare di fuoco# porta i ladri verso",                                                           "hinter einem #feurigen Pfad# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_MAZE_PATH_FIRST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the first prize of #the thieves' training# is",                               "le #premier prix# du Gymnase Gerudo est",                                                      "el primer premio de la #instrucción bandida# se trata de",                                 "la prima ricompensa dell'#allenamento dei ladri# è",                                               "der #erste Preis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_MAZE_RIGHT_SIDE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #path of fire# leads thieves to",                                           "un #chemin enflammé# guide les voleurs vers",                                                  "un #camino de fuego# conduce a las bandidas a",                                            "il #mare di fuoco# porta i ladri verso",                                                           "hinter einem #feurigen Pfad# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_MAZE_PATH_THIRD_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the third prize of #the thieves' training# is",                               "le #troisième prix# du Gymnase Gerudo est",                                                    "el tercer premio de la #instrucción bandida# se trata de",                                 "la terza ricompensa dell'#allenamento dei ladri# è",                                               "der #dritte Preis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_MAZE_PATH_SECOND_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the second prize of #the thieves' training# is",                              "le #deuxième prix# du Gymnase Gerudo est",                                                     "el segundo premio de la #instrucción bandida# se trata de",                                "la seconda ricompensa dell'#allenamento dei ladri# è",                                             "der #zweite Preis# des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_HIDDEN_CEILING_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Eye of Truth# in the Gerudo Training Grounds reveals",                   "le #Monocle de Vérité# dans le Gymnase Gerudo révèle",                                         "el #Ojo de la Verdad# en el Centro de Instrucción Gerudo revela",                          "l'#occhio della verità nella zona di addestramento Gerudo# mostra la via per",                     "ein, vom #Auge der Wahrheit# aufgedecktes Geheimnis des Trainings der Diebe, |wäre|wären|"},
    });

    hintTable[GERUDO_TRAINING_GROUNDS_MQ_HEAVY_BLOCK_CHEST] = HintText::Exclude({
        // obscure text
        Text{"a #feat of strength# rewards thieves with",                                   "une #démonstration de force# récompense les voleurs avec",                                     "una #hazaña de fuerza# premia a las bandidas con",                                         "addestrarsi #spingendo un blocco d'argento# procura",                                              "hinter einem #Kraftakt# des Trainings der Diebe, |wäre|wären|"},
    });

    /*--------------------------
    |      GANONS CASTLE       |
    ---------------------------*/

    hintTable[GANONS_TOWER_BOSS_KEY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #Evil King# hoards",                                                      "le #Roi du Mal# possède",                                                                      "el #Rey del Mal# acapara",                                                                 "il #re del male# custodisce",                                                                      "der Schatz vom #Großmeister des Bösen#, |wäre|wären|"},
    });


    hintTable[GANONS_CASTLE_FOREST_TRIAL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the wilds# holds",                                               "l'#Épreuve de la Forêt# contient",                                                             "la #prueba de la naturaleza# brinda",                                                      "la #prova della natura# cela",                                                                     "in der #Prüfung der Wildnis#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_WATER_TRIAL_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the seas# holds",                                                "l'#Épreuve de l'Eau# contient",                                                                "la #prueba del mar# brinda",                                                               "la #prova del mare# cela",                                                                         "in der #Prüfung des Meeres#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_WATER_TRIAL_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the seas# holds",                                                "l'#Épreuve de l'Eau# contient",                                                                "la #prueba del mar# brinda",                                                               "la #prova del mare# cela",                                                                         "in der #Prüfung des Meeres#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_SHADOW_TRIAL_FRONT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#music in the test of darkness# unveils",                                     "la #musique dans l'Épreuve de l'Ombre# révèle",                                                "la #música en la prueba de la oscuridad# revela",                                          "#musica nella prova dell'oscurità# apre la via per",                                               "nahe #Musik in der Prüfung der Dunkelheit#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_SHADOW_TRIAL_GOLDEN_GAUNTLETS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#light in the test of darkness# unveils",                                     "la #lumière dans l'Épreuve de l'Ombre# révèle",                                                "la #luz en la prueba de la oscuridad# revela",                                             "#luce nella prova dell'oscurità# apre la via per",                                                 "nahe #Licht in der Prüfung der Dunkelheit#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_SPIRIT_TRIAL_CRYSTAL_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the sands# holds",                                               "l'#Épreuve de l'Esprit# contient",                                                             "la #prueba de las arenas# brinda",                                                         "la #prova delle sabbie# cela",                                                                     "in der #Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_SPIRIT_TRIAL_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the sands# holds",                                               "l'#Épreuve de l'Esprit# contient",                                                             "la #prueba de las arenas# brinda",                                                         "la #prova delle sabbie# cela",                                                                     "in der #Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_FIRST_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_SECOND_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_THIRD_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_FIRST_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_SECOND_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_THIRD_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_INVISIBLE_ENEMIES_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of radiance# holds",                                                "l'#Épreuve de la Lumière# contient",                                                           "la #prueba del resplandor# brinda",                                                        "la #prova dello splendore# cela",                                                                  "in der #Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_LIGHT_TRIAL_LULLABY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#music in the test of radiance# reveals",                                     "la #musique dans l'Épreuve de la Lumière# révèle",                                             "la #música en la prueba del resplandor# revela",                                           "#musica nella prova dello splendore# cela",                                                        "nahe #Musik in der Prüfung der Strahlen#, |wäre|wären|"},
    });


    hintTable[GANONS_CASTLE_MQ_WATER_TRIAL_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the seas# holds",                                                "l'#Épreuve de l'Eau# contient",                                                                "la #prueba del mar# brinda",                                                               "la #prova del mare# cela",                                                                         "in der #Prüfung des Meeres#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_FOREST_TRIAL_EYE_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the wilds# holds",                                               "l'#Épreuve de la Forêt# contient",                                                             "la #prueba de la naturaleza# brinda",                                                      "la #prova della natura# cela",                                                                     "in der #Prüfung der Wildnis#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_FOREST_TRIAL_FROZEN_EYE_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of the wilds# holds",                                               "l'#Épreuve de la Forêt# contient",                                                             "la #prueba de la naturaleza# brinda",                                                      "la #prova della natura# cela",                                                                     "in der #Prüfung der Wildnis#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_LIGHT_TRIAL_LULLABY_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#music in the test of radiance# reveals",                                     "la #musique dans l'Épreuve de la Lumière# révèle",                                             "la #música en la prueba del resplandor# revela",                                           "#musica nella prova dello splendore# cela",                                                        "nahe #Musik in der Prüfung der Strahlen#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SHADOW_TRIAL_BOMB_FLOWER_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of darkness# holds",                                                "l'#Épreuve de l'Ombre# contient",                                                              "la #prueba de la oscuridad# brinda",                                                       "la #prova dell'oscurità# cela",                                                                    "in der #Prüfung der Dunkelheit#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SHADOW_TRIAL_EYE_SWITCH_CHEST] = HintText::Exclude({
        // obscure text
        Text{"the #test of darkness# holds",                                                "l'#Épreuve de l'Ombre# contient",                                                              "la #prueba de la oscuridad# brinda",                                                       "la #prova dell'oscurità# cela",                                                                    "in der #Prüfung der Dunkelheit#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SPIRIT_TRIAL_GOLDEN_GAUNTLETS_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reflected light in the test of the sands# reveals",                          "le #soleil dans l'Épreuve de l'Esprit# révèle",                                                "#reflejar la luz en la prueba de las arenas# revela",                                      "#riflettendo nella prova delle sabbie# si |ottiene|ottengono|",                                    "nahe #reflektiertem Licht der Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SPIRIT_TRIAL_SUN_BACK_RIGHT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reflected light in the test of the sands# reveals",                          "le #soleil dans l'Épreuve de l'Esprit# révèle",                                                "#reflejar la luz en la prueba de las arenas# revela",                                      "#riflettendo nella prova delle sabbie# si |ottiene|ottengono|",                                    "nahe #reflektiertem Licht der Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SPIRIT_TRIAL_SUN_BACK_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reflected light in the test of the sands# reveals",                          "le #soleil dans l'Épreuve de l'Esprit# révèle",                                                "#reflejar la luz en la prueba de las arenas# revela",                                      "#riflettendo nella prova delle sabbie# si |ottiene|ottengono|",                                    "nahe #reflektiertem Licht der Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SPIRIT_TRIAL_SUN_FRONT_LEFT_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reflected light in the test of the sands# reveals",                          "le #soleil dans l'Épreuve de l'Esprit# révèle",                                                "#reflejar la luz en la prueba de las arenas# revela",                                      "#riflettendo nella prova delle sabbie# si |ottiene|ottengono|",                                    "nahe #reflektiertem Licht der Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SPIRIT_TRIAL_FIRST_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reflected light in the test of the sands# reveals",                          "le #soleil dans l'Épreuve de l'Esprit# révèle",                                                "#reflejar la luz en la prueba de las arenas# revela",                                      "#riflettendo nella prova delle sabbie# si |ottiene|ottengono|",                                    "nahe #reflektiertem Licht der Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_SPIRIT_TRIAL_INVISIBLE_CHEST] = HintText::Exclude({
        // obscure text
        Text{"#reflected light in the test of the sands# reveals",                          "le #soleil dans l'Épreuve de l'Esprit# révèle",                                                "#reflejar la luz en la prueba de las arenas# revela",                                      "#riflettendo nella prova delle sabbie# si |ottiene|ottengono|",                                    "nahe #reflektiertem Licht der Prüfung des Sandes#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_FOREST_TRIAL_FREESTANDING_KEY] = HintText::Exclude({
        // obscure text
        Text{"the #test of the wilds# holds",                                               "l'#Épreuve de la Forêt# révèle",                                                               "la #prueba de la naturaleza# brinda",                                                      "la #prova della natura# cela",                                                                     "in der #Prüfung der Wildnis#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_DEKU_SCRUB_CENTER_LEFT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_DEKU_SCRUB_CENTER_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_DEKU_SCRUB_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_DEKU_SCRUB_LEFT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });


    hintTable[GANONS_CASTLE_MQ_DEKU_SCRUB_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_LEFT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_RIGHT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });

    hintTable[GANONS_CASTLE_MQ_DEKU_SCRUB_LEFT] = HintText::Exclude({
        // obscure text
        Text{"#scrubs in Ganon's Castle# sell",                                             "les #Pestes Mojo dans le Château de Ganon# vendent",                                           "los #dekus del Castillo de Ganon# venden",                                                 "un #cespuglio nel castello di Ganon# vende",                                                       "die Ware, eines #Deku-Händlers in Ganons Schloss#, |wäre|wären|"},
    });
}
// clang-format on
