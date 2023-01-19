#pragma once
#include "Globals.h"

#include "EndpointMinipair.h"


class MinipairDescriptorFactory
{
private:
	static int m_CurrentIndex;
	const static char m_StringCache[20];

	static ENDPOINT_MINIPAIR m_MicrophoneTemplate;
	static ENDPOINT_MINIPAIR m_SpeakerTemplate;

	static ENDPOINT_MINIPAIR m_MicrophoneTemplate2;
	static ENDPOINT_MINIPAIR m_SpeakerTemplate2;

	static void SetLastCharacterOfString(PWSTR string, int valueToSet);

	MinipairDescriptorFactory();
	~MinipairDescriptorFactory();
public:
	static NTSTATUS CreateSpeaker(_Outptr_ ENDPOINT_MINIPAIR ** pMinipair);
	static NTSTATUS CreateMicrophone(_Outptr_ ENDPOINT_MINIPAIR** pMinipair);

	static NTSTATUS CreateSpeaker2(_Outptr_ ENDPOINT_MINIPAIR** pMinipair);
	static NTSTATUS CreateMicrophone2(_Outptr_ ENDPOINT_MINIPAIR** pMinipair);
};

