//  Created by Alberto Santini on 18/09/13.
//  Copyright (c) 2013 Alberto Santini. All rights reserved.
//

#ifndef CYCLE_H
#define CYCLE_H

#include <iostream>
#include <memory>
#include <utility>
#include <vector>

#include <base/graph.h>

typedef std::vector<std::pair<Path, const std::shared_ptr<const Graph>>> Cycles;

namespace Cycle {
    Path shortest_cycle(const Path& route, std::shared_ptr<const Graph> g);
    void print_cycle(const Path& cycle, std::shared_ptr<const Graph> g, std::ostream& out = std::cerr);
}

#endif