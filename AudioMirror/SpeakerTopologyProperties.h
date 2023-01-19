#pragma once

#include "Globals.h"
#include "MiniportTopology.h"

DEFINE_GUID(MIC_INPUT_NAME,
0x618ad392, 0xbec0, 0x4b2d, 0xbd, 0x89, 0xe5, 0x05, 0xe1, 0x69, 0xdd, 0x55);

DEFINE_GUID(SPK_INPUT_NAME,
0x1c7320d9, 0x2fce, 0x4214, 0x94, 0xfd, 0xac, 0x1a, 0xcf, 0xf4, 0x12, 0x2a);

enum class TopologyRenderPins
{
	WAVEOUT_SINK = 0,
	LINEOUT_DEST,
};

static
PCCONNECTION_DESCRIPTOR SpeakerTopoMiniportConnections[] =
{
	//  FromNode,       FromPin,									ToNode,         ToPin
	{   PCFILTER_NODE,	(int)TopologyRenderPins::WAVEOUT_SINK,    PCFILTER_NODE,  (int)TopologyRenderPins::LINEOUT_DEST}
};

static
KSDATARANGE SpeakerTopoPinDataRangesBridge[] =
{
 {
   sizeof(KSDATARANGE),
   0,
   0,
   0,
   STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
   STATICGUIDOF(KSDATAFORMAT_SUBTYPE_ANALOG),
   STATICGUIDOF(KSDATAFORMAT_SPECIFIER_NONE)
 }
};

static
PKSDATARANGE SpeakerTopoPinDataRangePointersBridge[] =
{
  &SpeakerTopoPinDataRangesBridge[0]
};

static
PCPIN_DESCRIPTOR SpeakerTopoMiniportPins[] =
{
	// WAVEOUT_SINK
	{
	  0,
	  0,
	  0,                                                  // InstanceCount
	  NULL,                                               // AutomationTable
	  {                                                   // KsPinDescriptor
		0,                                                // InterfacesCount
		NULL,                                             // Interfaces
		0,                                                // MediumsCount
		NULL,                                             // Mediums
		SIZEOF_ARRAY(SpeakerTopoPinDataRangePointersBridge),// DataRangesCount
		SpeakerTopoPinDataRangePointersBridge,            // DataRanges
		KSPIN_DATAFLOW_IN,                                // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSCATEGORY_AUDIO,                                // Category
		NULL,                                             // Name
		0                                                 // Reserved
	  }
	},
	// KSPIN_TOPO_LINEOUT_DEST
	{
	  0,
	  0,
	  0,                                                  // InstanceCount
	  NULL,                                               // AutomationTable
	  {                                                   // KsPinDescriptor
		0,                                                // InterfacesCount
		NULL,                                             // Interfaces
		0,                                                // MediumsCount
		NULL,                                             // Mediums
		SIZEOF_ARRAY(SpeakerTopoPinDataRangePointersBridge),// DataRangesCount
		SpeakerTopoPinDataRangePointersBridge,            // DataRanges
		KSPIN_DATAFLOW_OUT,                               // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSNODETYPE_SPEAKER,                              // Category
		&MIC_INPUT_NAME,                                  // Name
		0                                                 // Reserved
	  }
	}
};

static
PCPIN_DESCRIPTOR SpeakerTopoMiniportPins2[] =
{
	// WAVEOUT_SINK
	{
	  0,
	  0,
	  0,                                                  // InstanceCount
	  NULL,                                               // AutomationTable
	  {                                                   // KsPinDescriptor
		0,                                                // InterfacesCount
		NULL,                                             // Interfaces
		0,                                                // MediumsCount
		NULL,                                             // Mediums
		SIZEOF_ARRAY(SpeakerTopoPinDataRangePointersBridge),// DataRangesCount
		SpeakerTopoPinDataRangePointersBridge,            // DataRanges
		KSPIN_DATAFLOW_IN,                                // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSCATEGORY_AUDIO,                                // Category
		NULL,                                             // Name
		0                                                 // Reserved
	  }
	},
	// KSPIN_TOPO_LINEOUT_DEST
	{
	  0,
	  0,
	  0,                                                  // InstanceCount
	  NULL,                                               // AutomationTable
	  {                                                   // KsPinDescriptor
		0,                                                // InterfacesCount
		NULL,                                             // Interfaces
		0,                                                // MediumsCount
		NULL,                                             // Mediums
		SIZEOF_ARRAY(SpeakerTopoPinDataRangePointersBridge),// DataRangesCount
		SpeakerTopoPinDataRangePointersBridge,            // DataRanges
		KSPIN_DATAFLOW_OUT,                               // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSNODETYPE_SPEAKER,                              // Category
		&SPK_INPUT_NAME,                                  // Name
		0                                                 // Reserved
	  }
	}
};

static PHYSICALCONNECTIONTABLE SpeakerTopologyPhysicalConnections[] =
{
	{
		(int)TopologyPin::Microphone,  // TopologyIn
		(int)WaveRenderPins::SOURCE,   // WaveOut
		PhysicalConnectionOrientation::WaveToTopology
	}
};

static PCFILTER_DESCRIPTOR SpeakerTopoMiniportFilterDescriptor =
{
  0,                                            // Version
  NULL,                 // AutomationTable
  sizeof(PCPIN_DESCRIPTOR),                     // PinSize
  SIZEOF_ARRAY(SpeakerTopoMiniportPins),        // PinCount
  SpeakerTopoMiniportPins,                      // Pins
  sizeof(PCNODE_DESCRIPTOR),                    // NodeSize
  0,                                            // NodeCount
  NULL,                                         // Nodes
  SIZEOF_ARRAY(SpeakerTopoMiniportConnections), // ConnectionCount
  SpeakerTopoMiniportConnections,               // Connections
  0,                                            // CategoryCount
  NULL                                          // Categories
};

static PCFILTER_DESCRIPTOR SpeakerTopoMiniportFilterDescriptor2 =
{
  0,                                            // Version
  NULL,                 // AutomationTable
  sizeof(PCPIN_DESCRIPTOR),                     // PinSize
  SIZEOF_ARRAY(SpeakerTopoMiniportPins2),        // PinCount
  SpeakerTopoMiniportPins2,                      // Pins
  sizeof(PCNODE_DESCRIPTOR),                    // NodeSize
  0,                                            // NodeCount
  NULL,                                         // Nodes
  SIZEOF_ARRAY(SpeakerTopoMiniportConnections), // ConnectionCount
  SpeakerTopoMiniportConnections,               // Connections
  0,                                            // CategoryCount
  NULL                                          // Categories
};