#pragma once
#include "Globals.h"
#include "MiniportTopology.h"
#include "MicrophoneWaveProperties.h"

DEFINE_GUID(MIC_OUTPUT_NAME,
0x15a31160, 0xdf6b, 0x4f89, 0x80, 0xb0, 0x9b, 0xb8, 0x12, 0x59, 0x11, 0x5c);

DEFINE_GUID(SPK_OUTPUT_NAME,
0x9919ca3f, 0x29ca, 0x4728, 0xbb, 0xb7, 0x07, 0xcd, 0xf6, 0x82, 0xe2, 0x48);

static KSDATARANGE MicInTopoPinDataRangesBridge[] =
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

static PKSDATARANGE MicInTopoPinDataRangePointersBridge[] =
{
	&MicInTopoPinDataRangesBridge[0]
};

static PCPIN_DESCRIPTOR MicInTopoMiniportPins[] =
{
	// KSPIN - topology filter in-pin
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
		SIZEOF_ARRAY(MicInTopoPinDataRangePointersBridge),// DataRangesCount
		MicInTopoPinDataRangePointersBridge,              // DataRanges
		KSPIN_DATAFLOW_IN,                                // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSNODETYPE_MICROPHONE,                           // Category
		&MIC_OUTPUT_NAME,								  // Name
		0                                                 // Reserved
	  }
	},

	// KSPIN - topology filter out-in
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
		SIZEOF_ARRAY(MicInTopoPinDataRangePointersBridge),// DataRangesCount
		MicInTopoPinDataRangePointersBridge,              // DataRanges
		KSPIN_DATAFLOW_OUT,                               // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSCATEGORY_AUDIO,                                // Category
		NULL,                                             // Name
		0                                                 // Reserved
	  }
	}
};

static PCPIN_DESCRIPTOR MicInTopoMiniportPins2[] =
{
	// KSPIN - topology filter in-pin
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
		SIZEOF_ARRAY(MicInTopoPinDataRangePointersBridge),// DataRangesCount
		MicInTopoPinDataRangePointersBridge,              // DataRanges
		KSPIN_DATAFLOW_IN,                                // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSNODETYPE_MICROPHONE,                           // Category
		&SPK_OUTPUT_NAME,								  // Name
		0                                                 // Reserved
	  }
	},

	// KSPIN - topology filter out-in
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
		SIZEOF_ARRAY(MicInTopoPinDataRangePointersBridge),// DataRangesCount
		MicInTopoPinDataRangePointersBridge,              // DataRanges
		KSPIN_DATAFLOW_OUT,                               // DataFlow
		KSPIN_COMMUNICATION_NONE,                         // Communication
		&KSCATEGORY_AUDIO,                                // Category
		NULL,                                             // Name
		0                                                 // Reserved
	  }
	}
};

static PCCONNECTION_DESCRIPTOR MicInMiniportConnections[] =
{
	//  FromNode,			FromPin,						ToNode,				ToPin
	{   PCFILTER_NODE,		(int)TopologyPin::Microphone,	PCFILTER_NODE,		(int)TopologyPin::Bridge }
};

static PHYSICALCONNECTIONTABLE MicInTopologyPhysicalConnections[] =
{
	{
		(int)TopologyPin::Bridge,          // TopologyOut
		(int)WaveCapturePins::KSPIN_WAVE_BRIDGE,          // WaveIn
		PhysicalConnectionOrientation::TopologyToWave
	}
};

static PCFILTER_DESCRIPTOR MicInTopoMiniportFilterDescriptor =
{
  0,                                        // Version
  NULL,               // AutomationTable
  sizeof(PCPIN_DESCRIPTOR),                 // PinSize
  SIZEOF_ARRAY(MicInTopoMiniportPins),      // PinCount
  MicInTopoMiniportPins,                    // Pins
  sizeof(PCNODE_DESCRIPTOR),                // NodeSize
  0,										// NodeCount
  NULL,										// Nodes
  SIZEOF_ARRAY(MicInMiniportConnections),   // ConnectionCount
  MicInMiniportConnections,                 // Connections
  0,                                        // CategoryCount
  NULL                                      // Categories
};

static PCFILTER_DESCRIPTOR MicInTopoMiniportFilterDescriptor2 =
{
  0,                                        // Version
  NULL,               // AutomationTable
  sizeof(PCPIN_DESCRIPTOR),                 // PinSize
  SIZEOF_ARRAY(MicInTopoMiniportPins2),     // PinCount
  MicInTopoMiniportPins2,                   // Pins
  sizeof(PCNODE_DESCRIPTOR),                // NodeSize
  0,										// NodeCount
  NULL,										// Nodes
  SIZEOF_ARRAY(MicInMiniportConnections),   // ConnectionCount
  MicInMiniportConnections,                 // Connections
  0,                                        // CategoryCount
  NULL                                      // Categories
};