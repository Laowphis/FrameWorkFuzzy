#pragma once
#ifndef COGDEFUZZ_H
#define COGDEFUZZ_H

#include "MamdaniDefuzz.h"

namespace fuzzy{

	template<class T>
	class CogDefuzz : public MamdaniDefuzz<T>{

	public:
		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	T CogDefuzz<T>::evaluate(Expression<T>* l, Expression<T>* r) const{

	}

}

#endif;