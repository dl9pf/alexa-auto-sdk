/*
 * Copyright 2017-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#include "AACE/Alexa/Alerts.h"

namespace aace {
namespace alexa {

Alerts::Alerts( std::shared_ptr<aace::alexa::MediaPlayer> mediaPlayer, std::shared_ptr<aace::alexa::Speaker> speaker ) : aace::alexa::AudioChannel( mediaPlayer, speaker, aace::alexa::Speaker::Type::LOCAL ) {
}

void Alerts::localStop() {
    if( m_alertsEngineInterface != nullptr ) {
        m_alertsEngineInterface->onLocalStop();
    }
}

void Alerts::removeAllAlerts() {
    if( m_alertsEngineInterface != nullptr ) {
        m_alertsEngineInterface->removeAllAlerts();
    }
}

void Alerts::setEngineInterface( std::shared_ptr<aace::alexa::AlertsEngineInterface> alertsEngineInterface ) {
    m_alertsEngineInterface = alertsEngineInterface;
}

} // aace::alexa
} // aac