#pragma once

using namespace geode::prelude;

class Manager {

protected:
	static Manager* instance;
public:

	float orignalVolume = FMODAudioEngine::sharedEngine()->m_musicVolume;
	bool volChangeNotFromTierUp = true;
	
	static Manager* getSharedInstance(){

		if (!instance) {
			instance = new Manager();
		};
		return instance;
	}

};