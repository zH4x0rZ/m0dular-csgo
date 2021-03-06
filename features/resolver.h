#ifndef RESOLVER_H
#define RESOLVER_H

#include "../sdk/framework/players.h"

namespace Resolver
{
	extern float resolvedAngles[MAX_PLAYERS];

	void Run(Players* __restrict players, Players* __restrict prevPlayers);
	void ShootPlayer(int player, bool onGround);
	void HitPlayer(int player, bool onGround, float angle);
}

#endif
