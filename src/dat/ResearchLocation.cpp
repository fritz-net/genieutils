#include "genie/dat/ResearchLocation.h"

namespace genie
{
  namespace tech
  {
    ResearchLocation::ResearchLocation()
    {
    }

    ResearchLocation::~ResearchLocation()
    {
    }

    void ResearchLocation::setGameVersion(GameVersion gv)
    {
      ISerializable::setGameVersion(gv);
    }

    void ResearchLocation::serializeObject(void)
    {
      serialize<int16_t>(LocationID);
      serialize<int16_t>(ResearchTime);
      serialize<uint8_t>(ButtonID);
      serialize<int32_t>(HotKeyID);
    }
  }
}
