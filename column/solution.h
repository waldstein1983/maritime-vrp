//  Created by Alberto Santini on 18/09/13.
//  Copyright (c) 2013 Alberto Santini. All rights reserved.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <base/base.h>
#include <base/graph.h>
#include <base/vessel_class.h>

class Solution {
public:
    Path                            path;
    float                           cost;
    float                           reduced_cost;
    std::shared_ptr<VesselClass>    vessel_class;
    std::shared_ptr<const Graph>    g;
    
    Solution() {}
    Solution(const Path path, 
             const float cost,
             const float reduced_cost,
             std::shared_ptr<VesselClass> vessel_class,
             const std::shared_ptr<const Graph> g) : path(path), cost(cost), reduced_cost(reduced_cost), vessel_class(vessel_class), g(g) {}
    
    bool satisfies_capacity_constraints() const;
    bool operator==(const Solution& other) const;
};

#endif