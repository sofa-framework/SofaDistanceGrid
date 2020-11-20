/******************************************************************************
*                 SOFA, Simulation Open-Framework Architecture                *
*                    (c) 2006 INRIA, USTL, UJF, CNRS, MGH                     *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include <SofaMeshCollision/BarycentricPenalityContact.inl>
#include <SofaMeshCollision/BarycentricContactMapper.h>
#include <SofaMeshCollision/BarycentricContactMapper.inl>

#include "DistanceGridCollisionModel.h"

namespace sofa
{

namespace component
{

namespace collision
{

using namespace sofa::core::collision;

Creator<Contact::Factory, BarycentricPenalityContact<RigidDistanceGridCollisionModel, RigidDistanceGridCollisionModel> > DistanceGridDistanceGridContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<RigidDistanceGridCollisionModel, PointCollisionModel<sofa::defaulttype::Vec3Types>> > DistanceGridPointContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<RigidDistanceGridCollisionModel, SphereCollisionModel<sofa::defaulttype::Vec3Types>> > DistanceGridSphereContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<RigidDistanceGridCollisionModel, TriangleCollisionModel<sofa::defaulttype::Vec3Types>> > DistanceGridTriangleContactClass("default", true);

Creator<Contact::Factory, BarycentricPenalityContact<FFDDistanceGridCollisionModel, FFDDistanceGridCollisionModel> > FFDDistanceGridContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<FFDDistanceGridCollisionModel, RigidDistanceGridCollisionModel> > FFDDistanceGridRigidDistanceGridContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<FFDDistanceGridCollisionModel, PointCollisionModel<sofa::defaulttype::Vec3Types>> > FFDDistanceGridPointContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<FFDDistanceGridCollisionModel, SphereCollisionModel<sofa::defaulttype::Vec3Types>> > FFDDistanceGridSphereContactClass("default", true);
Creator<Contact::Factory, BarycentricPenalityContact<FFDDistanceGridCollisionModel, TriangleCollisionModel<sofa::defaulttype::Vec3Types>> > FFDDistanceGridTriangleContactClass("default", true);

} // namespace collision

} // namespace component

} // namespace sofa

