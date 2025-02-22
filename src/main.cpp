#include <Geode/Geode.hpp>
#include <Geode/modify/LevelSearchLayer.hpp>
#include <Geode/utils/cocos.hpp>

using namespace geode::prelude;

class $modify(LevelSearchLayer) {
    bool init(int searchType) {  
        if (!LevelSearchLayer::init(searchType)) {
            return false;
        }

        log::info("LevelSearchLayer initialized!");

        // Find the quick search menu
        auto menu = this->getChildByID("quick-search-menu");
        if (menu) {
            log::info("Found quick-search-menu!");

            // Try to find the "Recent" button using its ID
            auto recentButton = menu->getChildByID("recent-button");
            if (recentButton) {
                log::info("Found recent-button! Removing it...");
                recentButton->removeFromParent();
            }
            else {
                log::info("recent-button not found inside quick-search-menu.");
            }
        }
        else {
            log::info("quick-search-menu not found!");
        }

        return true;
    }
};
