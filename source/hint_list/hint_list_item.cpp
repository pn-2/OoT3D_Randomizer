#include "hint_list.hpp"
// clang-format off
void HintTable_Init_Item() {// English				French											Spanish													Italian														German
    hintTable[KOKIRI_SWORD] = HintText::Item({
        // obscure text
        Text{"a butter knife",                      "un Couteau à Beurre",                          "un ágil puñal",                                        "un coltello da burro",                                     "ein Buttermesser"},
        Text{"a starter slasher",                   "une Arme de Débutant",                         "una hoja de principiantes",                            "un pugnale iniziale",                                      "ein Schlitzer für Anfänger"},
        Text{"a switchblade",                       "un Canif",                                     "una navaja",                                           "un coltellino svizzero",                                   "ein Taschenmesser"},
    }, {
        // ambiguous text
        Text{"a sword",                             "une Épée",                                     "una espada",                                           "una spada",                                                "ein Schwert"},
    },
        // clear text
        Text{"the Kokiri Sword",                    "l'Épée Kokiri",                                "la Espada Kokiri",                                     "la spada dei Kokiri",                                      "das Kokiri-Schwert"}
    );

    hintTable[MASTER_SWORD] = HintText::Item({
        // obscure text
        Text{"evil's bane",                         "le Fléau du Mal",                              "la destructora del mal",                               "il potere dell'esorcismo",                                 "der Ruin des Bösen"},
        Text{"a seven year limbo",                  "une Stase de Sept Ans",                        "unos siete años de espera",                            "un sonno di sette anni",                                   "etwas 7 Jahre zurückgehaltenes"},
        Text{"Fi",                                  "Fay",                                          "Fay",                                                  "Faih",                                                     "Phai"},
    }, {
        // ambiguous text
        Text{"a sword",                             "une Épée",                                     "una espada",                                           "una spada",                                                "ein Schwert"},
    },
        // clear text
        Text{"the Master Sword",                    "l'Épée de Légende",                            "la Espada Maestra",                                    "la spada suprema",                                         "das Master-Schwert"}
    );

    hintTable[GIANTS_KNIFE] = HintText::Item({
        // obscure text
        Text{"a fragile blade",                     "une Lame Fragile",                             "una frágil hoja",                                      "una lama fragile",                                         "eine fragile Klinge"},
        Text{"a breakable cleaver",                 "un Espadon de Verre",                          "un rompible acero",                                    "un'arma deludente",                                        "ein zerbrechlicher Spalter"},
    }, {
        // ambiguous text
        Text{"a sword",                             "une Épée",                                     "una espada",                                           "una spada",                                                "ein Schwert"},
    },
        // clear text
        Text{"the Giant's Knife",                   "la Lame des Géants",                           "la daga gigante",                                      "la spada del gigante",                                     "das Langschwert"}
    );

    hintTable[BIGGORON_SWORD] = HintText::Item({
        // obscure text
        Text{"the biggest blade",                   "une Lame Gigantesque",                         "el mayor mandoble",                                    "la lama più forte",                                        "die größte Klinge"},
        Text{"a colossal cleaver",                  "un Espadon Colossal",                          "un estoque colosal",                                   "un'arma robusta",                                          "ein kolossaler Spalter"},
    }, {
        // ambiguous text
        Text{"a sword",                             "une Épée",                                     "una espada",                                           "una spada",                                                "ein Schwert"},
    },
        // clear text
        Text{"the Biggoron Sword",                  "l'Épée de Biggoron",                           "la Espada de Biggoron",                                "la spada di Grande Goron",                                 "das Biggoron-Schwert"}
    );

    hintTable[DEKU_SHIELD] = HintText::Item({
        // obscure text
        Text{"a wooden ward",                       "un Écu d'Écorce",                              "una protección del bosque",                            "una difesa legnosa",                                       "ein hölzerner Schutz"},
        Text{"a burnable barrier",                  "une Protection Inflammable",                   "una barrera quemable",                                 "una barriera infiammabile",                                "eine entzündliche Barriere"},
    }, {
        // ambiguous text
        Text{"a shield",                            "un Bouclier",                                  "un escudo",                                            "uno scudo",                                                "ein Schild"},
    },
        // clear text
        Text{"a Deku Shield",                       "un Bouclier Mojo",                             "un escudo deku",                                       "uno scudo Deku",                                           "der Deku-Schild"}
    );

    hintTable[HYLIAN_SHIELD] = HintText::Item({
        // obscure text
        Text{"a steel safeguard",                   "une Carapace d'Acier",                         "una protección de acero",                              "una difesa metallica",                                     "eine stählerne Absicherung"},
        Text{"Like Like's metal meal",              "un Amuse-Gueule de Pudding",                   "un alimento de Like Like",                             "cibo duro per Like-Like",                                  "Like-Likes Metallmahlzeit"},
    }, {
        // ambiguous text
        Text{"a shield",                            "un Bouclier",                                  "un escudo",                                            "uno scudo",                                                "ein Schild"},
    },
        // clear text
        Text{"a Hylian Shield",                     "un Bouclier Hylien",                           "un escudo hyliano",                                    "uno scudo Hylia",                                          "der Hylia-Schild"}
    );

    hintTable[MIRROR_SHIELD] = HintText::Item({
        // obscure text
        Text{"a reflective rampart",                "un Capteur de Lumière",                        "una muralla reflectora",                               "una difesa riflettente",                                   "ein reflektierender Wall"},
        Text{"Medusa's weakness",                   "la Faiblesse de Méduse",                       "la debilidad de Medusa",                               "il punto debole di Medusa",                                "Medusas Schwachpunkt"},
        Text{"a silvered surface",                  "une Surface Argentée",                         "una superficie plateada",                              "una superficie scintillante",                              "eine versilberte Spiegelung"},
    }, {
        // ambiguous text
        Text{"a shield",                            "un Bouclier",                                  "un escudo",                                            "uno scudo",                                                "ein Schild"},
    },
        // clear text
        Text{"the Mirror Shield",                   "le Bouclier Miroir",                           "el escudo espejo",                                     "lo scudo specchio",                                        "der Spiegel-Schild"}
    );

    hintTable[GORON_TUNIC] = HintText::Item({
        // obscure text
        Text{"ruby robes",                          "un Pigment Rouge",                             "una vestimenta rubí",                                  "un abito amaranto",                                        "rubinrote Roben$"},
        Text{"fireproof fabric",                    "un Trésor Anti-Flamme",                        "una ignífuga prenda",                                  "un indumento ignifugo",                                    "feuerfester Stoff"},
        Text{"cooking clothes",                     "une Tenue de Cuisine",                         "unos abrasantes ropajes",                              "una tuta da pompieri",                                     "eine Kochschürze"},
    }, {
        // ambiguous text
        Text{"a tunic",                             "une Tunique",                                  "un sayo",                                              "una veste",                                                "eine Rüstung"},
        Text{"something expensive",                 "une Chose Dispendieuse",                       "algo caro",                                            "qualcosa di costoso",                                      "etwas Teures"},
    },
        // clear text
        Text{"a Goron Tunic",                       "une Tunique Goron",                            "un sayo goron",                                        "una veste dei Goron",                                      "die Goronen-Rüstung"}
    );

    hintTable[ZORA_TUNIC] = HintText::Item({
        // obscure text
        Text{"a sapphire suit",                     "un Pigment Bleuté",                            "una vestidura zafiro",                                 "un indumento indaco",                                      "ein azurblaues Gewand"},
        Text{"scuba gear",                          "un Habit de Plongée",                          "un traje impermeable",                                 "una muta da sommozzatore",                                 "Tauchausrüstung"},
        Text{"a swimsuit",                          "un Costume de Baignade",                       "unos ropajes sumergibles",                             "un costume da bagno",                                      "ein Badeanzug"},
    }, {
        // ambiguous text
        Text{"a tunic",                             "une Tunique",                                  "un sayo",                                              "una veste",                                                "eine Rüstung"},
        Text{"something expensive",                 "une Chose Dispendieuse",                       "algo caro",                                            "qualcosa di costoso",                                      "etwas Teures"},
    },
        // clear text
        Text{"a Zora Tunic",                        "une Tunique Zora",                             "un sayo zora",                                         "una veste degli Zora",                                     "die Zora-Rüstung"}
    );

    hintTable[IRON_BOOTS] = HintText::Item({
        // obscure text
        Text{"sink shoes",                          "un Boulet de Fer",                             "un calzado de las profundidades",                      "scarpe sprofondanti$",                                     "Sinkstiefel$"},
        Text{"clank cleats",                        "une Paire de Claquettes",                      "unas suelas férreas",                                  "ciabatte chiassose$",                                      "scheppernde Stollen$"},
    }, {
        // ambiguous text
        Text{"some boots",                          "une Paire de Bottes",                          "un par de botas",                                      "un paio di stivali",                                       "ein paar Stiefel$"},
        Text{"a feature of the Water Temple",       "une Particularité du Temple de l'Eau",         "algo particular del Templo del Agua",                  "qualcosa da usare nel Santuario dell'Acqua",               "das Kennzeichen des Wassertempels"},
        Text{"something heavy",                     "une Chose Pesante",                            "algo de lo más pesado",                                "uno strumento per immersioni",                             "etwas Schweres"},
    },
        // clear text
        Text{"the Iron Boots",                      "les Bottes de Plomb",                          "las botas de hierro",                                  "gli stivali di ferro$",                                    "die Eisenstiefel$"}
    );

    hintTable[HOVER_BOOTS] = HintText::Item({
        // obscure text
        Text{"butter boots",                        "une Paire de Patins de Beurre",                "unas suelas resvaladizas",                             "babbuccie burrose$",                                       "Butterstiefel$"},
        Text{"sacred slippers",                     "une Paire de Pantoufles Sacrées",              "unos escurridizos botines",                            "scarpe scivolose$",                                        "heilige Hausschuhe$"},
        Text{"spacewalkers",                        "une Paire de Bottes Spatiales",                "un calzado antigravitatorio",                          "elisori di gravità$",                                      "Weltraumwanderer$"},
    }, {
        // ambiguous text
        Text{"some boots",                          "une Paire de Bottes",                          "un par de botas",                                      "un paio di stivali",                                       "ein paar Stiefel$"},
    },
        // clear text
        Text{"the Hover Boots",                     "les Bottes des Airs",                          "las botas voladoras",                                  "gli stivali alati$",                                       "die Gleitstiefel$"}
    );


    hintTable[ZELDAS_LETTER] = HintText::Item({
        // obscure text
        Text{"an autograph",                        "un Autographe",                                "un autógrafo",                                         "un autografo",                                             "ein Autogramm"},
        Text{"royal stationery",                    "du Papier Royal",                              "un escrito real",                                      "cancelleria regale",                                       "königliches Briefpapier"},
        Text{"royal snail mail",                    "une Enveloppe Royale",                         "correo de la realeza",                                 "un regale lasciapassare",                                  "hoheitliche Schneckenpost"},
    }, {
    },
        // clear text
        Text{"Zelda's Letter",                      "la Lettre de Zelda",                           "la carta de Zelda",                                    "la lettera di Zelda",                                      "Zeldas Brief"}
    );

    hintTable[WEIRD_EGG] = HintText::Item({
        // obscure text
        Text{"a chicken dilemma",                   "un Drôle d'Ovale",                             "el dilema de la gallina",                              "un ovale incognito",                                       "das Huhn oder Ei-Dilemma"},
    }, {
        // ambiguous text
        Text{"an egg",                              "un Œuf",                                       "un huevo",                                             "un uovo",                                                  "ein Ei"},
    },
        // clear text
        Text{"the Weird Egg",                       "l'Œuf Curieux",                                "el huevo extraño",                                     "l'uovo misterioso",                                        "das seltsame Ei"}
    );

    hintTable[BOOMERANG] = HintText::Item({
        // obscure text
        Text{"a banana",                            "une Banane",                                   "un plátano",                                           "una banana",                                               "eine Banane"},
        Text{"a stun stick",                        "un Bâton Étourdissant",                        "un palo aturdidor",                                    "un bastone rotante",                                       "ein Betäubungswerkzeug"},
        Text{"a yellow angle",                      "un Angle Jaune",                               "un ángulo amarillo",                                   "un angolo giallo",                                         "ein gelber Winkel"},
    }, {
        // ambiguous text
        Text{"something that can grab things",      "une Chose qui peut Attraper",                  "algo que pueda agarrar cosas",                         "uno strumento per afferrare",                              "etwas zum Greifen"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"the Boomerang",                       "le Boomerang",                                 "el bumerán",                                           "il boomerang",                                             "der Bumerang"}
    );

    hintTable[LENS_OF_TRUTH] = HintText::Item({
        // obscure text
        Text{"a lie detector",                      "un Détecteur de Mensonges",                    "el detector de ilusiones",                             "un rivelatore di illusioni",                               "ein Lügendetektor"},
        Text{"a ghost tracker",                     "un Trouve-Fantôme",                            "el rastreador paranormal",                             "un trova-fantasmi",                                        "ein Geisteraufspürer"},
        Text{"true sight",                          "le Troisième Œil",                             "el ojo que todo ve",                                   "un monocolo",                                              "wahre Sicht"},
        Text{"a detective's tool",                  "un Trésor Sheikah",                            "la revelación verdadera",                              "uno strumento da detective",                               "ein Werkzeug eines Detektivs"},
    }, {
        // ambiguous text
        Text{"a secret-finding tool",               "un Chercheur de Secrets",                      "un instrumento para hallar objetos",                   "uno strumento Sheikah",                                    "ein Geheimnisfinder-Apparat"},
    },
        // clear text
        Text{"the Lens of Truth",                   "le Monocle de Vérité",                         "la Lupa de la Verdad",                                 "la lente della verità",                                    "das Auge der Wahrheit"}
    );

    hintTable[MEGATON_HAMMER] = HintText::Item({
        // obscure text
        Text{"the dragon smasher",                  "le Tueur de Dragons",                          "un destructor de dragones",                            "l'ammazzadraghi",                                          "der Drachen-Zerschmetterer"},
        Text{"the metal mallet",                    "un Outil de Construction",                     "un mazo de metal",                                     "un maglio in metallo",                                     "der Metallklopfer"},
        Text{"the heavy hitter",                    "un Poids Lourd",                               "un machacador",                                        "una misura di energia termonucleare",                      "das Schwergewicht"},
    }, {
        // ambiguous text
        Text{"something that can remove boulders",  "une Chose qui enlève les Rochers",             "algo que pueda quitar rocas",                          "qualcosa per rimuovere macigni",                           "etwas zum Entfernen von Felsen"},
    },
        // clear text
        Text{"the Megaton Hammer",                  "la Masse des Titans",                          "el martillo Megatón",                                  "il martello megaton",                                      "der Stahlhammer"}
    );

    hintTable[SHARD_OF_AGONY] = HintText::Item({
        // obscure text
        Text{"the shake shard",                     "le Fragment Vibrant",                          "el fragmento tintineante",                             "un tesoro sonoro",                                         "der Vibrationsalarm"},
        Text{"a blue alarm",                        "une Alerte Bleue",                             "una azul alarma",                                      "una sirena azzurra",                                       "ein blauer Wecker"},
    }, {
        // ambiguous text
        Text{"a prize of the House of Skulltulas",  "un Prix de la Maison des Skulltulas",          "un obsequio de la Casa Skulltula",                     "un premio delle Aracnule",                                 "ein Preis des Skulltula-Hauses"},
        Text{"a secret-finding tool",               "un Chercheur de Secrets",                      "un instrumento para hallar objetos",                   "uno strumento Sheikah",                                    "ein Geheimnisfinder-Apparat"},
    },
        // clear text
        Text{"the Shard of Agony",                  "la Pierre de Souffrance",                      "la Piedra de la Agonía",                               "il cristallo sonoro",                                      "der Stein des Wissens"}
    );

    hintTable[DINS_FIRE] = HintText::Item({
        // obscure text
        Text{"an inferno",                          "un Brasier",                                   "un incendio",                                          "un incendio",                                              "ein Flammenmeer"},
        Text{"a heat wave",                         "une Vague de Chaleur",                         "una onda de calor",                                    "un'ondata di caldo",                                       "eine Hitzewelle"},
        Text{"a red ball",                          "une Explosion de Flammes",                     "una roja esfera",                                      "una sfera rossa",                                          "eine roter Kugel"},
    }, {
        // ambiguous text
        Text{"a Great Fairy's power",               "le Pouvoir d'une Grande Fée",                  "el poder de una Gran Hada",                            "il potere di una Fata radiosa",                            "eine Fähigkeit der Feen"},
    },
        // clear text
        Text{"Din's Fire",                          "le Feu de Din",                                "el Fuego de Din",                                      "il fuoco di Din",                                          "Dins Feuerinferno"}
    );

    hintTable[FARORES_WIND] = HintText::Item({
        // obscure text
        Text{"teleportation",                       "la Téléportation",                             "un teletransportador",                                 "il teletrasporto",                                         "Teleportation"},
        Text{"a relocation rune",                   "une Rune de Relocalisation",                   "una runa de transporte",                               "la Runa Warp",                                             "eine Standortwechsel-Rune"},
        Text{"a green ball",                        "une Boule Verte",                              "una verde esfera",                                     "una sfera verde",                                          "eine grüne Kugel"},
    }, {
        // ambiguous text
        Text{"a Great Fairy's power",               "le Pouvoir d'une Grande Fée",                  "el poder de una Gran Hada",                            "il potere di una Fata radiosa",                            "eine Fähigkeit der Feen"},
    },
        // clear text
        Text{"Farore's Wind",                       "le Vent de Farore",                            "el Viento de Farore",                                  "il vento di Farore",                                       "Farores Donnersturm"}
    );

    hintTable[NAYRUS_LOVE] = HintText::Item({
        // obscure text
        Text{"a safe space",                        "une Bulle de Cristal",                         "una seguridad temporal",                               "un minuto di sicurezza",                                   "ein Rückzugsort"},
        Text{"an impregnable aura",                 "une Aura Impénétrable",                        "un aura impenetrable",                                 "un'aura impenetrabile",                                    "eine uneinnehmbare Aura"},
        Text{"a blue barrier",                      "une Toison Bleue",                             "una barrera azul",                                     "una barriera azzurra",                                     "eine blaue Barriere"},
    }, {
        // ambiguous text
        Text{"a Great Fairy's power",               "le Pouvoir d'une Grande Fée",                  "el poder de una Gran Hada",                            "il potere di una Fata radiosa",                            "eine Fähigkeit der Feen"},
    },
        // clear text
        Text{"Nayru's Love",                        "l'Amour de Nayru",                             "el Amor de Nayru",                                     "l'amore di Nayru",                                         "Nayrus Umarmung"}
    );

    hintTable[FIRE_ARROWS] = HintText::Item({
        // obscure text
        Text{"the furnace firearm",                 "une Fusée Solaire",                            "el ardiente aguijón",                                  "il dardo ardente",                                         "die Schmelzofen-Pistole"},
        Text{"the burning bolts",                   "un Obus Enflammé",                             "las puntas ígneas",                                    "i legni ignei$",                                           "die Brand-Bolzen$"},
        Text{"a magma missile",                     "un Missile Volcanique",                        "el misil abrasador",                                   "un missile di magma",                                      "eine Magma-Missile"},
    }, {
        // ambiguous text
        Text{"a magic arrow",                       "une Flèche Magique",                           "una flecha mágica",                                    "una freccia magica",                                       "magische Pfeile$"},
    },
        // clear text
        Text{"the Fire Arrows",                     "la Flèche de Feu",                             "la flecha de fuego",                                   "la freccia di fuoco",                                      "die Feuer-Pfeile$"}
    );

    hintTable[ICE_ARROWS] = HintText::Item({
        // obscure text
        Text{"the refrigerator rocket",             "un Missile Pétrifiant",                        "el misil congelador",                                  "una freccia fredda",                                       "die Kühlschrank-Raketen$"},
        Text{"the frostbite bolts",                 "un Froid Mordant",                             "las puntas gélidas",                                   "un'arma assiderante",                                      "die Frostbeulen-Bolzen$"},
        Text{"an iceberg maker",                    "une Aiguille Glaciale",                        "el control de escarcha",                               "un ghiacciolo",                                            "ein Eisberg-Macher"},
    }, {
        // ambiguous text
        Text{"a magic arrow",                       "une Flèche Magique",                           "una flecha mágica",                                    "una freccia magica",                                       "magische Pfeile$"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"the Ice Arrows",                      "la Flèche de Glace",                           "la flecha de hielo",                                   "la freccia di ghiaccio",                                   "die Eis-Pfeile$"}
    );

    hintTable[LIGHT_ARROWS] = HintText::Item({
        // obscure text
        Text{"the shining shot",                    "l'Arme Brillante",                             "el haz de luz",                                        "un'arma splendente",                                       "der Blend-Schuss"},
        Text{"the luminous launcher",               "un Jet de Lumière",                            "el disparo luminoso",                                  "luce da lancio",                                           "die Scheinwerfer$"},
        Text{"Ganondorf's bane",                    "le Fléau de Ganondorf",                        "la perdición de Ganondorf",                            "la rovina di Ganondorf",                                   "Ganondorfs Schwachpunkt"},
        Text{"the lighting bolts",                  "l'Éclair Sacré",                               "las puntas resplandecientes",                          "saette sfolgoranti$",                                      "die Lichteinschläge$"},
    }, {
        // ambiguous text
        Text{"a magic arrow",                       "une Flèche Magique",                           "una flecha mágica",                                    "una freccia magica",                                       "magische Pfeile$"},
    },
        // clear text
        Text{"the Light Arrows",                    "la Flèche de Lumière",                         "la flecha de luz",                                     "la freccia di luce",                                       "die Licht-Pfeile$"}
    );

    hintTable[GERUDO_TOKEN] = HintText::Item({
        // obscure text
        Text{"a girl club membership",              "une Carte de Membre",                          "una fémina membresía",                                 "un'iscrizione ad un club",                                 "eine Frauen-Klub Mitgliedskarte"},
        Text{"a desert tribe's pass",               "un Laissez-Passer",                            "el vale del desierto",                                 "la tessera delle amazzoni",                                "ein Pass eines Wüstenstamms"},
    }, {
        Text{"a token of recognition",              "une Preuve de Reconnaissance",                 "una prueba de reconocimiento",                         "un simbolo di riconoscimento",                             "ein Zeichen der Anerkennung"},
    },
        // clear text
        Text{"the Gerudo Token",                    "la Carte Gerudo",                              "el pase de socio gerudo",                              "la Gerudo Card",                                           "der Gerudo-Pass"}
    );

    hintTable[MAGIC_BEAN] = HintText::Item({
        // obscure text
        Text{"a wizardly legume",                   "un Légume Ensorcelé",                          "una legumbre hechizada",                               "un legume miracoloso",                                     "ein zauberhaftes Gemüse"},
    }, {
        // ambiguous text
        Text{"something sometimes buried",          "une Chose parfois Enterrée",                   "algo a veces enterrado",                               "qualcosa a volte sotterrato",                              "etwas manchmal Vergrabenes"},
    },
        // clear text
        Text{"a Magic Bean",                        "un Haricot Magique",                           "una judía mágica",                                     "un fagiolo magico",                                        "eine Wundererbse"}
    );

    hintTable[MAGIC_BEAN_PACK] = HintText::Item({
        // obscure text
        Text{"wizardly legumes",                    "un Paquet de Légumes Ensorcelés",              "unas legumbres hechizadas",                            "legumi miracolosi$",                                       "zauberhaftes Gemüse"},
    }, {
        // ambiguous text
        Text{"something sometimes buried",          "une Chose parfois Enterrée",                   "algo a veces enterrado",                               "qualcosa a volte sotterrato",                              "etwas manchmal Vergrabenes"},
    },
        // clear text
        Text{"Magic Beans",                         "un Paquet de Haricots Magiques",               "unas judías mágicas",                                  "un pacco di fagioli magici",                               "das Wundererbsen-Bündel"}
    );

    hintTable[DOUBLE_DEFENSE] = HintText::Item({
        // obscure text
        Text{"a white outline",                     "un Rebord Blanc",                              "un contorno blanco",                                   "un contorno bianco",                                       "ein weißer Umriss"},
        Text{"damage decrease",                     "une Protection Supplémentaire",                "una reducción de daño",                                "una diminuzione di danno",                                 "Schadensverringerung"},
        Text{"strengthened love",                   "un Amour Coriace",                             "un amor fortalecido",                                  "amore rafforzato",                                         "gestärkte Liebe"},
    }, {
        // ambiguous text
        Text{"a Great Fairy's power",               "le Pouvoir d'une Grande Fée",                  "el poder de una Gran Hada",                            "il potere di una Fata radiosa",                            "eine Fähigkeit der Feen"},
        Text{"something heart-shaped",              "une Chose en forme de Cœur",                   "algo con forma de corazón",                            "qualcosa a forma di cuore",                                "etwas herzförmiges"},
    },
        // clear text
        Text{"Double Defense",                      "la Double Défense",                            "la doble defensa",                                     "la doppia difesa",                                         "Doppelte Abwehrkraft"}
    );

    hintTable[GOLD_SKULLTULA_TOKEN] = HintText::Item({
        // obscure text
        Text{"proof of destruction",                "un Certificat d'Élimination",                  "una prueba de la destrucción",                         "la prova di un'eliminazione",                              "ein Beweis der Zerstörung"},
        Text{"an arachnid chip",                    "un Symbole Cranien",                           "una figura arácnida",                                  "un pezzetto di aracnide",                                  "ein arachnider Chip"},
        Text{"spider remains",                      "une Dépouille Dorée",                          "unos restos dorados",                                  "spoglie di ragno$",                                        "Spinnenüberreste$"},
        Text{"one percent of a curse",              "un Centième de Malédiction",                   "una centésima de una maldición",                       "un centesimo di maledizione",                              "ein Prozent eines Fluches"},
    }, {
        // ambiguous text
        Text{"a token of recognition",              "une Preuve de Reconnaissance",                 "una prueba de reconocimiento",                         "un simbolo di riconoscimento",                             "ein Zeichen der Anerkennung"},
        Text{"something sometimes buried",          "une Chose parfois Enterrée",                   "algo a veces enterrado",                               "qualcosa a volte sotterrato",                              "etwas manchmal Vergrabenes"},
    },
        // clear text
        Text{"a Gold Skulltula Token",              "un Jeton de Skulltula d'Or",                   "un símbolo de skulltula dorada",                       "un teschio d'oro",                                         "ein Skulltula-Symbol"}
    );

    hintTable[POCKET_EGG] = HintText::Item({
        // obscure text
        Text{"a Cucco container",                   "un Réservoir à Cocotte",                       "cuco contenido",                                       "una noce di coccò",                                        "ein Huhncontainer"},
        Text{"a Cucco, eventually",                 "un Poussin Éventuel",                          "un futuro cuco",                                       "un coccò (fra un po')",                                    "ein Huhn in spe"},
        Text{"a fowl youth",                        "une Omelette Crue",                            "una dulce juventud",                                   "una frittata cruda",                                       "ein Geflügeljunges"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
        Text{"an egg",                              "un Œuf",                                       "un huevo",                                             "un uovo",                                                  "ein Ei"},
    },
        // clear text
        Text{"the Pocket Egg",                      "l'Œuf de Poche",                               "el huevo de bolsillo",                                 "l'uovo tascabile",                                         "das Ei"}
    );

    hintTable[POCKET_CUCCO] = HintText::Item({
        // obscure text
        Text{"a little clucker",                    "un Petit Glousseur",                           "un pollito chiquito",                                  "una piccola chioccia",                                     "ein kleiner Gackerer"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"the Pocket Cucco",                    "la Cocotte de Poche",                          "el cuco de bolsillo",                                  "il coccò tascabile",                                       "Kiki"}
    );

    hintTable[COJIRO] = HintText::Item({
        // obscure text
        Text{"a cerulean capon",                    "un Paon Azur",                                 "un cerúleo capón",                                     "un cappone ceruleo",                                       "ein himmelsblauer Hahn"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"Cojiro",                              "le P'tit Poulet",                              "a Cojiro",                                             "Coblù",                                                    "Henni"}
    );

    hintTable[ODD_MUSHROOM] = HintText::Item({
        // obscure text
        Text{"a powder ingredient",                 "un Ingrédient à Poudre",                       "un oloroso ingrediente",                               "un ingrediente medicinale",                                "eine Zutat für Puder"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"an Odd Mushroom",                     "un Champignon Suspect",                        "un champiñón extraño",                                 "un fungo strano",                                          "ein Schimmelpilz"}
    );

    hintTable[ODD_POULTICE] = HintText::Item({
        // obscure text
        Text{"Granny's goodies",                    "la Confiserie de Mamie",                       "la especialidad de la abuela",                         "la conserva della nonna",                                  "Omas Leckereien$"},
    }, {
        // ambiguous text
        Text{"something that contains medicine",    "une Chose Médicamenteuse",                     "algo que contenga medicina",                           "una medicina",                                             "etwas das Medizin enthält"},
        Text{"something with a strange smell",      "un Objet qui sent bizarre",                    "algo con un olor extraño",                             "una cosa strana",                                          "etwas mit seltsamen Geruch"},
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"an Odd Poultice",                     "une Mixture Suspecte",                         "una medicina rara",                                    "una medicina strana",                                      "eine Moderpackung"}
    );

    hintTable[POACHERS_SAW] = HintText::Item({
        // obscure text
        Text{"a tree killer",                       "un Coupeur d'Arbres",                          "un destructor de árboles",                             "un distruttore d'alberi",                                  "ein Baummörder"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"the Poacher's Saw",                   "la Scie du Chasseur",                          "la sierra del furtivo",                                "la sega del bracconiere",                                  "die Säge"}
    );

    hintTable[BROKEN_SWORD] = HintText::Item({
        // obscure text
        Text{"a shattered slicer",                  "une Arme Cassée",                              "una rebanadora rota",                                  "una spada spaccata",                                       "ein zerschmettertes Schneidewerkzeug"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
        Text{"a sword",                             "une Épée",                                     "una espada",                                           "una spada",                                                "ein Schwert"},
    },
        // clear text
        Text{"the Broken Goron's Sword",            "l'Épée Brisée de Goron",                       "la espada goron rota",                                 "la spada rotta dei Goron",                                 "das zerbrochene Goronen-Schwert"}
    );

    hintTable[PRESCRIPTION] = HintText::Item({
        // obscure text
        Text{"a pill pamphlet",                     "un Document Urgent",                           "un instructivo medicinal",                             "un foglietto illustrativo",                                "eine Pillenbroschüre"},
        Text{"a doctor's note",                     "un Papier Médical",                            "unas notas del doctor",                                "la nota del dottore",                                      "ein ärztliches Attest"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"the Prescription",                    "une Ordonnance",                               "la receta",                                            "la ricetta",                                               "das Rezept"}
    );

    hintTable[EYEBALL_FROG] = HintText::Item({
        // obscure text
        Text{"a perceiving polliwog",               "un Amphibien",                                 "un variopinto batracio",                               "una raganella",                                            "eine gut-sehende Kaulquappe"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"the Eyeball Frog",                    "le Crapaud-qui-louche",                        "la rana de ojos saltones",                             "la rana occhiuta",                                         "der Glotzfrosch"}
    );

    hintTable[EYEDROPS] = HintText::Item({
        // obscure text
        Text{"a vision vial",                       "une Solution Oculaire",                        "un remedio para la vista",                             "un medicinale oculare",                                    "etwas zur Verbesserung des Sehvermögens"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"the Eyedrops",                        "les Super Gouttes",                            "las supergotas oculares",                              "il miglior collirio del mondo",                            "die Augentropfen"}
    );

    hintTable[CLAIM_CHECK] = HintText::Item({
        // obscure text
        Text{"a three day wait",                    "un Rendez-Vous dans trois Jours",              "unos tres días de espera",                             "un'attesa di tre giorni",                                  "etwas mit drei Tagen Wartezeit"},
    }, {
        // ambiguous text
        Text{"a trade quest item",                  "un Objet de la Quête d'Échanges",              "un objeto de una misión secundaria",                   "un oggetto da scambiare",                                  "ein Gegenstand zum Tauschen"},
    },
        // clear text
        Text{"the Claim Check",                     "un Certificat",                                "el recibo",                                            "il buono",                                                 "das Zertifikat"}
    );

    hintTable[PROGRESSIVE_HOOKSHOT] = HintText::Item({
        // obscure text
        Text{"Dampé's keepsake",                    "l'Héritage d'Igor",                            "un recuerdo de Dampé",                                 "l'eredità di Danpei",                                      "Boris' Andenken"},
        Text{"the Grapple Beam",                    "le Rayon Grippeur",                            "una garra metálica",                                   "il Raggio Gancio",                                         "der Grapple Beam"},
        Text{"the BOING! chain",                    "la Chaîne de BOING!",                          "una cadena retráctil",                                 "il tesoro BOING BOING",                                    "die BOING!-Kette"},
    }, {
        // ambiguous text
        Text{"something that can grab things",      "une Chose qui peut Attraper",                  "algo que pueda agarrar cosas",                         "uno strumento per afferrare",                              "etwas zum Greifen"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"a Hookshot",                          "un Grappin",                                   "un gancho",                                            "un arpione",                                               "ein Fanghaken"}
    );

    hintTable[PROGRESSIVE_STRENGTH] = HintText::Item({
        // obscure text
        Text{"power gloves",                        "une Paire de Gants de Travail",                "unos poderosos guanteletes",                           "i guanti della forza$",                                    "Krafthandschuhe$"},
        Text{"metal mittens",                       "une Paire de Mitaines",                        "unas manoplas metálicas",                              "un paio di manopole metalliche",                           "Metall-Fäustlinge$"},
        Text{"the heavy lifty",                     "la Puissance de dix Hommes",                   "un levantamiento pesado",                              "un sollevatore di pesi",                                   "die Kraft von zehn Männern"},
    }, {
        // ambiguous text
        Text{"something that can remove boulders",  "une Chose qui enlève les Rochers",             "algo que pueda quitar rocas",                          "qualcosa per rimuovere macigni",                           "etwas zum Entfernen von Felsen"},
    },
        // clear text
        Text{"a Strength Upgrade",                  "une Amélioration de Force",                    "un aumento de fuerza",                                 "un potenziamento di forza",                                "eine Stärke Aufwertung"}
    );

    hintTable[PROGRESSIVE_BOMB_BAG] = HintText::Item({
        // obscure text
        Text{"an explosive container",              "un Porte-Grenade",                             "un recipiente explosivo",                              "un contenitore deflagratore",                              "ein explosiver Container"},
        Text{"a blast bag",                         "un Estomac de Dodongo",                        "un zurrón de estallidos",                              "pelle di Dodongo",                                         "eine Spreng-Tasche"},
    }, {
        // ambiguous text
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
        Text{"something that can remove boulders",  "une Chose qui enlève les Rochers",             "algo que pueda quitar rocas",                          "qualcosa per rimuovere macigni",                           "etwas zum Entfernen von Felsen"},
    },
        // clear text
        Text{"a Bomb Bag",                          "un Sac de Bombes",                             "un saco de bombas",                                    "un portabombe",                                            "eine Bombentasche"}
    );

    hintTable[PROGRESSIVE_BOW] = HintText::Item({
        // obscure text
        Text{"an archery enabler",                  "un Facilitateur de Tir",                       "un tiro al blanco",                                    "un'arma da arciere",                                       "eine Schusswaffe"},
        Text{"a danger dart launcher",              "une Sarbacanne",                               "un peligroso lanzadardos",                             "un lanciatore di punte pungenti",                          "etwas um spitze Gegenstände zu starten"},
    }, {
        // ambiguous text
        Text{"a projectile shooter",                "un Lanceur de Projectiles",                    "un arma de proyectil",                                 "un'arma che spara",                                        "etwas um Projektile zu verschießen"},
    },
        // clear text
        Text{"a Bow",                               "l'Arc des Fées",                               "un arco de las hadas",                                 "un arco",                                                  "ein Bogen"}
    );

    hintTable[PROGRESSIVE_SLINGSHOT] = HintText::Item({
        // obscure text
        Text{"a seed shooter",                      "un Lance-Noix",                                "un lanzasemillas",                                     "uno sparasemi",                                            "ein Kernschuss-Werkzeug"},
        Text{"a rubberband",                        "un Élastique",                                 "un tirachinas",                                        "un elastico",                                              "ein Gummiband"},
        Text{"a child's catapult",                  "un Jouet d'Enfant",                            "una catapulta infantil",                               "una catapulta per bambini",                                "ein Katapult für Kinder"},
    }, {
        // ambiguous text
        Text{"a projectile shooter",                "un Lanceur de Projectiles",                    "un arma de proyectil",                                 "un'arma che spara",                                        "etwas um Projektile zu verschießen"},
    },
        // clear text
        Text{"a Slingshot",                         "le Lance-Pierre des Fées",                     "una resortera de las hadas",                           "una fionda",                                               "eine Schleuder"}
    );

    hintTable[PROGRESSIVE_WALLET] = HintText::Item({
        // obscure text
        Text{"a mo' money holder",                  "un Sac à Sous",                                "una cartera de dinero",                                "un sacco di grana",                                        "ein Taschengeld-Behältnis"},
        Text{"a gem purse",                         "une Sacoche",                                  "un zurrón de gemas",                                   "una borsa di gemme",                                       "ein Edelsteinkästchen"},
        Text{"a portable bank",                     "une Petite Banque",                            "un banco portable",                                    "un salvadanaio",                                           "eine tragbare Bank"},
    }, {
        // ambiguous text
        Text{"a prize of the House of Skulltulas",  "un Prix de la Maison des Skulltulas",          "un obsequio de la Casa Skulltula",                     "un premio delle Aracnule",                                 "ein Preis des Skulltula-Hauses"},
    },
        // clear text
        Text{"a Wallet",                            "une Bourse",                                   "una bolsa de rupias",                                  "un portarupie",                                            "eine Geldbörse"}
    );

    hintTable[PROGRESSIVE_SCALE] = HintText::Item({
        // obscure text
        Text{"a deeper dive",                       "une Bulle de Plongée",                         "un profundo buceo",                                    "un'immensa immersione",                                    "Schwimmflügel$"},
        Text{"a piece of Zora",                     "un Morceau de Zora",                           "un fragmento de Zora",                                 "un pezzetto di Zora",                                      "ein Zorateil"},
    }, {
        // ambiguous text
        Text{"a diving tool",                       "un outil de plongée",                          "un instrumento de buceo",                              "uno strumento per immersioni",                             "ein Tauchgerät"},
    },
        // clear text
        Text{"a Zora Scale",                        "une Écaille Zora",                             "una escama Zora",                                      "una squama Zora",                                          "eine Zora-Schuppe"}
    );

    hintTable[PROGRESSIVE_NUT_UPGRADE] = HintText::Item({
        // obscure text
        Text{"more nuts",                           "encore plus de Noix",                          "más semillas de nogal",                                "più noci$",                                                "ein Nuss-Erweiterer"},
        Text{"flashbang storage",                   "un Sac à Noix",                                "más frutos aturdidores",                               "una tasca piena di granate stordenti",                     "eine Blendgranatentasche"},
    }, {
        // ambiguous text
        Text{"some Deku munitions",                 "un Paquet de Munitions Mojo",                  "un montón de municiones Deku",                         "un pacchetto di munizioni Deku",                           "etwas Deku-Munition"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"Deku Nut Capacity",                   "une Augmentation de Capacité de Noix Mojo",    "un aumento de nueces deku",                            "un'espansione per le noci Deku",                           "eine Nuss-Kapazität Aufwertung"}
    );

    hintTable[PROGRESSIVE_STICK_UPGRADE] = HintText::Item({
        // obscure text
        Text{"a lumber rack",                       "un Paquet de Bois",                            "más bastones",                                         "una tasca piena di stuzzicadenti",                         "ein Holzförderer"},
        Text{"more flammable twigs",                "beaucoup de Branches",                         "más varas",                                            "più ramaglie infiammabili$",                               "mehr Brennmaterial"},
    }, {
        // ambiguous text
        Text{"some Deku munitions",                 "un Paquet de Munitions Mojo",                  "un montón de municiones Deku",                         "un pacchetto di munizioni Deku",                           "etwas Deku-Munition"},
    },
        // clear text
        Text{"Deku Stick Capacity",                 "une Augmentation de Capacité de Bâtons Mojo",  "un aumento de palos deku",                             "un'espansione per i rami Deku",                            "eine Stab-Kapazität Aufwertung"}
    );

    hintTable[PROGRESSIVE_MAGIC_METER] = HintText::Item({
        // obscure text
        Text{"mystic training",                     "un Potentiel Magique",                         "una maestría mística",                                 "un addestramento mistico",                                 "mystisches Training"},
        Text{"pixie dust",                          "de la Poudre de Fée",                          "un polvo de hada",                                     "polvere di fata",                                          "Feenstaub"},
        Text{"a green rectangle",                   "un Rectangle Vert",                            "una verduzca barra",                                   "un rettangolo verde",                                      "ein grünes Rechteck"},
    }, {
        // ambiguous text
        Text{"a Great Fairy's power",               "le Pouvoir d'une Grande Fée",                  "el poder de una Gran Hada",                            "il potere di una Fata radiosa",                            "eine Fähigkeit der Feen"},
    },
        // clear text
        Text{"a Magic Meter",                       "une Jauge de Magie",                           "un aumento de poder mágico",                           "una barra della magia",                                    "Magische Kraft"}
    );

    hintTable[PROGRESSIVE_OCARINA] = HintText::Item({
        // obscure text
        Text{"a flute",                             "un Bec Musical",                               "un utensilio musical",                                 "una piccola oca",                                          "eine Flöte"},
        Text{"a music maker",                       "un Porteur de Chansons",                       "un instrumento",                                       "una patata bucata",                                        "ein Musikmacher"},
    }, {
        // ambiguous text
        Text{"something given by Saria",            "un Cadeau de Saria",                           "un obsequio de Saria",                                 "una cosa di Saria",                                        "etwas von Salia"},
        Text{"something kept by the royal family",  "une Possession de la Famille Royale",          "algo guardado por la familia real",                    "una cosa della famiglia reale",                            "etwas aus dem Besitz der Königsfamilie"},
    },
        // clear text
        Text{"an Ocarina",                          "un Ocarina",                                   "una ocarina",                                          "un'ocarina",                                               "eine Okarina"}
    );

    hintTable[PROGRESSIVE_BOMBCHUS] = HintText::Item({
        // obscure text
        Text{"mice bombs",                          "un Adorable Explosif",                         "unas bombas roedoras",                                 "sorci esplosivi$",                                         "Mausbomben$"},
        Text{"proximity mice",                      "une Mine Anti-Rongeurs",                       "unos explosivos ratoncitos",                           "topi a orologeria$",                                       "Näherungsbomben$"},
        Text{"wall crawlers",                       "un Rapide Grimpeur",                           "unos trepaparedes",                                    "arrampicamuri$",                                           "Wandkrabbler$"},
        Text{"trail blazers",                       "un Zigzag Éclatant",                           "unas ratas propulsadas",                               "scie a zig-zag$",                                          "Wegbereiterinnen$"},
    }, {
        // ambiguous text
        Text{"a prize of the House of Skulltulas",  "un Prix de la Maison des Skulltulas",          "un obsequio de la Casa Skulltula",                     "un premio delle Aracnule",                                 "ein Preis des Skulltula-Hauses"},
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombchus",                            "un Paquet de Missiles Teigneux",               "unos bombchus",                                        "alcune radiomine$",                                        "Krabbelminen$"}
    );

    hintTable[PROGRESSIVE_GORONSWORD] = HintText::Item({
        // obscure text
        Text{"a long blade",                        "une Longue Lame",                              "una gran hoja",                                        "una lunga lama",                                           "eine lange Klinge"},
        Text{"a Goron weapon",                      "une Arme Goron",                               "un arma goron",                                        "un'arma Goron",                                            "eine goronische Waffe"},
    }, {
        // ambiguous text
        Text{"a sword",                             "une Épée",                                     "una espada",                                           "una spada",                                                "ein Schwert"},
    },
        // clear text
        Text{"a Goron Sword",                       "une Épée Goron",                               "una espada goron",                                     "una spada Goron",                                          "ein Goronen-Schwert"}
    );

    hintTable[EMPTY_BOTTLE] = HintText::Item({
        // obscure text
        Text{"a glass container",                   "un Cylindre de Cristal",                       "un recipiente de cristal",                             "un vaso di cristallo",                                     "ein Glascontainer"},
        Text{"an empty jar",                        "une Jarre Incassable",                         "un frasco vacío",                                      "una bottiglia",                                            "ein leeres Gefäß"},
        Text{"encased air",                         "un Bocal d'Air",                               "aire a presión",                                       "aria rinchiusa",                                           "verpackte Luft"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Bottle",                            "un Flacon Vide",                               "una botella",                                          "un'ampolla",                                               "eine leere Flasche"}
    );

    hintTable[BOTTLE_WITH_MILK] = HintText::Item({
        // obscure text
        Text{"cow juice",                           "une Source de Calcium",                        "una fuente de calcio",                                 "una fonte di calcio",                                      "Kuhsaft"},
        Text{"a white liquid",                      "un Liquide Blanc",                             "una bebida nutritiva",                                 "un liquido bianco",                                        "eine weiße Flüssigkeit"},
        Text{"a baby's breakfast",                  "du Jus pour Bébé",                             "un trago para bebés",                                  "cibo per cuccioli",                                        "Babyfrühstück"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Milk Bottle",                       "un Flacon de Lait",                            "una botella de leche",                                 "un'ampolla di latte",                                      "eine Flasche (Lon Lon-Milch)"}
    );

    hintTable[BOTTLE_WITH_RED_POTION] = HintText::Item({
        // obscure text
        Text{"a vitality vial",                     "un Mélange de Vitalité",                       "una pócima vitalicia",                                 "un succo d'arancia",                                       "ein Vitalitätsfläschchen"},
        Text{"a red liquid",                        "un Liquide Rouge",                             "un remedio rojizo",                                    "un liquido rosso",                                         "eine rote Flüssigkeit"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Red Potion Bottle",                 "un Flacon de Potion Rouge",                    "una botella de poción roja",                           "un'ampolla di pozione vita",                               "eine Flasche (Rotes Elixier)"}
    );

    hintTable[BOTTLE_WITH_GREEN_POTION] = HintText::Item({
        // obscure text
        Text{"a magic mixture",                     "une Réserve Magique",                          "un potingue mágico",                                   "un succo di kiwi",                                         "eine magische Mixtur"},
        Text{"a green liquid",                      "un Liquide Vert",                              "un remedio verduzco",                                  "un liquido verde",                                         "eine grüne Flüssigkeit"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Green Potion Bottle",               "un Flacon de Potion Verte",                    "una botella de poción verde",                          "un'ampolla di pozione magica",                             "eine Flasche (Grünes Elixier)"}
    );

    hintTable[BOTTLE_WITH_BLUE_POTION] = HintText::Item({
        // obscure text
        Text{"an ailment antidote",                 "l'Élixir Ultime",                              "un antídoto para el dolor",                            "uno sciroppo di anice",                                    "ein Allheilmittel"},
        Text{"a blue liquid",                       "un Liquide Bleu",                              "un remedio índigo",                                    "un liquido blu",                                           "eine blaue Flüssigkeit"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Blue Potion Bottle",                "un Flacon de Potion Bleue",                    "una botella de poción azul",                           "un'ampolla di pozione curatutto",                          "eine Flasche (Blaues Elixier)"}
    );

    hintTable[BOTTLE_WITH_FAIRY] = HintText::Item({
        // obscure text
        Text{"an imprisoned fairy",                 "une Fée Emprisonnée",                          "un hada atrapada",                                     "una fata imprigionata",                                    "eine eingesperrte Fee"},
        Text{"an extra life",                       "une Vie de Rechange",                          "una oportunidad más",                                  "un 1-UP",                                                  "ein Extraleben"},
        Text{"Navi's cousin",                       "la Cousine de Navi",                           "una prima de Navi",                                    "una cugina di Navi",                                       "Navis Cousine"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Fairy Bottle",                      "une Fée dans un Flacon",                       "un hada en una botella",                               "una fata in un'ampolla",                                   "eine Flasche (Fee)"}
    );

    hintTable[BOTTLE_WITH_FISH] = HintText::Item({
        // obscure text
        Text{"an aquarium",                         "un Aquarium",                                  "un escamado ser",                                      "un acquario",                                              "ein Aquarium"},
        Text{"a deity's snack",                     "le Repas d'un Dieu Marin",                     "un tentempié de cierta deidad",                        "la merenda di una divinità",                               "ein göttlicher Imbiss"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Fish Bottle",                       "un Poisson dans un Flacon",                    "un pez en una botella",                                "un pesce in un'ampolla",                                   "eine Flasche (Fisch)"}
    );

    hintTable[BOTTLE_WITH_BLUE_FIRE] = HintText::Item({
        // obscure text
        Text{"a conflagration canteen",             "une Mystérieuse Flamme",                       "un incendio retenido",                                 "una fiasca di fiamme",                                     "eine brennende Feldflasche"},
        Text{"an icemelt jar",                      "un Brasier Glacial",                           "unas brasas enfrascadas",                              "freddezza portatile",                                      "ein Eisschmelz-Gefäß"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Blue Fire Bottle",                  "une Flamme Bleue dans un Flacon",              "una botella de fuego azul",                            "un'ampolla di fuoco blu",                                  "eine Flasche (Blaues Feuer)"}
    );

    hintTable[BOTTLE_WITH_BUGS] = HintText::Item({
        // obscure text
        Text{"an insectarium",                      "un Insectarium",                               "unos invertebrados seres",                             "un artropode in vetro",                                    "ein Insektarium"},
        Text{"Skulltula finders",                   "une Poignée de Trouve-Skulltula",              "unos rastreadores de skulltulas",                      "cercatori di Aracnule$",                                   "der Skulltula-Suchtrupp"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Bug Bottle",                        "des Insectes dans un Flacon",                  "unos insectos en una botella",                         "un insetto in un'ampolla",                                 "eine Flasche (Käfer)"}
    );

    hintTable[BOTTLE_WITH_POE] = HintText::Item({
        // obscure text
        Text{"a spooky ghost",                      "un Effroyable Fantôme",                        "un espantoso espectro",                                "un sinistro spirito",                                      "ein gruseliger Geist"},
        Text{"a face in the jar",                   "un Visage dans un Bocal",                      "una expresión enfrascada",                             "una faccia in una borraccia",                              "ein Gesicht im Gefäß"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Poe Bottle",                        "un Esprit dans un Flacon",                     "un Poe en una botella",                                "un Poo in un'ampolla",                                     "eine Flasche (Irrlicht)"}
    );

    hintTable[BOTTLE_WITH_BIG_POE] = HintText::Item({
        // obscure text
        Text{"the spookiest ghost",                 "un Épouvantable Spectre",                      "el espectro más espeluznante",                         "un destro spettro",                                        "der gruseligste Geist"},
        Text{"a sidequest spirit",                  "un Précieux Esprit",                           "un buen valorado espíritu",                            "un fantasma che scappa",                                   "ein Wesen für eine Nebenquest"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"a Big Poe Bottle",                    "une Âme dans un Flacon",                       "un Gran Poe en una botella",                           "un Grande Poo in un'ampolla",                              "eine Flasche (Nachtschwärmer)"}
    );

    hintTable[RUTOS_LETTER] = HintText::Item({
        // obscure text
        Text{"a call for help",                     "un Appel au Secours",                          "una llamada de auxilio",                               "una chiamata d'aiuto",                                     "ein Hilferuf"},
        Text{"the note that Mweeps",                "un Message qui fait Mwip",                     "un escrito mweep",                                     "la causa dei \"mweep\"",                                   "eine Notiz die 'miep't"},
        Text{"an SOS call",                         "un Signal SOS",                                "una nota de socorro",                                  "un segnale SOS",                                           "ein Notruf"},
        Text{"a fishy stationery",                  "un Papier Humide",                             "un mensaje de ayuda",                                  "carta bagnata",                                            "fischiges Briefpapier"},
    }, {
        // ambiguous text
        Text{"a bottle",                            "un Flacon",                                    "una botella",                                          "un'ampolla",                                               "eine Flasche"},
    },
        // clear text
        Text{"Ruto's Letter",                       "la Lettre de Ruto",                            "la carta de Ruto",                                     "la lettera di Ruto",                                       "Rutos Brief"}
    );

    hintTable[ZELDAS_LULLABY] = HintText::Item({
        // obscure text
        Text{"a song of royal slumber",             "une Chanson Royale",                           "la canción real",                                      "un legame con la famiglia reale",                          "ein Lied des hoheitlichen Schlummers"},
        Text{"a triforce tune",                     "la Musique Sacrée",                            "la melodía de la trifuerza",                           "la prima melodia",                                         "eine Triforce Melodie"},
    }, {
        // ambiguous text
        Text{"a regular song",                      "une Chanson Normale",                          "una cancion normal",                                   "una canzone semplice",                                     "ein gewöhnliches Lied"},
        Text{"something kept by the royal family",  "une Possession de la Famille Royale",          "algo guardado por la familia real",                    "una cosa della famiglia reale",                            "etwas aus dem Besitz der Königsfamilie"},
    },
        // clear text
        Text{"Zelda's Lullaby",                     "la Berceuse de Zelda",                         "la Nana de Zelda",                                     "la ninna nanna di Zelda",                                  "Zeldas Wiegenlied"}
    );

    hintTable[EPONAS_SONG] = HintText::Item({
        // obscure text
        Text{"an equestrian etude",                 "un Hymne Équestre",                            "una copla ecuestre",                                   "un richiamo per cavalli",                                  "eine Etüde des Reitens"},
        Text{"Malon's melody",                      "la Mélodie des Vaches",                        "la sonata de Malon",                                   "la melodia di Malon",                                      "Malons Melodie"},
        Text{"a ranch song",                        "le Chant des Champs",                          "un canto rupestre",                                    "il tema della fattoria",                                   "ein Bauernlied"},
    }, {
        // ambiguous text
        Text{"a regular song",                      "une Chanson Normale",                          "una cancion normal",                                   "una canzone semplice",                                     "ein gewöhnliches Lied"},
        Text{"something from Malon",                "un Cadeau de Malon",                           "un obsequio de Malon",                                 "un dono di Malon",                                         "etwas von Malon"},
    },
        // clear text
        Text{"Epona's Song",                        "le Chant d'Epona",                             "la Canción de Epona",                                  "la Canzone di Epona",                                      "Eponas Lied"}
    );

    hintTable[SARIAS_SONG] = HintText::Item({
        // obscure text
        Text{"a song of dancing Gorons",            "une Chanson Dansante",                         "un pegadizo tono goron",                               "un \"ritmo infuocato\"",                                   "ein Lied das Goronen zum Tanzen bringt"},
        Text{"Saria's phone number",                "le Téléphone d'une Amie",                      "una consulta de asistencia",                           "il numero di Saria",                                       "Salias Handynummer"},
    }, {
        // ambiguous text
        Text{"a regular song",                      "une Chanson Normale",                          "una cancion normal",                                   "una canzone semplice",                                     "ein gewöhnliches Lied"},
        Text{"something given by Saria",            "un Cadeau de Saria",                           "un obsequio de Saria",                                 "una cosa di Saria",                                        "etwas von Salia"},
    },
        // clear text
        Text{"Saria's Song",                        "le Chant de Saria",                            "la Canción de Saria",                                  "la Canzone di Saria",                                      "Salias Lied"}
    );

    hintTable[SUNS_SONG] = HintText::Item({
        // obscure text
        Text{"Sunny Day",                           "le Zénith",                                    "un día soleado",                                       "il canto del gallo",                                       "ein sonniger Tag"},
        Text{"the ReDead's bane",                   "le Fléau des Effrois",                         "la destructora de Redeads",                            "veleno per Zombie",                                        "der Schwachpunkt der Zombies"},
        Text{"the Gibdo's bane",                    "le Fléau des Gibdos",                          "la destructora de Gibdos",                             "veleno per Ghibdo",                                        "der Schwachpunkt der Gibdos"},
    }, {
        // ambiguous text
        Text{"a regular song",                      "une Chanson Normale",                          "una cancion normal",                                   "una canzone semplice",                                     "ein gewöhnliches Lied"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"the Sun's Song",                      "le Chant du Soleil",                           "la Canción del Sol",                                   "il Canto del sole",                                        "die Hymne der Sonne"}
    );

    hintTable[SONG_OF_TIME] = HintText::Item({
        // obscure text
        Text{"a song 7 years long",                 "le Flot du Temps",                             "la setenada canción",                                  "una melodia settenaria",                                   "ein 7 Jahre langes Lied"},
        Text{"the tune of ages",                    "le Chant des Âges",                            "la melodía eónica",                                    "le Note del Tempo$",                                       "die Melodie der Zeit"},
    }, {
        // ambiguous text
        Text{"a regular song",                      "une Chanson Normale",                          "una cancion normal",                                   "una canzone semplice",                                     "ein gewöhnliches Lied"},
    },
        // clear text
        Text{"the Song of Time",                    "le Chant du Temps",                            "la Canción del tiempo",                                "la Canzone del tempo",                                     "die Hymne der Zeit"}
    );

    hintTable[SONG_OF_STORMS] = HintText::Item({
        // obscure text
        Text{"Rain Dance",                          "la Danse de la Pluie",                         "la danza de la lluvia",                                "la danza della pioggia",                                   "ein Regentanz"},
        Text{"a thunderstorm tune",                 "un Hymne Foudroyant",                          "una sonata tormentosa",                                "il suono di un tuono",                                     "die Melodie des Unwetters"},
        Text{"windmill acceleration",               "l'Accélérateur de Moulins",                    "el arranque de molinos",                               "propulsione per mulini",                                   "Windmühlenbeschleunigung"},
    }, {
        // ambiguous text
        Text{"a regular song",                      "une Chanson Normale",                          "una cancion normal",                                   "una canzone semplice",                                     "ein gewöhnliches Lied"},
    },
        // clear text
        Text{"the Song of Storms",                  "le Chant des Tempêtes",                        "la Canción de la Tormenta",                            "la Canzone della tempesta",                                "die Hymne des Sturms"}
    );

    hintTable[MINUET_OF_FOREST] = HintText::Item({
        // obscure text
        Text{"the song of tall trees",              "le Bruit des Arbres",                          "la canción de las copas",                              "un monologo sui ricordi",                                  "ein Lied über hohe Bäume"},
        Text{"an arboreal anthem",                  "l'Hymne Sylvestre",                            "el himno forestal",                                    "un'aria arborea",                                          "die Volkshymne der Bäume"},
        Text{"a green spark trail",                 "une Comète verte",                             "el sendero esmeralda",                                 "una scia di scintille smeraldo",                           "ein grüner Funkenregen"},
    }, {
        // ambiguous text
        Text{"a warp song",                         "une Chanson de Téléportation",                 "una canción de teletransportación",                    "una melodia complessa",                                    "ein Lied zum Teleportieren"},
    },
        // clear text
        Text{"the Minuet of Forest",                "le Menuet de la Forêt",                        "el Minueto del bosque",                                "il Minuetto della foresta",                                "das Menuett des Waldes"}
    );

    hintTable[BOLERO_OF_FIRE] = HintText::Item({
        // obscure text
        Text{"a song of lethal lava",               "une Musique Enflammée",                        "la canción de la lava",                                "un monologo sull'amicizia",                                "ein Lied über tödliche Lava"},
        Text{"a red spark trail",                   "une Comète Rouge",                             "el sendero rubí",                                      "una scia di scintille scarlatte",                          "ein roter Funkenregen"},
        Text{"a volcanic verse",                    "le Souffle du Volcan",                         "el verso volcánico",                                   "il verso vulcanico",                                       "die vulkanische Strophe"},
    }, {
        // ambiguous text
        Text{"a warp song",                         "une Chanson de Téléportation",                 "una canción de teletransportación",                    "una melodia complessa",                                    "ein Lied zum Teleportieren"},
    },
        // clear text
        Text{"the Bolero of Fire",                  "le Boléro du Feu",                             "el Bolero del fuego",                                  "il Bolero del fuoco",                                      "der Bolero des Feuers"}
    );

    hintTable[SERENADE_OF_WATER] = HintText::Item({
        // obscure text
        Text{"a song of a damp ditch",              "le Calme de l'Eau",                            "la canción del estanque",                              "un monologo sul diventare adulti",                         "ein Lied über feuchte Gruben"},
        Text{"a blue spark trail",                  "une Comète Bleue",                             "el sendero zafiro",                                    "una scia di scintille celesti",                            "ein blauer Funkenregen"},
        Text{"the lake's lyric",                    "la Voix du Lac",                               "la letra del lago",                                    "la lirica del lago",                                       "die Lyrik des Sees"},
    }, {
        // ambiguous text
        Text{"a warp song",                         "une Chanson de Téléportation",                 "una canción de teletransportación",                    "una melodia complessa",                                    "ein Lied zum Teleportieren"},
    },
        // clear text
        Text{"the Serenade of Water",               "la Sérénade de l'Eau",                         "la Serenata del agua",                                 "la Serenata dell'acqua",                                   "die Serenade des Wassers"}
    );

    hintTable[REQUIEM_OF_SPIRIT] = HintText::Item({
        // obscure text
        Text{"a song of sandy statues",             "la Mélodie d'une Grande Statue",               "la canción de la gran estatua",                        "un monologo sul viaggio nel tempo",                        "ein Lied über sandige Statuen"},
        Text{"an orange spark trail",               "une Comète Orange",                            "el sendero ámbar",                                     "una scia di scintille ambrate",                            "ein orangener Funkenregen"},
        Text{"the desert ditty",                    "le Vent du Désert",                            "la estrofa del desierto",                              "un duetto desertico",                                      "die Weise der Wüste"},
    }, {
        // ambiguous text
        Text{"a warp song",                         "une Chanson de Téléportation",                 "una canción de teletransportación",                    "una melodia complessa",                                    "ein Lied zum Teleportieren"},
    },
        // clear text
        Text{"the Requiem of Spirit",               "le Requiem des Esprits",                       "el Réquiem del espíritu",                              "il Requiem dello spirito",                                 "das Requiem der Geister"}
    );

    hintTable[NOCTURNE_OF_SHADOW] = HintText::Item({
        // obscure text
        Text{"a song of spooky spirits",            "un Hymne de Chair de Poule",                   "la canción de los espectros",                          "un monologo sull'oscurità di Calbarico",                   "ein Lied über schaurige Geister"},
        Text{"a graveyard boogie",                  "un Boogie de Fantômes",                        "una honra fúnebre",                                    "una melodia non diurna",                                   "der Boogie des Friedhofs"},
        Text{"a haunted hymn",                      "une Chanson Lugubre",                          "una estrofa encantada",                                "la sinfonia dei sepolcri",                                 "die heimgesuchte Hymne"},
        Text{"a purple spark trail",                "une Comète Mauve",                             "el sendero malva",                                     "una scia di scintille lavanda",                            "ein violetter Funkenregen"},
    }, {
        // ambiguous text
        Text{"a warp song",                         "une Chanson de Téléportation",                 "una canción de teletransportación",                    "una melodia complessa",                                    "ein Lied zum Teleportieren"},
    },
        // clear text
        Text{"the Nocturne of Shadow",              "le Nocturne de l'Ombre",                       "el Nocturno de la sombra",                             "il Notturno delle ombre",                                  "die Nocturne des Schattens"}
    );

    hintTable[PRELUDE_OF_LIGHT] = HintText::Item({
        // obscure text
        Text{"a luminous prologue melody",          "une Matine Illuminée",                         "la melodía refulgente",                                "un monologo sulle sfide future",                           "der lichterfüllte Prolog"},
        Text{"a yellow spark trail",                "une Comète Jaune",                             "el sendero resplandeciente",                           "una scia di scintille dorate",                             "ein gelber Funkenregen"},
        Text{"the temple traveler",                 "un Chant de Sanctuaire",                       "la ruta del templo",                                   "un viaggio nel tempio",                                    "der Zitadellenwanderer"},
    }, {
        // ambiguous text
        Text{"a warp song",                         "une Chanson de Téléportation",                 "una canción de teletransportación",                    "una melodia complessa",                                    "ein Lied zum Teleportieren"},
    },
        // clear text
        Text{"the Prelude of Light",                "le Prélude de la Lumière",                     "el Preludio de la luz",                                "il Preludio della luce",                                   "die Kantate des Lichts"}
    );

    hintTable[DEKU_TREE_MAP] = HintText::Item({
         // obscure text
        Text{"a mossy atlas",                       "un Atlas Boisé",                               "un Atlas musgoso",                                     "una pianta muschiosa",                                     "ein moosbedeckter Atlas"},
        Text{"some mossy blueprints",               "un Plan Boisé",                                "unos planos musgosos",                                 "una planimetria muschiosa",                                "der moosbedeckte Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Deku Tree Map",                   "la Carte de l'Arbre Mojo",                     "el mapa del Gran Árbol Deku",                          "la mappa del Grande Albero Deku",                          "die Labyrinth-Karte des Deku-Baumes"}
    );

    hintTable[DODONGOS_CAVERN_MAP] = HintText::Item({
         // obscure text
        Text{"a rocky atlas",                       "un Atlas Rocheux",                             "un Atlas rocoso",                                      "una pianta rocciosa",                                      "ein steiniger Atlas"},
        Text{"some rocky blueprints",               "un Plan Rocheux",                              "unos planos rocosos",                                  "una planimetria rocciosa",                                 "der steinige Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Dodongo's Cavern Map",            "la Carte de la Caverne Dodongo",               "el mapa de la Cueva de los Dodongos",                  "la mappa della caverna dei Dodongo",                       "die Labyrinth-Karte von Dodongos Höhle"}
    );

    hintTable[JABU_JABUS_BELLY_MAP] = HintText::Item({
         // obscure text
        Text{"a fishy atlas",                       "un Atlas Digéré",                              "un Atlas digesto",                                     "una pianta anatomica",                                     "ein fischiger Atlas"},
        Text{"some fishy blueprints",               "un Plan Digéré",                               "unos planos digestos",                                 "una planimetria anatomica",                                "der fischige Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Jabu-Jabu's Belly Map",           "la Carte du Ventre de Jabu-Jabu",              "el mapa de la Tripa de Jabu-Jabu",                     "la mappa della pancia di Jabu Jabu",                       "die Labyrinth-Karte von Jabu-Jabus Bauch"}
    );

    hintTable[FOREST_TEMPLE_MAP] = HintText::Item({
         // obscure text
        Text{"a sylvan atlas",                      "un Atlas Sylvestre",                           "un Atlas enselvado",                                   "una pianta silvestre",                                     "ein sylvaner Atlas"},
        Text{"some sylvan blueprints",              "un Plan Sylvestre",                            "unos planos enselvados",                               "una planimetria silvestre",                                "der sylvane Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Forest Temple Map",               "la Carte du Temple de la Forêt",               "el mapa del Templo del Bosque",                        "la mappa del Santuario della Foresta",                     "die Labyrinth-Karte des Waldtempels"}
    );

    hintTable[FIRE_TEMPLE_MAP] = HintText::Item({
         // obscure text
        Text{"a molten atlas",                      "un Atlas Fondu",                               "un Atlas fundido",                                     "una pianta bollente",                                      "ein schmelzender Atlas"},
        Text{"some molten blueprints",              "un Plan Fondu",                                "unos planos fundidos",                                 "una planimetria bollente",                                 "der schmelzende Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Fire Temple Map",                 "la Carte du Temple du Feu",                    "el mapa del Templo del Fuego",                         "la mappa del Santuario del Fuoco",                         "die Labyrinth-Karte des Feuertempels"}
    );

    hintTable[WATER_TEMPLE_MAP] = HintText::Item({
         // obscure text
        Text{"a wet atlas",                         "un Atlas Humide",                              "un Atlas mojado",                                      "una pianta idraulica",                                     "ein nasser Atlas"},
        Text{"some wet blueprints",                 "un Plan Humide",                               "unos planos mojados",                                  "una planimetria idraulica",                                "der nasse Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Water Temple Map",                "la Carte du Temple de l'Eau",                  "el mapa del Templo del Agua",                          "la mappa del Santuario dell'Acqua",                        "die Labyrinth-Karte des Wassertempels"}
    );

    hintTable[SPIRIT_TEMPLE_MAP] = HintText::Item({
         // obscure text
        Text{"a sandy atlas",                       "un Atlas Sablonneux",                          "un Atlas arenoso",                                     "una pianta sabbiosa",                                      "ein sandiger Atlas"},
        Text{"some sandy blueprints",               "un Plan Sablonneux",                           "unos planos arenosos",                                 "una planimetria sabbiosa",                                 "der sandige Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Spirit Temple Map",               "la Carte du Temple de l'Esprit",               "el mapa del Templo del Espíritu",                      "la mappa del Santuario dello Spirito",                     "die Labyrinth-Karte des Geistertempels"}
    );

    hintTable[SHADOW_TEMPLE_MAP] = HintText::Item({
         // obscure text
        Text{"a creepy atlas",                      "un Atlas Sinistre",                            "un Atlas siniestra",                                   "una pianta patibolare",                                    "ein gruseliger Atlas"},
        Text{"some creepy blueprints",              "un Plan Sinistre",                             "unos planos siniestras",                               "una planimetria patibolare",                               "der gruselige Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Shadow Temple Map",               "la Carte du Temple de l'Ombre",                "el mapa del Templo de las Sombras",                    "la mappa del Santuario dell'Ombra",                        "die Labyrinth-Karte des Schattentempels"}
    );

    hintTable[BOTTOM_OF_THE_WELL_MAP] = HintText::Item({
         // obscure text
        Text{"a moldy atlas",                       "un Atlas Moisi",                               "un Atlas mohoso",                                      "una pianta ammuffita",                                     "ein schimmelnder Atlas"},
        Text{"some moldy blueprints",               "un Plan Moisi",                                "unos planos mohosos",                                  "una planimetria ammuffita",                                "der schimmelnde Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Bottom of the Well Map",          "la Carte du Puits",                            "el mapa del Fondo del pozo",                           "la mappa del fondo del pozzo",                             "die Labyrinth-Karte vom Grund des Brunnens"}
    );

    hintTable[ICE_CAVERN_MAP] = HintText::Item({
         // obscure text
        Text{"a polar atlas",                       "un Atlas Polaire",                             "un Atlas polar",                                       "una pianta artica",                                        "ein polarer Atlas"},
        Text{"some polar blueprints",               "un Plan Polaire",                              "unos planos polars",                                   "una planimetria artica",                                   "der polare Bauplan"},
    }, {
         // ambiguous text
        Text{"a dungeon map",                       "une Carte",                                    "un mapa",                                              "una mappa",                                                "eine Labyrinth-Karte"},
    },
         // clear text
        Text{"the Ice Cavern Map",                  "la Carte de la Caverne Polaire",               "el mapa de la Caverna de hielo",                       "la mappa della caverna di ghiaccio",                       "die Labyrinth-Karte der Eishöhle"}
    );

    hintTable[DEKU_TREE_COMPASS] = HintText::Item({
         // obscure text
        Text{"a mossy treasure tracker",            "un Cherche-Trésor Boisé",                      "un zahorí musgoso",                                    "una sonda muschiosa",                                      "ein moosbedecktes Ortungsgerät"},
        Text{"a mossy magnetic needle",             "un Aimant Boisée",                             "un imán musgoso",                                      "un magnete muschioso",                                     "die moosbedeckte Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Deku Tree Compass",               "la boussole de l'Arbre Mojo",                  "la brújula del Gran Árbol Deku",                       "la bussola del Grande Albero Deku",                        "der Kompass des Deku-Baumes"}
    );

    hintTable[DODONGOS_CAVERN_COMPASS] = HintText::Item({
         // obscure text
        Text{"a rocky treasure tracker",            "un Cherche-Trésor Rocheux",                    "un zahorí rocoso",                                     "una sonda rocciosa",                                       "ein steiniges Ortungsgerät"},
        Text{"a rocky magnetic needle",             "un Aimant Rocheux",                            "un imán rocoso",                                       "un magnete roccioso",                                      "die steinige Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Dodongo's Cavern Compass",        "la boussole de la Caverne Dodongo",            "la brújula de la Cueva de los Dodongos",               "la bussola della caverna dei Dodongo",                     "der Kompass von Dodongos Höhle"}
    );

    hintTable[JABU_JABUS_BELLY_COMPASS] = HintText::Item({
         // obscure text
        Text{"a fishy treasure tracker",            "un Cherche-Trésor Digéré",                     "un zahorí digesto",                                    "una sonda anatomica",                                      "ein fischiges Ortungsgerät"},
        Text{"a fishy magnetic needle",             "un Aimant Digéré",                             "un imán digesto",                                      "un magnete anatomico",                                     "die fischige Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Jabu-Jabu's Belly Compass",       "la boussole de Jabu-Jabu",                     "la brújula de la Tripa de Jabu-Jabu",                  "la bussola della pancia di Jabu Jabu",                     "der Kompass von Jabu-Jabus Bauch"}
    );

    hintTable[FOREST_TEMPLE_COMPASS] = HintText::Item({
         // obscure text
        Text{"a sylvan treasure tracker",           "un Cherche-Trésor Sylvestre",                  "un zahorí enselvado",                                  "una sonda silvestre",                                      "ein sylvanes Ortungsgerät"},
        Text{"a sylvan magnetic needle",            "un Aimant Sylvestre",                          "un imán enselvado",                                    "un magnete silvestre",                                     "die sylvane Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Forest Temple Compass",           "la boussole du Temple de la Forêt",            "la brújula del Templo del Bosque",                     "la bussola del Santuario della Foresta",                   "der Kompass des Waldtempels"}
    );

    hintTable[FIRE_TEMPLE_COMPASS] = HintText::Item({
         // obscure text
        Text{"a molten treasure tracker",           "un Cherche-Trésor Fondu",                      "un zahorí fundido",                                    "una sonda bollente",                                       "ein schmelzendes Ortungsgerät"},
        Text{"a molten magnetic needle",            "un Aimant Fondu",                              "un imán fundido",                                      "un magnete bollente",                                      "die schmelzende Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Fire Temple Compass",             "la boussole du Temple du Feu",                 "la brújula del Templo del Fuego",                      "la bussola del Santuario del Fuoco",                       "der Kompass des Feuertempels"}
    );

    hintTable[WATER_TEMPLE_COMPASS] = HintText::Item({
         // obscure text
        Text{"a wet treasure tracker",              "un Cherche-Trésor Humide",                     "un zahorí mojado",                                     "una sonda idraulica",                                      "ein nasses Ortungsgerät"},
        Text{"a wet magnetic needle",               "un Aimant Humide",                             "un imán mojado",                                       "un magnete idraulico",                                     "die nasse Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Water Temple Compass",            "la boussole du Temple de l'Eau",               "la brújula del Templo del Agua",                       "la bussola del Santuario dell'Acqua",                      "der Kompass des Wassertempels"}
    );

    hintTable[SPIRIT_TEMPLE_COMPASS] = HintText::Item({
         // obscure text
        Text{"a sandy treasure tracker",            "un Cherche-Trésor Sablonneux",                 "un zahorí arenoso",                                    "una sonda sabbiosa",                                       "ein sandiges Ortungsgerät"},
        Text{"a sandy magnetic needle",             "un Aimant Sablonneux",                         "un imán arenoso",                                      "un magnete sabbioso",                                      "die sandige Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Spirit Temple Compass",           "la boussole du Temple de l'Esprit",            "la brújula del Templo del Espíritu",                   "la bussola del Santuario dello Spirito",                   "der Kompass des Geistertempels"}
    );

    hintTable[SHADOW_TEMPLE_COMPASS] = HintText::Item({
         // obscure text
        Text{"a creepy treasure tracker",           "un Cherche-Trésor Sinistre",                   "un zahorí siniestra",                                  "una sonda patibolare",                                     "ein gruseliges Ortungsgerät"},
        Text{"a creepy magnetic needle",            "un Aimant Sinistre",                           "un imán siniestra",                                    "un magnete patibolare",                                    "die gruselige Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Shadow Temple Compass",           "la boussole du Temple de l'Ombre",             "la brújula del Templo de las Sombras",                 "la bussola del Santuario dell'Ombra",                      "der Kompass des Schattentempels"}
    );

    hintTable[BOTTOM_OF_THE_WELL_COMPASS] = HintText::Item({
         // obscure text
        Text{"a dank treasure tracker",             "un Cherche-Trésor Moisi",                      "un zahorí mohoso",                                     "una sonda ammuffita",                                      "ein schimmelndes Ortungsgerät"},
        Text{"a dank magnetic needle",              "un Aimant Moisi",                              "un imán mohoso",                                       "un magnete ammuffito",                                     "die schimmelnde Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Bottom of the Well Compass",      "la boussole du Puits",                         "la brújula del Fondo del pozo",                        "la bussola del fondo del pozzo",                           "der Kompass vom Grund des Brunnens"}
    );

    hintTable[ICE_CAVERN_COMPASS] = HintText::Item({
         // obscure text
        Text{"a polar treasure tracker",            "un Cherche-Trésor Polaire",                    "un zahorí polar",                                      "una sonda artica",                                         "ein polares Ortungsgerät"},
        Text{"a polar magnetic needle",             "un Aimant Polaire",                            "un imán polar",                                        "un magnete artico",                                        "die polare Magnetnadel"},
    }, {
         // ambiguous text
        Text{"a compass",                           "une Boussole",                                 "una brújula",                                          "una bussola",                                              "ein Kompass"},
    },
         // clear text
        Text{"the Ice Cavern Compass",              "la boussole de la Caverne Polaire",            "la brújula de la Caverna de hielo",                    "la bussola della caverna di ghiaccio",                     "der Kompass der Eishöhle"}
    );

    hintTable[FOREST_TEMPLE_BOSS_KEY] = HintText::Item({
         // obscure text
        Text{"a sylvan master of unlocking",        "un gros Pied de Biche Sylvestre",              "la clave enselvada de un jefe",                        "lo sbloccatore del traguardo silvestre",                   "ein sylvaner Meister der Entriegelung"},
        Text{"a sylvan dungeon's master pass",      "une Clé Maléfique Sylvestre",                  "el pase maestro enselvado",                            "un permesso silvestre del capo",                           "der sylvane VIP-Ausweis"},
    }, {
         // ambiguous text
        Text{"a boss key",                          "une Clé d'Or",                                 "una gran llave",                                       "una grande chiave",                                        "ein Master-Schlüssel"},
    },
         // clear text
        Text{"the Forest Temple Boss Key",          "la Clé d'Or du Temple de la Forêt",            "la gran llave del Templo del Bosque",                  "la grande chiave del Santuario della Foresta",             "der Master-Schlüssel des Waldtempels"}
    );

    hintTable[FIRE_TEMPLE_BOSS_KEY] = HintText::Item({
         // obscure text
        Text{"a molten master of unlocking",        "un gros Pied de Biche Fondu",                  "la clave fundido de un jefe",                          "lo sbloccatore del traguardo bollente",                    "ein schmelzender Meister der Entriegelung"},
        Text{"a molten dungeon's master pass",      "une Clé Maléfique Fondue",                     "el pase maestro fundido",                              "un permesso bollente del capo",                            "der schmelzende VIP-Ausweis"},
    }, {
         // ambiguous text
        Text{"a boss key",                          "une Clé d'Or",                                 "una gran llave",                                       "una grande chiave",                                        "ein Master-Schlüssel"},
    },
         // clear text
        Text{"the Fire Temple Boss Key",            "la Clé d'Or du Temple du Feu",                 "la gran llave del Templo del Fuego",                   "la grande chiave del Santuario del Fuoco",                 "der Master-Schlüssel des Feuertempels"}
    );

    hintTable[WATER_TEMPLE_BOSS_KEY] = HintText::Item({
         // obscure text
        Text{"a wet master of unlocking",           "un gros Pied de Biche Humide",                 "la clave mojado de un jefe",                           "lo sbloccatore del traguardo idraulico",                   "ein nasser Meister der Entriegelung"},
        Text{"a wet dungeon's master pass",         "une Clé Maléfique Humide",                     "el pase maestro mojado",                               "un permesso idraulico del capo",                           "der nasse VIP-Ausweis"},
    }, {
         // ambiguous text
        Text{"a boss key",                          "une Clé d'Or",                                 "una gran llave",                                       "una grande chiave",                                        "ein Master-Schlüssel"},
    },
         // clear text
        Text{"the Water Temple Boss Key",           "la Clé d'Or du Temple de l'Eau",               "la gran llave del Templo del Agua",                    "la grande chiave del Santuario dell'Acqua",                "der Master-Schlüssel des Wassertempels"}
    );

    hintTable[SPIRIT_TEMPLE_BOSS_KEY] = HintText::Item({
         // obscure text
        Text{"a sandy master of unlocking",         "un gros Pied de Biche Sablonneux",             "la clave arenoso de un jefe",                          "lo sbloccatore del traguardo sabbioso",                    "ein sandiger Meister der Entriegelung"},
        Text{"a sandy dungeon's master pass",       "une Clé Maléfique Sablonneuse",                "el pase maestro arenoso",                              "un permesso sabbioso del capo",                            "der sandige VIP-Ausweis"},
    }, {
         // ambiguous text
        Text{"a boss key",                          "une Clé d'Or",                                 "una gran llave",                                       "una grande chiave",                                        "ein Master-Schlüssel"},
    },
         // clear text
        Text{"the Spirit Temple Boss Key",          "la Clé d'Or du Temple de l'Esprit",            "la gran llave del Templo del Espíritu",                "la grande chiave del Santuario dello Spirito",             "der Master-Schlüssel des Geistertempels"}
    );

    hintTable[SHADOW_TEMPLE_BOSS_KEY] = HintText::Item({
         // obscure text
        Text{"a creepy master of unlocking",        "un gros Pied de Biche Sinistre",               "la clave siniestra de un jefe",                        "lo sbloccatore del traguardo patibolare",                  "ein gruseliger Meister der Entriegelung"},
        Text{"a creepy dungeon's master pass",      "une Clé Maléfique Sinistre",                   "el pase maestro siniestra",                            "un permesso patibolare del capo",                          "der gruselige VIP-Ausweis"},
    }, {
         // ambiguous text
        Text{"a boss key",                          "une Clé d'Or",                                 "una gran llave",                                       "una grande chiave",                                        "ein Master-Schlüssel"},
    },
         // clear text
        Text{"the Shadow Temple Boss Key",          "la Clé d'Or du Temple de l'Ombre",             "la gran llave del Templo de las Sombras",              "la grande chiave del Santuario dell'Ombra",                "der Master-Schlüssel des Schattentempels"}
    );

    hintTable[GANONS_CASTLE_BOSS_KEY] = HintText::Item({
         // obscure text
        Text{"a final master of unlocking",         "le dernier gros Pied de Biche",                "la clave final de un jefe",                            "lo sbloccatore del traguardo finale",                      "ein finaler Meister der Entriegelung"},
        Text{"a final dungeon's master pass",       "la dernière Clé Maléfique",                    "el pase maestro final",                                "un permesso finale del capo",                              "der finale VIP-Ausweis"},
    }, {
         // ambiguous text
        Text{"a boss key",                          "une Clé d'Or",                                 "una gran llave",                                       "una grande chiave",                                        "ein Master-Schlüssel"},
    },
         // clear text
        Text{"the Ganon's Castle Boss Key",         "la Clé d'Or du Château de Ganon",              "la gran llave del Castillo de Ganon",                  "la grande chiave del castello di Ganon",                   "der Master-Schlüssel von Ganons Schloss"}
    );

    hintTable[FOREST_TEMPLE_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a sylvan tool for unlocking",         "un Anti-Porte Sylvestre",                      "una clave de una entrada enselvada",                   "uno sbloccatore silvestre",                                "etwas Sylvanes zum Entriegeln"},
        Text{"a sylvan dungeon pass",               "le Rêve d'un Prisonnier Sylvestre",            "un pase de una mazmorra enselvada",                    "un permesso silvestre",                                    "ein sylvaner Labyrinth-Pass"},
        Text{"a sylvan lock remover",               "un Efface-Serrure Sylvestre",                  "un destructor de cerraduras enselvadas",               "un dissolutore di catene silvestri",                       "ein sylvaner Schlossentferner"},
        Text{"a sylvan lockpick",                   "un Crochet de Serrure Sylvestre",              "una apertura portentosa enselvada",                    "un grimaldello silvestre",                                 "ein sylvaner Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Forest Temple Small Key",           "une Petite Clé du Temple de la Forêt",         "una llave pequeña del Templo del Bosque",              "una piccola chiave del Santuario della Foresta",           "ein kleiner Schlüssel des Waldtempels"}
    );

    hintTable[FIRE_TEMPLE_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a molten tool for unlocking",         "un Anti-Porte Fondu",                          "una clave de una entrada fundida",                     "uno sbloccatore bollente",                                 "etwas Schmelzendes zum Entriegeln"},
        Text{"a molten dungeon pass",               "le Rêve d'un Prisonnier Fondu",                "un pase de una mazmorra fundida",                      "un permesso bollente",                                     "ein schmelzender Labyrinth-Pass"},
        Text{"a molten lock remover",               "un Efface-Serrure Fondu",                      "un destructor de cerraduras fundidas",                 "un dissolutore di catene bollenti",                        "ein schmelzender Schlossentferner"},
        Text{"a molten lockpick",                   "un Crochet de Serrure Fondue",                 "una apertura portentosa fundida",                      "un grimaldello bollente",                                  "ein schmelzender Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Fire Temple Small Key",             "une Petite Clé du Temple du Feu",              "una llave pequeña del Templo del Fuego",               "una piccola chiave del Santuario del Fuoco",               "ein kleiner Schlüssel des Feuertempels"}
    );

    hintTable[WATER_TEMPLE_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a wet tool for unlocking",            "un Anti-Porte Humide",                         "una clave de una entrada mojada",                      "uno sbloccatore idraulico",                                "etwas Nasses zum Entriegeln"},
        Text{"a wet dungeon pass",                  "le Rêve d'un Prisonnier Humide",               "un pase de una mazmorra mojada",                       "un permesso idraulico",                                    "ein nasser Labyrinth-Pass"},
        Text{"a wet lock remover",                  "un Efface-Serrure Humide",                     "un destructor de cerraduras mojadas",                  "un dissolutore di catene idrauliche",                      "ein nasser Schlossentferner"},
        Text{"a wet lockpick",                      "un Crochet de Serrure Humide",                 "una apertura portentosa mojada",                       "un grimaldello idraulico",                                 "ein nasser Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Water Temple Small Key",            "une Petite Clé du Temple de l'Eau",            "una llave pequeña del Templo del Agua",                "una piccola chiave del Santuario dell'Acqua",              "ein kleiner Schlüssel des Wassertempels"}
    );

    hintTable[SPIRIT_TEMPLE_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a sandy tool for unlocking",          "un Anti-Porte Sablonneux",                     "una clave de una entrada arenosa",                     "uno sbloccatore sabbioso",                                 "etwas Sandiges zum Entriegeln"},
        Text{"a sandy dungeon pass",                "le Rêve d'un Prisonnier Sablonneux",           "un pase de una mazmorra arenosa",                      "un permesso sabbioso",                                     "ein sandiger Labyrinth-Pass"},
        Text{"a sandy lock remover",                "un Efface-Serrure Sablonneux",                 "un destructor de cerraduras arenosas",                 "un dissolutore di catene sabbiose",                        "ein sandiger Schlossentferner"},
        Text{"a sandy lockpick",                    "un Crochet de Serrure Sablonneuse",            "una apertura portentosa arenosa",                      "un grimaldello sabbioso",                                  "ein sandiger Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Spirit Temple Small Key",           "une Petite Clé du Temple de l'Esprit",         "una llave pequeña del Templo del Espíritu",            "una piccola chiave del Santuario dello Spirito",           "ein kleiner Schlüssel des Geistertempels"}
    );

    hintTable[SHADOW_TEMPLE_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a creepy tool for unlocking",         "un Anti-Porte Sinistre",                       "una clave de una entrada siniestra",                   "uno sbloccatore patibolare",                               "etwas Gruseliges zum Entriegeln"},
        Text{"a creepy dungeon pass",               "le Rêve d'un Prisonnier Sinistre",             "un pase de una mazmorra siniestra",                    "un permesso patibolare",                                   "ein gruseliger Labyrinth-Pass"},
        Text{"a creepy lock remover",               "un Efface-Serrure Sinistre",                   "un destructor de cerraduras siniestras",               "un dissolutore di catene patibolari",                      "ein gruseliger Schlossentferner"},
        Text{"a creepy lockpick",                   "un Crochet de Serrure Sinistre",               "una apertura portentosa siniestra",                    "un grimaldello patibolare",                                "ein gruseliger Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Shadow Temple Small Key",           "une Petite Clé du Temple de l'Ombre",          "una llave pequeña del Templo de las Sombras",          "una piccola chiave del Santuario dell'Ombra",              "ein kleiner Schlüssel des Schattentempels"}
    );

    hintTable[GERUDO_TRAINING_GROUNDS_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a labyrinthian tool for unlocking",   "un Anti-Porte Labyrinthique",                  "una clave de una entrada laberíntica",                 "uno sbloccatore labirintico",                              "etwas Verwirrendes zum Entriegeln"},
        Text{"a labyrinthian dungeon pass",         "le Rêve Labyrinthique d'un Prisonnier",        "un pase de una mazmorra laberíntica",                  "un permesso labirintico",                                  "ein verwirrender Labyrinth-Pass"},
        Text{"a labyrinthian lock remover",         "un Efface-Serrure Labyrinthique",              "un destructor de cerraduras laberínticas",             "un dissolutore di catene labirintiche",                    "ein verwirrender Schlossentferner"},
        Text{"a labyrinthian lockpick",             "un Crochet de Serrure Labyrinthique",          "una apertura portentosa laberíntica",                  "un grimaldello labirintico",                               "ein verwirrender Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Gerudo Training Ground Small Key",  "une Petite Clé du Gymnase Gerudo",             "una llave pequeña del Centro de Instrucción Gerudo",   "una piccola chiave della zona di addestramento Gerudo",    "ein kleiner Schlüssel der Gerudo Trainingsarena"}
    );

    hintTable[GERUDO_FORTRESS_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"an imprisoned tool for unlocking",    "un Anti-Porte Emprisonné",                     "una clave de una entrada encarcelada",                 "uno sbloccatore per prigionieri",                          "etwas zum Entriegeln für Inhaftierte"},
        Text{"an imprisoned dungeon pass",          "le Rêve d'un Prisonnier Emprisonné",           "un pase de una mazmorra encarcelada",                  "un permesso per prigionieri",                              "ein Labyrinth-Pass für Inhaftierte"},
        Text{"an imprisoned lock remover",          "un Efface-Serrure Emprisonné",                 "un destructor de cerraduras encarceladas",             "un dissolutore di catene per prigionieri",                 "ein Schlossentferner für Inhaftierte"},
        Text{"an imprisoned lockpick",              "un Crochet de Serrure Emprisonnée",            "una apertura portentosa encarcelada",                  "un grimaldello per prigionieri",                           "ein Dietrich für Inhaftierte"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Gerudo Fortress Small Key",         "une Petite Clé de la Forteresse Gerudo",       "una llave pequeña de la Fortaleza Gerudo",             "una piccola chiave della fortezza Gerudo",                 "ein kleiner Schlüssel des Diebesverstecks"}
    );

    hintTable[BOTTOM_OF_THE_WELL_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a moldy tool for unlocking",          "un Anti-Porte Moisi",                          "una clave de una entrada mohosa",                      "uno sbloccatore ammuffito",                                "etwas Schimmelndes zum Entriegeln"},
        Text{"a moldy dungeon pass",                "le Rêve d'un Prisonnier Moisi",                "un pase de una mazmorra mohosa",                       "un permesso ammuffito",                                    "ein schimmelnder Labyrinth-Pass"},
        Text{"a moldy lock remover",                "un Efface-Serrure Moisi",                      "un destructor de cerraduras mohosas",                  "un dissolutore di catene ammuffite",                       "ein schimmelnder Schlossentferner"},
        Text{"a moldy lockpick",                    "un Crochet de Serrure Moisie",                 "una apertura portentosa mohosa",                       "un grimaldello ammuffito",                                 "ein schimmelnder Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Bottom of the Well Small Key",      "une Petite Clé du Puits",                      "una llave pequeña del Fondo del pozo",                 "una piccola chiave del fondo del pozzo",                   "ein kleiner Schlüssel vom Grund des Brunnens"}
    );

    hintTable[GANONS_CASTLE_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a final tool for unlocking",          "un dernier Anti-Porte",                        "una clave de una entrada final",                       "uno sbloccatore finale",                                   "etwas Finales zum Entriegeln"},
        Text{"a final dungeon pass",                "le dernier Rêve d'un Prisonnier",              "un pase de una mazmorra final",                        "un permesso finale",                                       "ein finaler Labyrinth-Pass"},
        Text{"a final lock remover",                "un dernier Efface-Serrure",                    "un destructor de cerraduras final",                    "un dissolutore di catene finali",                          "ein finaler Schlossentferner"},
        Text{"a final lockpick",                    "un dernier Crochet de Serrure",                "una apertura portentosa final",                        "un grimaldello finale",                                    "ein finaler Dietrich"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Ganon's Castle Small Key",          "une Petite Clé du Château de Ganon",           "una llave pequeña del Castillo de Ganon",              "una piccola chiave del castello di Ganon",                 "ein kleiner Schlüssel von Ganons Schloss"}
    );

    hintTable[FOREST_TEMPLE_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a sylvan toolbox for unlocking",      "des Anti-Portes Sylvestres",                   "un conjunto silvestre de cerrajero",                   "un inesauribile sbloccatore silvestre",                    "das Sylvane zum Entriegeln"},
        Text{"a sylvan dungeon season pass",        "les Rêves d'un Prisonnier Sylvestre",          "un pase vip de mazmorras silvestre",                   "un passe-partout silvestre",                               "der sylvane Season-Pass"},
        Text{"a sylvan jingling ring",              "des Efface-Serrures Sylvestres",               "una cadena multiusos silvestre",                       "un anello silvestre",                                      "die sylvanen Schlossentferner$"},
        Text{"a sylvan skeleton key",               "des Crochets de Serrure Sylvestre",            "un anillo silvestre contra cerrojos",                  "una chiave magica silvestre",                              "die sylvanen Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Forest Temple Key Ring",            "un Trousseau de Clés du Temple de la Forêt",   "un llavero del Templo del Bosque",                     "un mazzo di chiavi del Santuario della Foresta",           "das Schlüsselbund des Waldtempels"}
    );

    hintTable[FIRE_TEMPLE_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a molten toolbox for unlocking",      "des Anti-Portes Fondus",                       "un conjunto fundido de cerrajero",                     "un inesauribile sbloccatore bollente",                     "das Schmelzende zum Entriegeln"},
        Text{"a molten dungeon season pass",        "les Rêves d'un Prisonnier Fondu",              "un pase vip de mazmorras fundido",                     "un passe-partout bollente",                                "der schmelzende Season-Pass"},
        Text{"a molten jingling ring",              "des Efface-Serrures Fondus",                   "una cadena multiusos fundida",                         "un anello bollente",                                       "die schmelzenden Schlossentferner$"},
        Text{"a molten skeleton key",               "des Crochets de Serrure Fondue",               "un anillo fundido contra cerrojos",                    "una chiave magica bollente",                               "die schmelzenden Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Fire Temple Key Ring",              "un Trousseau de Clés du Temple du Feu",        "un llavero del Templo del Fuego",                      "un mazzo di chiavi del Santuario del Fuoco",               "das Schlüsselbund des Feuertempels"}
    );

    hintTable[WATER_TEMPLE_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a wet toolbox for unlocking",         "des Anti-Portes Humides",                      "un conjunto abisal de cerrajero",                      "un inesauribile sbloccatore idraulico",                    "das Nasse zum Entriegeln"},
        Text{"a wet dungeon season pass",           "les Rêves d'un Prisonnier Humide",             "un pase vip de mazmorras abisal",                      "un passe-partout idraulico",                               "der nasse Season-Pass"},
        Text{"a wet jingling ring",                 "des Efface-Serrures Humides",                  "una cadena multiusos abisal",                          "un anello idraulico",                                      "die nassen Schlossentferner$"},
        Text{"a wet skeleton key",                  "des Crochets de Serrure Humide",               "un anillo abisal contra cerrojos",                     "una chiave magica idraulica",                              "die nassen Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Water Temple Key Ring",             "un Trousseau de Clés du Temple de l'Eau",      "un llavero del Templo del Agua",                       "un mazzo di chiavi del Santuario dell'Acqua",              "das Schlüsselbund des Wassertempels"}
    );

    hintTable[SPIRIT_TEMPLE_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a sandy toolbox for unlocking",       "des Anti-Portes Sablonneux",                   "un conjunto arenoso de cerrajero",                     "un inesauribile sbloccatore sabbioso",                     "das Sandige zum Entriegeln"},
        Text{"a sandy dungeon season pass",         "les Rêves d'un Prisonnier Sablonneux",         "un pase vip de mazmorras arenoso",                     "un passe-partout sabbioso",                                "der sandige Season-Pass"},
        Text{"a sandy jingling ring",               "des Efface-Serrures Sablonneux",               "una cadena multiusos arenosa",                         "un anello sabbioso",                                       "die sandigen Schlossentferner$"},
        Text{"a sandy skeleton key",                "des Crochets de Serrure Sablonneuse",          "un anillo arenoso contra cerrojos",                    "una chiave magica sabbiosa",                               "die sandigen Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Spirit Temple Key Ring",            "un Trousseau de Clés du Temple de l'Esprit",   "un llavero del Templo del Espíritu",                   "un mazzo di chiavi del Santuario dello Spirito",           "das Schlüsselbund des Geistertempels"}
    );

    hintTable[SHADOW_TEMPLE_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a creepy toolbox for unlocking",      "des Anti-Portes Sinistres",                    "un conjunto tenebroso de cerrajero",                   "un inesauribile sbloccatore patibolare",                   "das Gruselige zum Entriegeln"},
        Text{"a creepy dungeon season pass",        "les Rêves d'un Prisonnier Sinistre",           "un pase vip de mazmorras tenebroso",                   "un passe-partout patibolare",                              "der gruselige Season-Pass"},
        Text{"a creepy jingling ring",              "des Efface-Serrures Sinistres",                "una cadena multiusos tenebrosa",                       "un anello patibolare",                                     "die gruseligen Schlossentferner$"},
        Text{"a creepy skeleton key",               "des Crochets de Serrure Sinistre",             "un anillo tenebroso contra cerrojos",                  "una chiave magica patibolare",                             "die gruseligen Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Shadow Temple Key Ring",            "un Trousseau de Clés du Temple de l'Ombre",    "un llavero del Templo de las Sombras",                 "un mazzo di chiavi del Santuario dell'Ombra",              "das Schlüsselbund des Schattentempels"}
    );

    hintTable[GERUDO_TRAINING_GROUNDS_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a labyrinthian toolbox for unlocking","des Anti-Portes Labyrinthiques",               "un conjunto laberíntico de cerrajero",                 "un inesauribile sbloccatore labirintico",                  "das Verwirrende zum Entriegeln"},
        Text{"a labyrinthian dungeon season pass",  "les Rêves Labyrinthiques d'un Prisonnier",     "un pase vip de mazmorras laberíntico",                 "un passe-partout labirintico",                             "der verwirrende Season-Pass"},
        Text{"a labyrinthian jingling ring",        "des Efface-Serrures Labyrinthiques",           "una cadena multiusos laberíntica",                     "un anello labirintico",                                    "die verwirrenden Schlossentferner$"},
        Text{"a labyrinthian skeleton key",         "des Crochets de Serrure Labyrinthiques",       "un anillo laberíntico contra cerrojos",                "una chiave magica labirintica",                            "die verwirrenden Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Gerudo Training Ground Key Ring",   "un Trousseau de Clés du Gymnase Gerudo",       "un llavero del Centro de Instrucción Gerudo",          "un mazzo di chiavi della zona di addestramento",           "das Schlüsselbund der Gerudo Trainingsarena"}
    );

    hintTable[GERUDO_FORTRESS_KEY_RING] = HintText::Item({
         // obscure text
        Text{"an imprisoned toolbox for unlocking", "des Anti-Portes Emprisonnés",                  "un conjunto enjaulado de cerrajero",                   "un inesauribile sbloccatore per prigionieri",              "das Entriegelnde für Inhaftierte"},
        Text{"an imprisoned dungeon season pass",   "les Rêves d'un Prisonnier Emprisonné",         "un pase vip de una mazmorra enjaulado",                "un passe-partout per prigionieri",                         "der Season-Pass für Inhaftierte"},
        Text{"an imprisoned jingling ring",         "des Efface-Serrures Emprisonnés",              "una cadena multiusos enjaulada",                       "un anello per prigionieri",                                "die Schlossentferner für Inhaftierte$"},
        Text{"an imprisoned skeleton key",          "des Crochets de Serrure Emprisonnés",          "un anillo enjaulado contra cerrojos",                  "una chiave magica per prigionieri",                        "die Dietriche für Inhaftierte$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Gerudo Fortress Key Ring",          "un Trousseau de Clés de la Forteresse Gerudo", "un llavero de la Fortaleza Gerudo",                    "un mazzo di chiavi della fortezza Gerudo",                 "das Schlüsselbund des Diebesverstecks"}
    );

    hintTable[BOTTOM_OF_THE_WELL_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a moldy toolbox for unlocking",       "des Anti-Portes Moisis",                       "un conjunto subterráneo de cerrajero",                 "un inesauribile sbloccatore ammuffito",                    "das Schimmelnde zum Entriegeln"},
        Text{"a moldy dungeon season pass",         "les Rêves d'un Prisonnier Moisi",              "un pase vip de una mazmorra subterráneo",              "un passe-partout ammuffito",                               "der schimmelnde Season-Pass"},
        Text{"a moldy jingling ring",               "des Efface-Serrures Moisis",                   "una cadena multiusos subterránea",                     "un anello ammuffito",                                      "die schimmelnden Schlossentferner$"},
        Text{"a moldy skeleton key",                "des Crochets de Serrure Moisis",               "un anillo subterráneo contra cerrojos",                "una chiave magica ammuffita",                              "die schimmelnden Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Bottom of the Well Key Ring",       "un Trousseau de Clés du Puits",                "un llavero del Fondo del pozo",                        "un mazzo di chiavi del fondo del pozzo",                   "das Schlüsselbund vom Grund des Brunnens"}
    );

    hintTable[GANONS_CASTLE_KEY_RING] = HintText::Item({
         // obscure text
        Text{"a final toolbox for unlocking",       "les derniers Anti-Portes",                     "un conjunto decisivo de cerrajero",                    "un inesauribile sbloccatore finale",                       "das Finale zum Entriegeln"},
        Text{"a final dungeon season pass",         "les derniers Rêves d'un Prisonnier",           "un pase vip de una mazmorra decisivo",                 "un passe-partout finale",                                  "der finale Season-Pass"},
        Text{"a final jingling ring",               "les derniers Efface-Serrures",                 "una cadena multiusos decisiva",                        "un anello finale",                                         "die finalen Schlossentferner$"},
        Text{"a final skeleton key",                "les derniers Crochets de Serrure",             "un anillo decisivo multiusos",                         "una chiave magica finale",                                 "die finalen Dietriche$"},
    }, {
         // ambiguous text
        Text{"a key ring",                          "un Trousseau de Clés",                         "un llavero",                                           "un mazzo di chiavi",                                       "ein Schlüsselbund"},
    },
         // clear text
        Text{"a Ganon's Castle Key Ring",           "un Trousseau de Clés du Château de Ganon",     "un llavero del Castillo de Ganon",                     "un mazzo di chiavi del castello di Ganon",                 "das Schlüsselbund von Ganons Schloss"}
    );

    hintTable[TREASURE_GAME_SMALL_KEY] = HintText::Item({
         // obscure text
        Text{"a gambler's tool for unlocking",      "un Anti-Porte Aléatoire",                      "una clave de un juego de azar",                        "uno sbloccatore fortuito",                                 "etwas zum Entriegeln für Zocker"},
        Text{"a gambler's dungeon pass",            "le Rêve d'un Prisonnier Parieur",              "un pase de un juego de azar",                          "un permesso fortuito",                                     "ein Labyrinth-Pass für Zocker"},
        Text{"a gambler's lock remover",            "un Efface-Serrure Aléatoire",                  "un destructor de cerraduras del juego de azar",        "un dissolutore di catene fortuite",                        "ein Schlossentferner für Zocker"},
        Text{"a gambler's lockpick",                "un Crochet de Serrure Aléatoire",              "una apertura portentosa del juego de azar",            "un grimaldello fortuito",                                  "ein Dietrich für Zocker"},
    }, {
         // ambiguous text
        Text{"a small key",                         "une Petite Clé",                               "una llave pequeña",                                    "una piccola chiave",                                       "ein kleiner Schlüssel"},
    },
         // clear text
        Text{"a Treasure Chest Shop Small Key",     "une Petite Clé de la Chasse aux Trésors",      "una llave pequeña del Cofre del Tesoro",               "una piccola chiave della sala della fortuna",              "ein kleiner Schlüssel der Truhenlotterie"}
    );

    hintTable[KOKIRI_EMERALD] = HintText::Item({
        // obscure text
        Text{"a green stone",                       "une Pierre Verte",                             "una piedra verde",                                     "una pietra verde",                                         "ein grüner Stein"},
        Text{"a gift before death",                 "le Dernier Souffle d'un Arbre",                "un obsequio testamentario",                            "un dono dal letto di morte",                               "ein Abschiedsgeschenk"},
    }, {
        // ambiguous text
        Text{"a spiritual stone",                   "une Pierre Spirituelle",                       "una piedra espiritual",                                "una pietra spirituale",                                    "ein Heiliger Stein"},
    },
        // clear text
        Text{"the Kokiri Emerald",                  "l'Émeraude Kokiri",                            "la Esmeralda de los Kokiri",                           "lo smeraldo dei Kokiri",                                   "der Kokiri-Smaragd"}
    );

    hintTable[GORON_RUBY] = HintText::Item({
        // obscure text
        Text{"a red stone",                         "une Pierre Rouge",                             "una piedra carmín",                                    "una pietra rossa",                                         "ein roter Stein"},
        Text{"sworn brotherhood",                   "un Serment de Fraternité",                     "el juramento de hermanos de sangre",                   "fratellanza rocciosa",                                     "die geschworene Bruderschaft"},
    }, {
        // ambiguous text
        Text{"a spiritual stone",                   "une Pierre Spirituelle",                       "una piedra espiritual",                                "una pietra spirituale",                                    "ein Heiliger Stein"},
    },
        // clear text
        Text{"the Goron Ruby",                      "le Rubis Goron",                               "el Rubí de los Goron",                                 "il rubino dei Goron",                                      "der Goronen-Rubin"}
    );

    hintTable[ZORA_SAPPHIRE] = HintText::Item({
        // obscure text
        Text{"a blue stone",                        "une Pierre Bleue",                             "una piedra celeste",                                   "una pietra azzurra",                                       "ein blauer Stein"},
        Text{"an engagement gift",                  "un Cadeau de Mariage",                         "un regalo de compromiso",                              "un regalo di fidanzamento",                                "ein Verlobungsgeschenk"},
    }, {
        // ambiguous text
        Text{"a spiritual stone",                   "une Pierre Spirituelle",                       "una piedra espiritual",                                "una pietra spirituale",                                    "ein Heiliger Stein"},
    },
        // clear text
        Text{"the Zora Sapphire",                   "le Saphir Zora",                               "el Zafiro de los Zora",                                "lo zaffiro degli Zora",                                    "der Zora-Saphir"}
    );

    hintTable[FOREST_MEDALLION] = HintText::Item({
        // obscure text
        Text{"a green coin",                        "une Pièce Verte",                              "una moneda esmeralda",                                 "un disco verde",                                           "eine grüne Münze"},
        Text{"Saria's friendship",                  "l'amitié de Saria",                            "la amistad de Saria",                                  "il potere di Saria",                                       "Salias Freundschaft"},
    }, {
        // ambiguous text
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un medaglione",                                            "ein Amulett"},
    },
        // clear text
        Text{"the Forest Medallion",                "le Médaillon de la Forêt",                     "el Medallón del Bosque",                               "il medaglione della Foresta",                              "das Amulett des Waldes"}
    );

    hintTable[FIRE_MEDALLION] = HintText::Item({
        // obscure text
        Text{"a red coin",                          "une Pièce rouge",                              "una moneda rubí",                                      "un disco rosso",                                           "eine rote Münze"},
        Text{"Darunia's power",                     "la Fraternité de Darunia",                     "la fraternidad de Darunia",                            "il potere di Darunia",                                     "Darunias Kraft"},
    }, {
        // ambiguous text
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un medaglione",                                            "ein Amulett"},
    },
        // clear text
        Text{"the Fire Medallion",                  "le Médaillon du Feu",                          "el Medallón del Fuego",                                "il medaglione del Fuoco",                                  "das Amulett des Feuers"}
    );

    hintTable[WATER_MEDALLION] = HintText::Item({
        // obscure text
        Text{"a blue coin",                         "une Pièce Bleue",                              "una moneda zafiro",                                    "un disco blu",                                             "eine blaue Münze"},
        Text{"Ruto's power",                        "l'Amour de Ruto",                              "el amor de Ruto",                                      "il potere di Ruto",                                        "Rutos Kraft"},
    }, {
        // ambiguous text
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un medaglione",                                            "ein Amulett"},
    },
        // clear text
        Text{"the Water Medallion",                 "le Médaillon de l'Eau",                        "el Medallón del Agua",                                 "il medaglione dell'Acqua",                                 "das Amulett des Wassers"}
    );

    hintTable[SPIRIT_MEDALLION] = HintText::Item({
        // obscure text
        Text{"an orange coin",                      "une Pièce Orange",                             "una moneda ámbar",                                     "un disco arancione",                                       "eine orangene Münze"},
        Text{"Nabooru's power",                     "le Respect de Nabooru",                        "el respeto de Nabooru",                                "il potere di Naburu",                                      "Naborus Kraft"},
    }, {
        // ambiguous text
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un medaglione",                                            "ein Amulett"},
    },
        // clear text
        Text{"the Spirit Medallion",                "le Médaillon de l'Esprit",                     "el Medallón del Espíritu",                             "il medaglione dello Spirito",                              "das Amulett der Geister"}
    );

    hintTable[SHADOW_MEDALLION] = HintText::Item({
        // obscure text
        Text{"a purple coin",                       "une Pièce Pourpre",                            "una moneda malva",                                     "un disco viola",                                           "eine violette Münze"},
        Text{"Impa's power",                        "la Confiance d'Impa",                          "la confianza de Impa",                                 "il potere di Impa",                                        "Impas Kraft"},
    }, {
        // ambiguous text
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un medaglione",                                            "ein Amulett"},
    },
        // clear text
        Text{"the Shadow Medallion",                "le Médaillon de l'Ombre",                      "el Medallón de la Sombra",                             "il medaglione dell'Ombra",                                 "das Amulett des Schattens"}
    );

    hintTable[LIGHT_MEDALLION] = HintText::Item({
        // obscure text
        Text{"a yellow coin",                       "une Pièce Jaune",                              "una moneda resplandeciente",                           "un disco giallo",                                          "eine gelbe Münze"},
        Text{"Rauru's power",                       "la Foi de Rauru",                              "la fe de Rauru",                                       "il potere di Raul",                                        "Raurus Kraft"},
    }, {
        // ambiguous text
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un medaglione",                                            "ein Amulett"},
    },
        // clear text
        Text{"the Light Medallion",                 "le Médaillon de la Lumière",                   "el Medallón de la Luz",                                "il medaglione della Luce",                                 "das Amulett des Lichts"}
    );

    hintTable[RECOVERY_HEART] = HintText::Item({
        // obscure text
        Text{"a free heal",                         "un Bisou qui guérit",                          "una cura de regalo",                                   "una cura rincuorante",                                     "eine kostenlose Heilung"},
        Text{"a hearty meal",                       "un Petit Amour",                               "una sanación romántica",                               "un bacino",                                                "ein herzhaftes Mahl"},
        Text{"a Band-Aid",                          "un Pansement",                                 "un corazoncito sanador",                               "un cerotto",                                               "ein Pflaster"},
    }, {
        // ambiguous text
        Text{"something heart-shaped",              "une Chose en forme de Cœur",                   "algo con forma de corazón",                            "qualcosa a forma di cuore",                                "etwas herzförmiges"},
    },
        // clear text
        Text{"a Recovery Heart",                    "un Cœur de Vie",                               "un corazón",                                           "un cuore",                                                 "ein Herz"}
    );

    hintTable[GREEN_RUPEE] = HintText::Item({
        // obscure text
        Text{"a unique coin",                       "un Rubis bien Mérité",                         "una singular moneda",                                  "una moneta più unica che rara",                            "eine einzigartige Münze"},
        Text{"a penny",                             "un Sou",                                       "un peso hyliano",                                      "un nichelino",                                             "ein Pfennig"},
        Text{"a green gem",                         "un Joyau Vert",                                "una gema verde",                                       "una gemma verde",                                          "ein grünes Juwel"},
    }, {
        // ambiguous text
        Text{"some rupees",                         "une Quantité de Rubis",                        "una cantidad de rupias",                               "un po' di rupie$",                                         "ein paar Rubine$"},
    },
        // clear text
        Text{"a Green Rupee",                       "un Rubis Vert",                                "una rupia verde",                                      "una rupia verde",                                          "ein grüner Rubin"}
    );

    hintTable[BLUE_RUPEE] = HintText::Item({
        // obscure text
        Text{"a common coin",                       "quelques Sous",                                "una moneda usual",                                     "il solito soldo",                                          "eine übliche Münze"},
        Text{"a blue gem",                          "un Joyau Bleu",                                "una gema azul",                                        "una gemma azzurra",                                        "ein blaues Juwel"},
    }, {
        // ambiguous text
        Text{"some rupees",                         "une Quantité de Rubis",                        "una cantidad de rupias",                               "un po' di rupie$",                                         "ein paar Rubine$"},
    },
        // clear text
        Text{"a Blue Rupee",                        "un Rubis Bleu",                                "una rupia azul",                                       "una rupia blu",                                            "ein blauer Rubin"}
    );

    hintTable[RED_RUPEE] = HintText::Item({
        // obscure text
        Text{"couch cash",                          "un peu de Fric",                               "una buena moneda",                                     "una paghetta",                                             "Taschengeld"},
        Text{"a red gem",                           "un Joyau Rouge",                               "una gema roja",                                        "una gemma rossa",                                          "ein rotes Juwel"},
    }, {
        // ambiguous text
        Text{"some rupees",                         "une Quantité de Rubis",                        "una cantidad de rupias",                               "un po' di rupie$",                                         "ein paar Rubine$"},
    },
        // clear text
        Text{"a Red Rupee",                         "un Rubis Rouge",                               "una rupia roja",                                       "una rupia rossa",                                          "ein roter Rubin"}
    );

    hintTable[PURPLE_RUPEE] = HintText::Item({
        // obscure text
        Text{"big bucks",                           "plein de Fric",                                "plata de calidad",                                     "un bel gruzzolo",                                          "das große Geld"},
        Text{"a purple gem",                        "un Joyau Mauve",                               "una gema morada",                                      "una gemma viola",                                          "ein violettes Juwel"},
        Text{"wealth",                              "la Richesse",                                  "una buena riqueza",                                    "mezzo centone",                                            "Wohlstand"},
    }, {
        // ambiguous text
        Text{"some rupees",                         "une Quantité de Rubis",                        "una cantidad de rupias",                               "un po' di rupie$",                                         "ein paar Rubine$"},
    },
        // clear text
        Text{"a Purple Rupee",                      "un Rubis pourpre",                             "una rupia morada",                                     "una rupia viola",                                          "ein violetter Rubin"}
    );

    hintTable[HUGE_RUPEE] = HintText::Item({
        // obscure text
        Text{"a juicy jackpot",                     "le Jackpot",                                   "el premio gordo",                                      "un jackpot",                                               "ein saftiger Jackpot"},
        Text{"a yellow gem",                        "un Joyau Doré",                                "una gema amarilla",                                    "una gemma d'oro",                                          "ein goldenes Juwel"},
        Text{"a giant gem",                         "un Gros Joyau",                                "una gema descomunal",                                  "una gemma gigante",                                        "ein riesiges Juwel"},
        Text{"great wealth",                        "l'Aisance Financière",                         "dinero a caudales",                                    "una grande ricchezza",                                     "Reichtum"},
    }, {
        // ambiguous text
        Text{"some rupees",                         "une Quantité de Rubis",                        "una cantidad de rupias",                               "un po' di rupie$",                                         "ein paar Rubine$"},
    },
        // clear text
        Text{"a Huge Rupee",                        "un Énorme Rubis",                              "una rupia gigante",                                    "una rupia gigante",                                        "ein goldener Rubin"}
    );

    hintTable[PIECE_OF_HEART] = HintText::Item({
        // obscure text
        Text{"a little love",                       "un peu plus d'Amour",                          "un cuarto de amor",                                    "un po' di amore",                                          "ein bisschen Liebe"},
        Text{"a broken heart",                      "un Cœur Brisé",                                "un corazón roto",                                      "un cuore spezzato",                                        "ein gebrochenes Herz"},
    }, {
        // ambiguous text
        Text{"something heart-shaped",              "une Chose en forme de Cœur",                   "algo con forma de corazón",                            "qualcosa a forma di cuore",                                "etwas herzförmiges"},
    },
        // clear text
        Text{"a Piece of Heart",                    "un Quart de Cœur",                             "una pieza de corazón",                                 "un frammento di cuore",                                    "ein Herzteil"}
    );

    hintTable[HEART_CONTAINER] = HintText::Item({
        // obscure text
        Text{"a lot of love",                       "le Grand Amour",                               "amor por doquier",                                     "un grande amore",                                          "viel Liebe"},
        Text{"a Valentine's gift",                  "un Cadeau de Saint-Valentin",                  "un contenedor de afección",                            "un dono di San Valentino",                                 "ein Geschenk zum Valentinstag"},
        Text{"a boss's organ",                      "un Organe de Monstre",                         "los órganos de un jefe",                               "le spoglie di un boss$",                                   "ein Organ eines Endgegners"},
    }, {
        // ambiguous text
        Text{"something heart-shaped",              "une Chose en forme de Cœur",                   "algo con forma de corazón",                            "qualcosa a forma di cuore",                                "etwas herzförmiges"},
    },
        // clear text
        Text{"a Heart Container",                   "un Réceptacle de Cœur",                        "un contenedor de corazón",                             "un portacuori",                                            "ein Herzcontainer"}
    );

    hintTable[ICE_TRAP] = HintText::Item({
        // obscure text
        Text{"a gift from Ganon",                   "un Cadeau de Ganon",                           "un regalo de Ganon",                                   "un regalo di Ganon",                                       "ein Geschenk Ganons"},
        Text{"a chilling discovery",                "une Frissonante Découverte",                   "un escalofriante hallazgo",                            "una scoperta agghiacciante",                               "eine kühle Entdeckung"},
        Text{"frosty fun",                          "une Engelure",                                 "una gélida diversión",                                 "il cugino di Geronimo",                                    "frostiger Spaß"},
    }, {
        // ambiguous text
        Text{"a Great Fairy's power",               "le Pouvoir d'une Grande Fée",                  "el poder de una Gran Hada",                            "il potere di una Grande Fata",                             "eine Fähigkeit der Feen"},
        Text{"a magic arrow",                       "une Flèche Magique",                           "una flecha mágica",                                    "una freccia incantata",                                    "magische Pfeile$"},
        Text{"a medallion",                         "un Médaillon",                                 "un medallón",                                          "un Medaglione",                                            "ein Amulett"},
        Text{"a spiritual stone",                   "une Pierre Spirituelle",                       "una piedra espiritual",                                "una Pietra Spirituale",                                    "ein Heiliger Stein"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"an Ice Trap",                         "un Piège de Glace",                            "una trampa de hielo",                                  "una trappola",                                             "eine Eisfalle"}
    );

    // MILK

    hintTable[BOMBS_5] = HintText::Item({
        // obscure text
        Text{"a few explosives",                    "une Poignée de Pétards",                       "un par de explosivos",                                 "un po' di esplosivi$",                                     "ein bisschen Sprengstoff"},
        Text{"a few blast balls",                   "une Poignée de Boules Bleues",                 "un par de estallidos",                                 "un po' di scoppi$",                                        "ein paar Sprengkugeln$"},
    }, {
        // ambiguous text
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombs (5 pieces)",                    "une demi-dizaine de Bombes",                   "unas (5) bombas",                                      "5 bombe$",                                                 "Bomben (5 Stück)$"}
    );

    hintTable[BOMBS_10] = HintText::Item({
        // obscure text
        Text{"some explosives",                     "un Paquet de Pétards",                         "unos cuantos explosivos",                              "una decina di esplosivi$",                                 "einiges an Sprengstoff"},
        Text{"some blast balls",                    "un Paquet de Boules Bleues",                   "unos cuantos estallidos",                              "una decina di scoppi$",                                    "einige Sprengkugeln$"},
    }, {
        // ambiguous text
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombs (10 pieces)",                   "une dizaine de Bombes",                        "unas (10) bombas",                                     "10 bombe$",                                                "Bomben (10 Stück)$"}
    );

    hintTable[BOMBS_20] = HintText::Item({
        // obscure text
        Text{"lots-o-explosives",                   "une Abondance de Pétards",                     "un puñado de explosivos",                              "un mucchio di esplosivi$",                                 "'ne Menge Sprengstoff"},
        Text{"plenty of blast balls",               "une Abondance de Boules Bleues",               "bastantes estallidos",                                 "un mucchio di scoppi$",                                    "viele Sprengkugeln$"},
    }, {
        // ambiguous text
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombs (20 pieces)",                   "une vingtaine de Bombes",                      "unas (20) bombas",                                     "20 bombe$",                                                "Bomben (20 Stück)$"}
    );

    hintTable[BOMBCHU_5] = HintText::Item({
        // obscure text
        Text{"a few mice bombs",                    "une Poignée de Rongeurs Explosifs",            "un par de bombas roedoras",                            "un po' di sorci esplosivi$",                               "ein paar Mausbomben$"},
        Text{"a few proximity mice",                "une Poignée de Jouets à Remonter",             "un par de explosivos ratoncitos",                      "un po' di topi a orologeria$",                             "ein paar Näherungsbomben$"},
        Text{"a few wall crawlers",                 "une Poignée de Rapides Grimpeurs",             "un par de trepaparedes",                               "un po' di arrampicamuri$",                                 "ein paar Wandkrabbler$"},
        Text{"a few trail blazers",                 "une Poignée de Zigzags Éclatants",             "un par de ratas propulsadas",                          "un po' di scie a zig-zag$",                                "ein paar Wegbereiterinnen$"},
    }, {
        // ambiguous text
        Text{"a prize of the House of Skulltulas",  "un Prix de la Maison des Skulltulas",          "un obsequio de la Casa Skulltula",                     "un premio delle Aracnule",                                 "ein Preis des Skulltula-Hauses"},
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombchus (5 pieces)",                 "une demi-dizaine de Missiles Teigneux",        "unos (5) bombchus",                                    "5 radiomine$",                                             "Krabbelminen (5 Stück)$"}
    );

    hintTable[BOMBCHU_10] = HintText::Item({
        // obscure text
        Text{"some mice bombs",                     "un Paquet de Rongeurs Explosifs",              "unas cuantas bombas roedoras",                         "una decina di sorci esplosivi$",                           "einige Mausbomben$"},
        Text{"some proximity mice",                 "un Paquet de Jouets à Remonter",               "unos cuantos explosivos ratoncitos",                   "una decina di topi a orologeria$",                         "einige Näherungsbomben$"},
        Text{"some wall crawlers",                  "un Paquet de Rapides Grimpeurs",               "unos cuantos trepaparedes",                            "una decina di arrampicamuri$",                             "einige Wandkrabbler$"},
        Text{"some trail blazers",                  "un Paquet de Zigzags Éclatants",               "unas cuantas ratas propulsadas",                       "una decina di scie a zig-zag$",                            "einige Wegbereiterinnen$"},
    }, {
        // ambiguous text
        Text{"a prize of the House of Skulltulas",  "un Prix de la Maison des Skulltulas",          "un obsequio de la Casa Skulltula",                     "un premio delle Aracnule",                                 "ein Preis des Skulltula-Hauses"},
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombchus (10 pieces)",                "une dizaine de Missiles Teigneux",             "unos (10) bombchus",                                   "10 radiomine$",                                            "Krabbelminen (10 Stück)$"}
    );

    hintTable[BOMBCHU_20] = HintText::Item({
        // obscure text
        Text{"plenty of mice bombs",                "une Abondance de Rongeurs Explosifs",          "bastantes bombas roedoras",                            "un mucchio di sorci esplosivi$",                           "viele Mausbomben$"},
        Text{"plenty of proximity mice",            "une Abondance de Jouets à Remonter",           "bastantes explosivos ratoncitos",                      "un mucchio di topi a orologeria$",                         "viele Näherungsbomben$"},
        Text{"plenty of wall crawlers",             "une Abondance de Rapides Grimpeurs",           "bastantes trepaparedes",                               "un mucchio di arrampicamuri$",                             "viele Wandkrabbler$"},
        Text{"plenty of trail blazers",             "une Abondance de Zigzags Éclatants",           "bastantes ratas propulsadas",                          "un mucchio di scie a zig-zag$",                            "viele Wegbereiterinnen$"},
    }, {
        // ambiguous text
        Text{"a prize of the House of Skulltulas",  "un Prix de la Maison des Skulltulas",          "un obsequio de la Casa Skulltula",                     "un premio delle Aracnule",                                 "ein Preis des Skulltula-Hauses"},
        Text{"explosives",                          "un Paquet d'Explosifs",                        "un montón de explosivos",                              "un pacchetto di esplosivi",                                "Sprengstoff"},
    },
        // clear text
        Text{"Bombchus (20 pieces)",                "une vingtaine de Missiles Teigneux",           "unos (20) bombchus",                                   "20 radiomine$",                                            "Krabbelminen (20 Stück)$"}
    );

    //    BOMBCHU_DROP

    hintTable[ARROWS_5] = HintText::Item({
        // obscure text
        Text{"a few danger darts",                  "une Poignée d'Obus",                           "un par de peligrosos dardos",                          "un po' di punte pungenti$",                                "ein paar Darts$"},
        Text{"a few sharp shafts",                  "une Poignée de Piquets",                       "un par de puntas afiladas",                            "un po' di indicatori dolorosi$",                           "ein paar scharfe Schäfte$"},
    }, {
        // ambiguous text
        Text{"a projectile",                        "un Projectile",                                "un proyectil",                                         "un proiettile",                                            "ein Projektil"},
    },
        // clear text
        Text{"Arrows (5 pieces)",                   "une demi-dizaine de Flèches",                  "unas (5) flechas",                                     "5 frecce$",                                                "Pfeile (5 Stück)$"}
    );

    hintTable[ARROWS_10] = HintText::Item({
        // obscure text
        Text{"some danger darts",                   "un Paquet d'Obus",                             "unos cuantos peligrosos dardos",                       "una decina di punte pungenti$",                            "einige Darts$"},
        Text{"some sharp shafts",                   "un Paquet de Piquets",                         "unas cuantas puntas afiladas",                         "una decina di indicatori dolorosi$",                       "einige scharfe Schäfte$"},
    }, {
        // ambiguous text
        Text{"a projectile",                        "un Projectile",                                "un proyectil",                                         "un proiettile",                                            "ein Projektil"},
    },
        // clear text
        Text{"Arrows (10 pieces)",                  "une dizaine de Flèches",                       "unas (10) flechas",                                    "10 frecce$",                                               "Pfeile (10 Stück)$"}
    );

    hintTable[ARROWS_30] = HintText::Item({
        // obscure text
        Text{"plenty of danger darts",              "une Abondance d'Obus",                         "bastantes peligrosos dardos",                          "un mucchio di punte pungenti$",                            "viele Darts$"},
        Text{"plenty of sharp shafts",              "une Abondance de Piquets",                     "bastantes puntas afiladas",                            "un mucchio di indicatori dolorosi$",                       "viele scharfe Schäfte$"},
    }, {
        // ambiguous text
        Text{"a projectile",                        "un Projectile",                                "un proyectil",                                         "un proiettile",                                            "ein Projektil"},
    },
        // clear text
        Text{"Arrows (30 pieces)",                  "une trentaine de Flèches",                     "unas (30) flechas",                                    "30 frecce$",                                               "Pfeile (30 Stück)$"}
    );

    hintTable[DEKU_NUTS_5] = HintText::Item({
        // obscure text
        Text{"some nuts",                           "une Poignée de Noisettes",                     "un par de nueces",                                     "un po' di noci$",                                          "ein paar Nüsse$"},
        Text{"some flashbangs",                     "une Poignée d'Éclats",                         "un par de semillas aturdidoras",                       "un po' di granate stordenti$",                             "ein paar Blendgranaten$"},
        Text{"some scrub spit",                     "une Poignée de Crachats Mojo",                 "un par de escupitajos deku",                           "un po' di sputi di Deku$",                                 "ein bisschen Deku-Spucke"},
    }, {
        // ambiguous text
        Text{"some Deku munitions",                 "un Paquet de Munitions Mojo",                  "un montón de municiones Deku",                         "un pacchetto di munizioni Deku",                           "etwas Deku-Munition"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"Deku Nuts (5 pieces)",                "une demi-dizaine de Noix Mojo",                "unas (5) nueces deku",                                 "5 noci Deku$",                                             "Deku-Nüsse (5 Stück)$"}
    );

    hintTable[DEKU_NUTS_10] = HintText::Item({
        // obscure text
        Text{"lots-o-nuts",                         "un Paquet de Noisettes",                       "un puñado de nueces",                                  "un mucchio di noci$",                                      "'ne Menge Nüsse$"},
        Text{"plenty of flashbangs",                "un Paquet d'Éclats",                           "unas cuantas semillas aturdidoras",                    "un mucchio di granate stordenti$",                         "viele Blendgranaten$"},
        Text{"plenty of scrub spit",                "un Paquet de Crachats Mojo",                   "unos cuantos escupitajos deku",                        "un mucchio di sputi di Deku$",                             "viel Deku-Spucke"},
    }, {
        // ambiguous text
        Text{"some Deku munitions",                 "un Paquet de Munitions Mojo",                  "un montón de municiones Deku",                         "un pacchetto di munizioni Deku",                           "etwas Deku-Munition"},
        Text{"something that can stun",             "une Chose qui peut Paralyser",                 "algo que pueda paralizar",                             "qualcosa che può paralizzare",                             "etwas zum Betäuben"},
    },
        // clear text
        Text{"Deku Nuts (10 pieces)",               "une dizaine de Noix Mojo",                     "unas (10) nueces deku",                                "10 noci Deku$",                                            "Deku-Nüsse (10 Stück)$"}
    );

    hintTable[DEKU_SEEDS_30] = HintText::Item({
        // obscure text
        Text{"catapult ammo",                       "un Paquet de Délicieuses Munitions",           "un par de munición infantil",                          "munizioni per catapulte$",                                 "Katapultmunition"},
        Text{"lots-o-seeds",                        "un Paquet de Germes Séchées",                  "un puñado de semillas",                                "un mucchio di semi$",                                      "'ne Menge Kerne"},
    }, {
        // ambiguous text
        Text{"a projectile",                        "un Projectile",                                "un proyectil",                                         "un proiettile",                                            "ein Projektil"},
        Text{"some Deku munitions",                 "un Paquet de Munitions Mojo",                  "un montón de municiones Deku",                         "un pacchetto di munizioni Deku",                           "etwas Deku-Munition"},
    },
        // clear text
        Text{"Deku Seeds (30 pieces)",              "une trentaine de Graines Mojo",                "unas (30) semillas deku",                              "30 semi Deku$",                                            "Deku-Kerne (30 Stück)"}
    );

    hintTable[DEKU_STICK_1] = HintText::Item({
        // obscure text
        Text{"a breakable branch",                  "un Bout de Bois",                              "un pequeño báculo",                                    "un legno lungo",                                           "ein zerbrechlicher Ast"},
    }, {
        // ambiguous text
        Text{"some Deku munitions",                 "un Paquet de Munitions Mojo",                  "un montón de municiones Deku",                         "un pacchetto di munizioni Deku",                           "etwas Deku-Munition"},
    },
        // clear text
        Text{"a Deku Stick",                        "un Bâton Mojo",                                "un palo deku",                                         "un ramo Deku",                                             "ein Deku-Stab"}
    );

    hintTable[TREASURE_GAME_HEART] = HintText::Item({
        // obscure text
        Text{"a victory valentine",                 "un Amour Gagnant",                             "el amor victorioso",                                   "amore vincitore",                                          "ein Schätzchen des Sieges"},
    }, {
        // ambiguous text
        Text{"something heart-shaped",              "une Chose en forme de Cœur",                   "algo con forma de corazón",                            "qualcosa a forma di cuore",                                "etwas herzförmiges"},
    },
        // clear text
        Text{"a Piece of Heart",                    "un Quart de Cœur",                             "el amor de la victoria",                               "un frammento di cuore",                                    "ein Herzteil"}
    );

    hintTable[TREASURE_GAME_GREEN_RUPEE] = HintText::Item({
        // obscure text
        Text{"the dollar of defeat",                "le Rubis de la Défaite",                       "el peso de la derrota",                                "la moneta della sconfitta",                                "der Rubin des Verlierers"},
    }, {
        // ambiguous text
        Text{"some rupees",                         "une Quantité de Rubis",                        "una cantidad de rupias",                               "un po' di rupie$",                                         "ein paar Rubine$"},
    },
        // clear text
        Text{"a Green Rupee",                       "un Rubis Vert",                                "una rupia verde",                                      "una rupia verde",                                          "ein grüner Rubin"}
    );

    hintTable[TRIFORCE_PIECE] = HintText::Item({
        // obscure text
        Text{"a triumph fork",                      "la Tribosse",                                  "un trígono del triunfo",                               "una triporta dorata",                                      "ein Siegerdreieck"},
        Text{"cheese",                              "du Fromage",                                   "un porción de queso",                                  "del formaggio",                                            "Käse"},
        Text{"a gold fragment",                     "un Fragment d'Or",                             "un fragmento dorado",                                  "un frammento dorato",                                      "ein Goldfragment"},
    }, {
    },
        // clear text
        Text{"a Piece of the Triforce",             "un Fragment de la Triforce",                   "un fragmento de la Trifuerza",                         "un frammento di Triforza",                                 "ein Triforce-Splitter"}
    );

    hintTable[EPONA] = HintText::Item({
        // obscure text
        Text{"a horse",                             "un Fidèle Destrier",                           "una yegua",                                            "una cavalla",                                              "ein Pferd"},
        Text{"a four legged friend",                "un Puissant Animal",                           "una amiga cuadrúpeda",                                 "un'amica a quattro zampe",                                 "ein vierbeiniger Freund"},
    }, {
        // ambiguous text
        Text{"something from Malon",                "un Cadeau de Malon",                           "un obsequio de Malon",                                 "un dono di Malon",                                         "etwas von Malon"},
        Text{"a song sung by frogs",                "une Chanson aimée des Grenouilles",            "una melodía de ranas",                                 "un animale",                                               "ein von Fröschen gesungenes Lied"},
        Text{"something to cross a broken bridge",  "une Chose pour traverser un Pont Brisé",       "algo para cruzar un puente roto",                      "qualcosa per oltrepassare un ponte rotto",                 "etwas um eine zerstörte Brücke zu überqueren"},
    },
        // clear text
        Text{"Epona",                               "Epona",                                        "a Epona",                                              "Epona",                                                    "Epona"}
    );

    hintTable[HINT_MYSTERIOUS] = HintText::Item({
        // only obscure text, used for merchants without hints
        Text{"something mysterious",                "un Sacré Mystère",                             "algo misterioso",                                      "qualcosa di misterioso",                                   "etwas Unvorhergesehenes"},
        Text{"an unknown treasure",                 "un Trésor Inconnu",                            "un desconocido tesoro",                                "un tesoro incognito",                                      "ein unbekannter Schatz"},
    });

    // hintTable[HINT_ERROR] = HintText::Item({
    //     Text{"An Error (Please Report This)", "une erreur (signaler S.V.P.)", "un error (repórtelo si es posible)", "un errore (segnalalo per favore)", "ein Fehler (Bitte melden)"}
    // });

    hintTable[SOUL_ITEM_POE] = HintText::Item({
        // obscure text
        Text{"the Poe Soul",                        "l'Âme d'Esprit",                               "el alma de Poe",                                       "l'anima di Poo",                                           "die Seele von Irrlichtern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_OCTOROK] = HintText::Item({
        // obscure text
        Text{"the Octorok Soul",                    "l'Âme d'Octorok",                              "el alma de Octorok",                                   "l'anima di Octorok",                                       "die Seele von Oktorok"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_KEESE] = HintText::Item({
        // obscure text
        Text{"the Keese Soul",                      "l'Âme de Saigneur",                            "el alma de Keese",                                     "l'anima di Pipistrello",                                   "die Seele von Flederbeißern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_TEKTITE] = HintText::Item({
        // obscure text
        Text{"the Tektite Soul",                    "l'Âme d'Araknon",                              "el alma de Tektite",                                   "l'anima di Tektite",                                       "die Seele von Arachnos"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_LEEVER] = HintText::Item({
        // obscure text
        Text{"the Leever Soul",                     "l'Âme de Leever",                              "el alma de Leever",                                    "l'anima di Leever",                                        "die Seele von Sandkillern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_PEAHAT] = HintText::Item({
        // obscure text
        Text{"the Peahat Soul",                     "l'Âme de Peahat",                              "el alma de Peahat",                                    "l'anima di Bulbocottero",                                  "die Seele von Killeranas"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_LIZALFOS] = HintText::Item({
        // obscure text
        Text{"the Lizalfos and Dinolfos Soul",      "l'Âme de Lézalfos et de Dinolfos",             "el alma de Lizalfos y Dinolfos",                       "l'anima di Lizalfos e Dinolfos",                           "die Seele von Echsalfos und Dinodorus"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_SHABOM] = HintText::Item({
        // obscure text
        Text{"the Shabom Soul",                     "l'Âme de Bulld'O",                             "el alma de Shabom",                                    "l'anima di Shabom",                                        "die Seele von Blubberblasen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_BIRI_BARI] = HintText::Item({
        // obscure text
        Text{"the Biri and Bari Soul",              "l'Âme de Biri et de Bari",                     "el alma de Biri y Bari",                               "l'anima di Cnidiri e Cnidari",                             "die Seele von Zappelquallen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_TAILPASARAN] = HintText::Item({
        // obscure text
        Text{"the Tailpasaran Soul",                "l'Âme de Tailpasaran",                         "el alma de Tailpasaran",                               "l'anima di Trivolt",                                       "die Seele von Zangengreifern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_SKULLTULA] = HintText::Item({
        // obscure text
        Text{"the Skulltula Soul",                  "l'Âme de Skulltula",                           "el alma de Skulltula",                                 "l'anima di Aracnula",                                      "die Seele von Skulltulas"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_TORCH_SLUG] = HintText::Item({
        // obscure text
        Text{"the Torch Slug Soul",                 "l'Âme de Feu Visqueux",                        "el alma de Llamababa",                                 "l'anima di Lumaca di lava",                                "die Seele von Lavaschleimen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_STINGER] = HintText::Item({
        // obscure text
        Text{"the Stinger Soul",                    "l'Âme de Manta",                               "el alma de Stinger",                                   "l'anima di Trigone volante",                               "die Seele von Elektromantas"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_MOBLIN] = HintText::Item({
        // obscure text
        Text{"the Moblin Soul",                     "l'Âme de Moblin",                              "el alma de Moblin",                                    "l'anima di Grublin",                                       "die Seele von Moblin"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_ARMOS] = HintText::Item({
        // obscure text
        Text{"the Armos Soul",                      "l'Âme d'Armos",                                "el alma de Armos",                                     "l'anima di Armos",                                         "die Seele von Armos-Rittern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_DEKU_BABA] = HintText::Item({
        // obscure text
        Text{"the Deku Baba Soul",                  "l'Âme de Mojo Baba",                           "el alma de Baba Deku",                                 "l'anima di Deku Baba",                                     "die Seele von Dekuranhas"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_BUBBLE] = HintText::Item({
        // obscure text
        Text{"the Bubble Soul",                     "l'Âme de Tetdoss",                             "el alma de Bubble",                                    "l'anima di Nembo",                                         "die Seele von Totenschädeln"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_FLYING_TRAP] = HintText::Item({
        // obscure text
        Text{"the Flying Pot and Tile Soul",        "l'Âme de jarres et de dalles volantes",        "el alma de Jarrones y Baldosas voladoras",             "l'anima di Vasi e Piastrelle volanti",                     "die Seele von fliegenden Krügen und Fliesen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_BEAMOS] = HintText::Item({
        // obscure text
        Text{"the Beamos Soul",                     "l'Âme de Sentinelle",                          "el alma de Beamos",                                    "l'anima di Laseros",                                       "die Seele von Strahlzyklopen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_WALLMASTER] = HintText::Item({
        // obscure text
        Text{"the Wallmaster and Floormaster Soul", "l'Âme de Clapoir et de Grossbaffe",            "el alma de Wallmaster y Floormaster",                  "l'anima di Mano Diabolica e Mano Rapace",                  "die Seele von Todesgrapschern und Terrorgrapschern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_REDEAD_GIBDO] = HintText::Item({
        // obscure text
        Text{"the ReDead and Gibdo Soul",           "l'Âme d'Effroi et de Gibdo",                   "el alma de ReDead y Gibdo",                            "l'anima di Zombie e Ghibdo",                               "die Seele von Zombies und Wickel-Zombies"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_SHELL_BLADE] = HintText::Item({
        // obscure text
        Text{"the Shell Blade Soul",                "l'Âme de Coquillos",                           "el alma de Moluscuchilla",                             "l'anima di Ostrice",                                       "die Seele von Killermuscheln"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_LIKE_LIKE] = HintText::Item({
        // obscure text
        Text{"the Like Like Soul",                  "l'Âme de Pudding",                             "el alma de Like Like",                                 "l'anima di Like Like",                                     "die Seele von Raubschleimen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_TENTACLE] = HintText::Item({
        // obscure text
        Text{"the Parasitic Tentacle Soul",         "l'Âme de Tentacule Parasite",                  "el alma de Tentáculo Parásito",                        "l'anima di Tentacolo",                                     "die Seele von Parasiten-Tentakeln"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_ANUBIS] = HintText::Item({
        // obscure text
        Text{"the Anubis Soul",                     "l'Âme d'Anubis",                               "el alma de Anubis",                                    "l'anima di Anubi",                                         "die Seele von Anubis"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_SPIKE] = HintText::Item({
        // obscure text
        Text{"the Spike Soul",                      "l'Âme de Spike",                               "el alma de Erizo Metálico",                            "l'anima di Riccio di Ferro",                               "die Seele von Stachelsteinen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_SKULL_KID] = HintText::Item({
        // obscure text
        Text{"the Skull Kid Soul",                  "l'Âme de Skull Kid",                           "el alma de Skull Kid",                                 "l'anima di Bimbo Perduto",                                 "die Seele von Horror-Kid"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_FREEZARD] = HintText::Item({
        // obscure text
        Text{"the Freezard Soul",                   "l'Âme de Mr. Freezzard",                       "el alma de Freezard",                                  "l'anima di Freezard",                                      "die Seele von Frostechsen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_DEKU_SCRUB] = HintText::Item({
        // obscure text
        Text{"the Deku Scrub Soul",                 "l'Âme de Peste Mojo",                          "el alma de Matorral Deku",                             "l'anima di Cespuglio Deku",                                "die Seele von Laubkerlen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_WOLFOS] = HintText::Item({
        // obscure text
        Text{"the Wolfos Soul",                     "l'Âme de Wolfos",                              "el alma de Wolfos",                                    "l'anima di Lupo",                                          "die Seele von Wolfos"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_STALCHILD] = HintText::Item({
        // obscure text
        Text{"the Stalchild Soul",                  "l'Âme de Sakdoss",                             "el alma de Stalchild",                                 "l'anima di Stalfosso",                                     "die Seele von Knochengängern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_GUAY] = HintText::Item({
        // obscure text
        Text{"the Guay Soul",                       "l'Âme de Toukor",                              "el alma de Guay",                                      "l'anima di Corvacchia",                                    "die Seele von Wüstenkrähen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_DOOR_MIMIC] = HintText::Item({
        // obscure text
        Text{"the Door Mimic Soul",                 "l'Âme de Simili-Porte",                        "el alma de Puerta Falsa",                              "l'anima di Porta Falsa",                                   "die Seele von Türmimics"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_STALFOS] = HintText::Item({
        // obscure text
        Text{"the Stalfos Soul",                    "l'Âme de Stalfos",                             "el alma de Stalfos",                                   "l'anima di Stalfos",                                       "die Seele von Stalfos"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_DARK_LINK] = HintText::Item({
        // obscure text
        Text{"the Dark @ Soul",                     "l'Âme de l'Ombre de @",                        "el alma de @ Oscuro",                                  "l'anima di @ Oscuro",                                      "die Seele von schwarzen @"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_FLARE_DANCER] = HintText::Item({
        // obscure text
        Text{"the Flare Dancer Soul",               "l'Âme de Danse-Flamme",                        "el alma de Bailafuego",                                "l'anima di Fiammerino",                                    "die Seele von Flammenderwischen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_DEAD_HAND] = HintText::Item({
        // obscure text
        Text{"the Dead Hand Soul",                  "l'Âme de Poigneur",                            "el alma de Mano Muerta",                               "l'anima di Smaniosso",                                     "die Seele von Hirnsaugern"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_GERUDO] = HintText::Item({
        // obscure text
        Text{"the Gerudo and Iron Knuckle Soul",    "l'Âme de Voleuse Gerudo et de Hache-Viande",   "el alma de Gerudo y Nudillo de hierro",                "l'anima di Gerudo e Guerriero d'acciaio",                  "die Seele von Gerudos und Eisenprinzen"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_GOHMA] = HintText::Item({
        // obscure text
        Text{"the Gohma Soul",                      "l'Âme de Gohma",                               "el alma de Gohma",                                     "l'anima di Gohma",                                         "die Seele von Gohma"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_DODONGO] = HintText::Item({
        // obscure text
        Text{"the Dodongo Soul",                    "l'Âme de Dodongo",                             "el alma de Dodongo",                                   "l'anima di Dodongo",                                       "die Seele von Dodongos"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_BARINADE] = HintText::Item({
        // obscure text
        Text{"the Barinade Soul",                   "l'Âme de Barinade",                            "el alma de Barinade",                                  "l'anima di Cnidade",                                       "die Seele von Barinade"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_PHANTOM_GANON] = HintText::Item({
        // obscure text
        Text{"the Phantom Ganon Soul",              "l'Âme de Ganon Spectral",                      "el alma de Ganon Fantasma",                            "l'anima di Spettro Ganon",                                 "die Seele von Phantom-Ganon"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_VOLVAGIA] = HintText::Item({
        // obscure text
        Text{"the Volvagia Soul",                   "l'Âme de Volcania",                            "el alma de Volvagia",                                  "l'anima di Varubaja",                                      "die Seele von Volvagia"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_MORPHA] = HintText::Item({
        // obscure text
        Text{"the Morpha Soul",                     "l'Âme de Morpha",                              "el alma de Morpha",                                    "l'anima di Morpha",                                        "die Seele von Morpha"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_BONGO_BONGO] = HintText::Item({
        // obscure text
        Text{"the Bongo Bongo Soul",                "l'Âme de Bongo Bongo",                         "el alma de Bongo Bongo",                               "l'anima di Bongo Bongo",                                   "die Seele von Bongo Bongo"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_TWINROVA] = HintText::Item({
        // obscure text
        Text{"the Twinrova Soul",                   "l'Âme de Koume & Kotake",                      "el alma de Birova",                                    "l'anima di Duerova",                                       "die Seele von Twinrova"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[SOUL_ITEM_GANON] = HintText::Item({
        // obscure text
        Text{"the Ganon Soul",                      "l'Âme de Ganon",                               "el alma de Ganon",                                     "l'anima di Ganon",                                         "die Seele von Ganon"},
    }, {
        // ambiguous text
        Text{"a Soul",                              "l'Âme d'un Ennemi",                            "un alma",                                              "un'anima",                                                 "eine Seele"},
    });

    hintTable[OCA_BUTTON_ITEM_L] = HintText::Item({
        // obscure text
        Text{"the Ocarina L Button",                "le Bouton L de l'Ocarina",                     "el botón L de la ocarina",                             "il pulsante L dell'ocarina",                               "der Ocarina L-Knopf"},
    }, {
        // ambiguous text
        Text{"something to play songs",             "Quelque Chose qui fait des Sons",              "algo para tocar canciones",                            "qualcosa per suonare melodie",                             "etwas um Lieder zu spielen"},
    });

    hintTable[OCA_BUTTON_ITEM_R] = HintText::Item({
        // obscure text
        Text{"the Ocarina R Button",                "le Bouton R de l'Ocarina",                     "el botón R de la ocarina",                             "il pulsante R dell'ocarina",                               "der Ocarina R-Knopf"},
    }, {
        // ambiguous text
        Text{"something to play songs",             "Quelque Chose qui fait des Sons",              "algo para tocar canciones",                            "qualcosa per suonare melodie",                             "etwas um Lieder zu spielen"},
    });

    hintTable[OCA_BUTTON_ITEM_X] = HintText::Item({
        // obscure text
        Text{"the Ocarina X Button",                "le Bouton X de l'Ocarina",                     "el botón X de la ocarina",                             "il pulsante X dell'ocarina",                               "der Ocarina X-Knopf"},
    }, {
        // ambiguous text
        Text{"something to play songs",             "Quelque Chose qui fait des Sons",              "algo para tocar canciones",                            "qualcosa per suonare melodie",                             "etwas um Lieder zu spielen"},
    });

    hintTable[OCA_BUTTON_ITEM_Y] = HintText::Item({
        // obscure text
        Text{"the Ocarina Y Button",                "le Bouton Y de l'Ocarina",                     "el botón Y de la ocarina",                             "il pulsante Y dell'ocarina",                               "der Ocarina Y-Knopf"},
    }, {
        // ambiguous text
        Text{"something to play songs",             "Quelque Chose qui fait des Sons",              "algo para tocar canciones",                            "qualcosa per suonare melodie",                             "etwas um Lieder zu spielen"},
    });

    hintTable[OCA_BUTTON_ITEM_A] = HintText::Item({
        // obscure text
        Text{"the Ocarina A Button",                "le Bouton A de l'Ocarina",                     "el botón A de la ocarina",                             "il pulsante A dell'ocarina",                               "der Ocarina A-Knopf"},
    }, {
        // ambiguous text
        Text{"something to play songs",             "Quelque Chose qui fait des Sons",              "algo para tocar canciones",                            "qualcosa per suonare melodie",                             "etwas um Lieder zu spielen"},
    });
}
