#pragma once

class TileSource;
struct TilePos;
#include "../../CommonTypes.h"

struct TileTickingQueue {
	static void (*$add)(TileTickingQueue*, TileSource*, const TilePos&, TileID, int);

	void add(TileSource*, const TilePos&, TileID, int);
};