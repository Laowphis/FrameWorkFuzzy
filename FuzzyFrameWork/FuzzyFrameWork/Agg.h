#pragma once
#ifndef AGG_H
#define AGG_H

#include "BinaryExpression.h"

namespace fuzzy{

	template<class T>
	class Agg : public core::BinaryExpression<T>{

	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const = 0;
	};

}

#endif;