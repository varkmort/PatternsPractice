#pragma once

#ifndef SCEEN_DIRECTOR_HPP
#define	SCEEN_DIRECTOR_HPP

#include "Sceen.hpp"

class SceenDirector {
public:
	SceenDirector() = default;
	SceenDirector(Sceen* product, SceenWorker* worker);
	SceenDirector(SceenWorker* worker);

	void SetWorker(SceenWorker* worker);
	void SetProduct(Sceen* product);

	void Produce() {
		worker_->MakePlate(product_);
		worker_->MakeToys(product_);
		worker_->Checkout(product_);
	}
	Sceen* GetProduced();
	Sceen* ReleaseProduct();

private:
	Sceen* product_;
	//SceenWorker *worker_;
};


#endif // !SCEEN_DIRECTOR_HPP
