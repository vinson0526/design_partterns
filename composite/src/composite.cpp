/**
 *
 *  Copyright 2016 vinson0526
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "composite.h"
#include <algorithm>
#include <iostream>

bool Composite::operation() {
	std::cout << "this is a composite!" << std::endl;
	bool ret = true;
	for (auto iter = _children.cbegin(); iter != _children.cend(); ++iter) {
		if (!(*iter)->operation()) {
			ret = false;
		}
	}
	return ret;
}

bool Composite::add(Compoment* compoment) {
	if (_children.end() == std::find(_children.begin(), _children.end(), compoment)) {
		_children.push_back(compoment);
		return true;
	}
	return false;
}

bool Composite::remove(Compoment* compoment) {
	auto iter = std::find(_children.begin(), _children.end(), compoment);
	if (_children.end() != iter) {
		_children.erase(iter);
		return true;
	}
	return false;
}

Compoment* Composite::get_child(unsigned int idx) {
	if (idx >= _children.size()) {
		return nullptr;
	}
	return _children[idx];
}
