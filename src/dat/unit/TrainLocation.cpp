#include "genie/dat/unit/TrainLocation.h"

namespace genie
{

  namespace unit
  {
    TrainLocation::TrainLocation()
    {
    }

    TrainLocation::~TrainLocation()
    {
    }

    void TrainLocation::setGameVersion(GameVersion gv)
    {
      ISerializable::setGameVersion(gv);
    }

    void TrainLocation::serializeObject(void)
    {
      GameVersion gv = getGameVersion();

      serialize<int16_t>(TrainTime);
      serialize<int16_t>(UnitID);
      serialize<uint8_t>(ButtonID);
      if (gv >= GV_C30 && gv <= GV_LatestDE2)
      {
        serialize<int32_t>(HotKeyID);
      }
    }

  }
}
