
#pragma once

#include "FontGeometry.h"

namespace msdf_atlas {

bool exportAtlas(const FontGeometry *fonts, int fontCount, int atlasWidth, int atlasHeight, YDirection yDirection, const char *filename);

}
