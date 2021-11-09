AW_sectorActivationRange = 500;
AW_sectorCaptureRadius[] = {150,200,150,100,150}; //Distance units are taken into account when working out capture ratio in format {Town,City,Military,Radio,Factory}
AW_sectorSpawnRadius[] = {250,300,250,250,250}; //Distance units can spawn away from a sector centre in format {Town,City,Military,Radio,Factory}

AW_secondaryMapFactor = 3; //The distance an opfor secondary objective can spawn away from the frontline, used with worldSize / factor, smaller maps will need a smaller factor

AW_maxAmbientCivs = 7; //max ambient civs roaming around
AW_maxAmbientCivAir = 1; //max ambient civs flying around (only if map supports airports)
AW_maxAmbientOpforPatrols = 6; //max ambient enemy vehicles roaming around