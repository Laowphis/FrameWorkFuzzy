#pragma once
#ifndef VALUEMODEL_H
#define VALUEMODEL_H

#include "Expression.h"

namespace core {

	template<class T>
	class ValueModel :public Expression<T> {

	private:
		T value;

	public:
		T evaluate() const;
		void setValue(const T&);

		ValueModel();
		ValueModel(const T&);
		virtual ~ValueModel{};

	};

	template<class T>
	ValueModel<T>::ValueModel() :value(0) {}

	template <class T>
	ValueModel<T>::ValueModel(const T& value_) : value(value_){}

	template<class T>
	T ValueModel<T>::evaluate() {
		return value;
	}

	template<class T>
	void ValueModel<T>::setValue(const T& v) {
		value = v;
	}



}
#endif 