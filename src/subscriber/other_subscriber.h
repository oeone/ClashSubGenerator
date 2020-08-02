//
// Created by Kotarou on 2020/3/19.
//

#ifndef CLASHSUBGENERATOR_OTHER_SUBSCRIBER_H
#define CLASHSUBGENERATOR_OTHER_SUBSCRIBER_H

#include "subscriber.h"

class OtherSubscriber : public Subscriber {
public:
    void load(std::string_view uri) final;

private:
    static YAML::Node decode_config(const std::string &config);
};


#endif //CLASHSUBGENERATOR_OTHER_SUBSCRIBER_H
