
#pragma once


namespace API {
    enum class UpdateNameMsgType : int;
}

namespace API {

    struct UpdateNameMsg {
std::string toString() const;
void fromString(const std::string &str);
        double id;
        std::string name;
        UpdateNameMsgType type = static_cast<UpdateNameMsgType>(0);
    };
}