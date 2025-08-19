#include "trial.hpp"

namespace Trial {

TrialInfo::TrialInfo(Text name_) : name(std::move(name_)) {
}
// clang-format off
TrialInfo::~TrialInfo() = default;

    //                                     English              French                      Spanish                     Italian                         German
    TrialInfo ForestTrial = TrialInfo(Text{"the Forest Trial",  "l'Épreuve de la Forêt",    "la prueba del bosque",     "la Barriera della Foresta",    "das Wald-Siegel"});
    TrialInfo FireTrial   = TrialInfo(Text{"the Fire Trial",    "l'Épreuve du Feu",         "la prueba del fuego",      "la Barriera del Fuoco",        "das Feuer-Siegel"});
    TrialInfo WaterTrial  = TrialInfo(Text{"the Water Trial",   "l'Épreuve de l'Eau",       "la prueba del agua",       "la Barriera dell'Acqua",       "das Wasser-Siegel"});
    TrialInfo SpiritTrial = TrialInfo(Text{"the Spirit Trial",  "l'Épreuve de l'Esprit",    "la prueba del espíritu",   "la Barriera dello Spirito",    "das Geister-Siegel"});
    TrialInfo ShadowTrial = TrialInfo(Text{"the Shadow Trial",  "l'Épreuve de l'Ombre",     "la prueba de las sombras", "la Barriera dell'Ombra",       "das Schatten-Siegel"});
    TrialInfo LightTrial  = TrialInfo(Text{"the Light Trial",   "l'Épreuve de la Lumière",  "la prueba de la luz",      "la Barriera della Luce",       "das Licht-Siegel"});

const TrialArray trialList = {
    &ForestTrial, &FireTrial, &WaterTrial, &SpiritTrial, &ShadowTrial, &LightTrial,
};
// clang-format on
} // namespace Trial
