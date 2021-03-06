// ==================================================================================
// Copyright (c) 2012 HiFi-LoFi
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ==================================================================================

#ifndef _PERSISTENCE_H
#define _PERSISTENCE_H


#include "JuceHeader.h"
#include "Processor.h"


XmlElement* SaveState(const File& irDirectory, const File& unifyLibsDirectory, Processor& processor);
bool LoadState(const File& irDirectory, const File& unifyLibsDirectory, XmlElement& element, Processor& processor);


#endif // Header guard
