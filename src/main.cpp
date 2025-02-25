#include <Geode/modify/LevelSearchLayer.hpp>
using namespace geode::prelude;
class $modify(LevelSearchLayer) {
    bool init(int searchType) {  
        if (!LevelSearchLayer::init(searchType)) return false;
        if (CCNode* recentButton = this->querySelector("quick-search-menu > recent-button")) recentButton->setVisible(false);
        return true;
    }
};