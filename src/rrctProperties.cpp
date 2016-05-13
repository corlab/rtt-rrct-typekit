#include "rrct/JointAngles.hpp"
#include "rrctProperties.hpp"
#include <boost/lexical_cast.hpp>
#include <string>

using namespace RRCT;

namespace RTT
{
    void decomposeProperty(const JointAngles& joints, PropertyBag& targetbag)
    {
//        targetbag.setType("KDL.Chain");
//        PropertyBag segment_bag;
//        for(unsigned int i=0;i<chain.getNrOfSegments();i++){
//            decomposeProperty(chain.getSegment(i),segment_bag);
//            targetbag.add(new Property<PropertyBag>("Segment","Segment of the chain",segment_bag));
//        }
    }

    bool composeProperty(const PropertyBag& bag, JointAngles& joints)
    {
//        Chain chain_new;
//        if( bag.getType() =="KDL.Chain"){
//            for(unsigned int i=0;i<bag.size();i++){
//                RTT::base::PropertyBase* segment_bag = bag.getItem(i);
//                if(!segment_bag->ready())
//                    return false;
//                Property<Segment> segment_prop(segment_bag->getName(),
//                                               segment_bag->getDescription());
//                segment_prop.getTypeInfo()->composeType(segment_bag->getDataSource(),
//                                                        segment_prop.getDataSource());
//                chain_new.addSegment(segment_prop.value());
//            }
//            chain = chain_new;
//            return true;
//        }else
            return false;
    }

//    void decomposeProperty(const JntArray& jntarray, PropertyBag& targetbag)
//    {
//        targetbag.setType("KDL.JntArray");
//        for(int i = 0; i < jntarray.data.rows(); i++)
//        {
//          std::string rindx = boost::lexical_cast<std::string>( i );
//          targetbag.add(new Property<double>("Element" + rindx,"JntArray element",jntarray.data(i)));
//        }
//    }
//
//    bool composeProperty(const PropertyBag& bag, JntArray& jntarray)
//    {
//        JntArray jntarray_new(bag.size());
//        if( bag.getType() =="KDL.JntArray"){
//            for(unsigned int i = 0; i < bag.size(); i++){
//                RTT::base::PropertyBase* jntarray_bag = bag.getItem(i);
//                if(!jntarray_bag->ready())
//                    return false;
//                Property<double> jntarray_prop(jntarray_bag->getName(), jntarray_bag->getDescription());
//                jntarray_prop.getTypeInfo()->composeType(jntarray_bag->getDataSource(), jntarray_prop.getDataSource());
//                jntarray_new.data(i) = jntarray_prop.value();
//            }
//            jntarray = jntarray_new;
//            return true;
//        } else
//            return false;
//    }
}
