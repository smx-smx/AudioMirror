#pragma once

#include "Globals.h"

#define SPEAKER_MAX_INPUT_SYSTEM_STREAMS            8       // 48000, 8000, 11025, 12000, 16000, 22500, 24000, 44100
#define SPEAKER_DEVICE_MAX_CHANNELS                 2       // Max Channels.
#define SPEAKER_HOST_MIN_BITS_PER_SAMPLE            16      // Min Bits Per Sample
#define SPEAKER_HOST_MAX_BITS_PER_SAMPLE            16      // Max Bits Per Sample
#define SPEAKER_HOST_MIN_SAMPLE_RATE                8000    // Min Sample Rate
#define SPEAKER_HOST_MAX_SAMPLE_RATE                48000   // Max Sample Rate

//=============================================================================
static KSDATAFORMAT_WAVEFORMATEXTENSIBLE SpeakerHostPinSupportedDeviceFormats[] =
{
	{ // 48000
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				48000,
				48000 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 8000
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				8000,
				8000 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 11025
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				11025,
				11025 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 12000
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				12000,
				12000 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 16000
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				16000,
				16000 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 22050
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2, // nChannels
				22050,
				22050 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 24000
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				24000,
				24000 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
	{ // 44100
		{
			sizeof(KSDATAFORMAT_WAVEFORMATEXTENSIBLE),
			0,
			0,
			0,
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		{
			{
				WAVE_FORMAT_EXTENSIBLE,
				2,  // nChannels
				44100,
				44100 * 4, // JJOC_SPK_SAMPLE_RATE * nBlockAlign
				4,  // nBlockAlign = nChannel * bitPerSample / 8
				16, // bitPerSample
				sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX)
			},
			16,
			KSAUDIO_SPEAKER_STEREO,
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM)
		}
	},
};

// Supported modes (only on streaming pins).
static MODE_AND_DEFAULT_FORMAT SpeakerHostPinSupportedDeviceModes[] =
{
	{
		STATIC_AUDIO_SIGNALPROCESSINGMODE_DEFAULT,
		&SpeakerHostPinSupportedDeviceFormats[0].DataFormat // 48KHz
	}
};

// The entries here must follow the same order as the filter's pin descriptor array.
static PIN_DEVICE_FORMATS_AND_MODES SpeakerPinDeviceFormatsAndModes[] =
{
	{
		PinType::SystemRenderPin,
		SpeakerHostPinSupportedDeviceFormats,
		SIZEOF_ARRAY(SpeakerHostPinSupportedDeviceFormats),
		SpeakerHostPinSupportedDeviceModes,
		SIZEOF_ARRAY(SpeakerHostPinSupportedDeviceModes)
	},
	{
		PinType::BridgePin,
		NULL,
		0,
		NULL,
		0
	},
};

//=============================================================================
static KSDATARANGE SpeakerPinDataRangesBridge[] =
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

static PKSDATARANGE SpeakerPinDataRangePointersBridge[] =
{
	&SpeakerPinDataRangesBridge[0]
};

//=============================================================================
static KSDATARANGE_AUDIO SpeakerPinDataRangesStream[] =
{
	{
		{
			sizeof(KSDATARANGE_AUDIO),
			KSDATARANGE_ATTRIBUTES, // An attributes list follows this data range
			0, // SampleSize, This member is ignored.
			0, // Reserved, Drivers must set this member to zero.
			STATICGUIDOF(KSDATAFORMAT_TYPE_AUDIO),
			STATICGUIDOF(KSDATAFORMAT_SUBTYPE_PCM),
			STATICGUIDOF(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)
		},
		SPEAKER_DEVICE_MAX_CHANNELS,
		SPEAKER_HOST_MIN_BITS_PER_SAMPLE,
		SPEAKER_HOST_MAX_BITS_PER_SAMPLE,
		SPEAKER_HOST_MIN_SAMPLE_RATE,
		SPEAKER_HOST_MAX_SAMPLE_RATE
	},
};

