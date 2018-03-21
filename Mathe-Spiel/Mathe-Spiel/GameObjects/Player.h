#pragma once
#include <list>
#include "CardType.h"

class Player
{
public:
	Player();
	~Player();

	std::list<CardType> getCards() { return m_cards; }
	void addCard(CardType);
	void removeCard(CardType);
	void removeCard(int pos);

private:
	std::list<CardType> m_cards;

};

