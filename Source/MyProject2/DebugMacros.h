#pragma once

#include "CoreMinimal.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 14, FColor::Red, true);
//#define DRAW_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(World, Location, Location + Forward * 100.f, FColor::Blue, true, -1.f, 0.f, 1.f);
//#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);
#define DRAW_VECTOR(StartLocation, EndLocation) \
if (GetWorld()) \
{ \
    DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, true, -1.f, 0.f, 1.f); \
    DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true); \
}


