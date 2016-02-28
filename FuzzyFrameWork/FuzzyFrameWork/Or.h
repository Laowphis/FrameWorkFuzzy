#pragma once
#ifndef OR_H
#define OR_H

#include "BinaryExpression.h"

namespace fuzzy{

	template<class T>
	class Or : public core::BinaryExpression<T>{

	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const = 0;
	};

}

#endif;