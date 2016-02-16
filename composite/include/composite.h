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

#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>
#include "Compoment.h"

class Composite : public Compoment {
public:
	Composite(){};
	virtual ~Composite(){};
	virtual bool operation();
	virtual bool add(Compoment* compoment);
	virtual bool remove(Compoment* compoment);
	virtual Compoment* get_child(unsigned int idx);
protected:
	std::vector<Compoment*> _children;
};


#endif //COMPOSITE_H
