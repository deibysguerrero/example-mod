#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(GJBaseGameLayer) {
    void update(float dt) {
        GJBaseGameLayer::update(dt);

        if (m_player1 && m_player1->m_isHolding) {
            this->checkObjectInteractions(m_player1);
        }
        
        if (m_player2 && m_player2->m_isHolding) {
            this->checkObjectInteractions(m_player2);
        }
    }
};