static PKSDATARANGE SpeakerPinDataRangePointersStream[] =
{
	PKSDATARANGE(&SpeakerPinDataRangesStream[0]),
	PKSDATARANGE(&PinDataRangeAttributeList),
};

//=============================================================================
static PCPIN_DESCRIPTOR SpeakerWaveMiniportPins[] =
{
	{ // Wave Out Streaming Pin (Renderer) KSPIN_WAVE_RENDER_SINK_SYSTEM
		SPEAKER_MAX_INPUT_SYSTEM_STREAMS,
		SPEAKER_MAX_INPUT_SYSTEM_STREAMS,
		0,
		NULL,        // AutomationTable
		{
			0,
			NULL,
			0,
			NULL,
			SIZEOF_ARRAY(SpeakerPinDataRangePointersStream),
			SpeakerPinDataRangePointersStream,
			KSPIN_DATAFLOW_IN,
			KSPIN_COMMUNICATION_SINK,
			&KSNODETYPE_SPEAKER,
			NULL,
			0
		}
	},
	{ // Wave Out Bridge Pin (Renderer) KSPIN_WAVE_RENDER_SOURCE
		0,
		0,
		0,
		NULL,
		{
			0,
			NULL,
			0,
			NULL,
			SIZEOF_ARRAY(SpeakerPinDataRangePointersBridge),
			SpeakerPinDataRangePointersBridge,
			KSPIN_DATAFLOW_OUT,
			KSPIN_COMMUNICATION_NONE,
			&KSNODETYPE_SPEAKER,
			NULL,
			0
		}
	}
};

//=============================================================================
//
//                   ----------------------------
//                   |                          |
//  System Pin   0-->|                          |
//                   |                          |
//                   |                          |--> 1 KSPIN_WAVE_RENDER_SOURCE
//                   |                          |
//                   ----------------------------
static PCCONNECTION_DESCRIPTOR SpeakerWaveMiniportConnections[] =
{
	{ PCFILTER_NODE, (int)WaveRenderPins::SINK_SYSTEM, PCFILTER_NODE, (int)WaveRenderPins::SOURCE }
};

//=============================================================================
static PCPROPERTY_ITEM PropertiesSpeakerWaveFilter[] =
{
	{
		&KSPROPSETID_Pin,
		KSPROPERTY_PIN_PROPOSEDATAFORMAT,
		KSPROPERTY_TYPE_SET | KSPROPERTY_TYPE_BASICSUPPORT,
		MiniportWaveRT::PropertyHandler_WaveFilter
	},
	{
		&KSPROPSETID_Pin,
		KSPROPERTY_PIN_PROPOSEDATAFORMAT2,
		KSPROPERTY_TYPE_GET | KSPROPERTY_TYPE_BASICSUPPORT,
		MiniportWaveRT::PropertyHandler_WaveFilter
	}
};

DEFINE_PCAUTOMATION_TABLE_PROP(AutomationSpeakerWaveFilter, PropertiesSpeakerWaveFilter);

//=============================================================================
static PCFILTER_DESCRIPTOR SpeakerWaveMiniportFilterDescriptor =
{
	0,                                              // Version
	&AutomationSpeakerWaveFilter,                   // AutomationTable
	sizeof(PCPIN_DESCRIPTOR),                       // PinSize
	SIZEOF_ARRAY(SpeakerWaveMiniportPins),          // PinCount
	SpeakerWaveMiniportPins,                        // Pins
	sizeof(PCNODE_DESCRIPTOR),                      // NodeSize
	0,                                              // NodeCount
	NULL,                                           // Nodes
	SIZEOF_ARRAY(SpeakerWaveMiniportConnections),   // ConnectionCount
	SpeakerWaveMiniportConnections,                 // Connections
	0,                                              // CategoryCount
	NULL                                            // Categories  - use defaults (audio, render, capture)
};