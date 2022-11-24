#include "MoviePlayerSettings.h"

UMoviePlayerSettings::UMoviePlayerSettings() {
    this->bWaitForMoviesToComplete = false;
    this->bMoviesAreSkippable = false;
    this->StartupMovies.AddDefaulted(1);
}

