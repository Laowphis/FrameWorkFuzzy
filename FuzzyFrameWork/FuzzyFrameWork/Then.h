#pragma once
#ifndef THEN_H
#define THEN_H

#include "BinaryExpression.h"

namespace fuzzy{

	template<class T>
	class Then : public core::BinaryExpression<T>{

	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const = 0;
	};

}

#endif;