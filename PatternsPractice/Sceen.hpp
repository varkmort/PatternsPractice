#pragma once

#ifndef SCEEN_HPP
#define SCEEN_HPP

#include "Frames.hpp"
#include "Toys.hpp"

//Объявления класса только как заглушка до реализации
//после реализации данных классов нужно заменить подключениями 
// заголовочников
class Player;
class Panel;

class Sceen {
public:
	struct Action {
		// чем является действие мы можем определить 
		// на этапе определения логики игры
	};
		Sceen() = default;
	Sceen(...);//конструктор с параметрами на совести у разарботчика
			   //если он нужен creator классу то делаем если нет то нет
	void Start();
	void GameCicle();

	Player& GetPlayer();
	Panel& GetPanel();

	//to-do дальнейший перечень публичных и приватных методов должен 
	// исходить из правил игровой логики

private:
	Player player_;
	Panel  panel_;
	// поле schore - либо в классе сцены либо в классе игрока 
	// в зависимости от дальнейших решений
};



#endif // !SCEEN_HPP
