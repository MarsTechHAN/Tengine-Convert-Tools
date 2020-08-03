/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2019, Open AI Lab
 * Author: bingzhang@openailab.com
 */
#ifndef __BATCHTOSPACEND_HPP__
#define __BATCHTOSPACEND_HPP__

#include "operator.hpp"
#include "batchToSpaceND_param.hpp"

namespace TEngine {

class BatchToSpaceND : public OperatorWithParam<BatchToSpaceND, BatchToSpaceNDParam>
{
public:
    BatchToSpaceND()
    {
        name_ = "BatchToSpaceND";
    }
    BatchToSpaceND(const BatchToSpaceND& src) = default;
    // virtual ~BatchToSpaceND(){}
    void SetSchema(void) override;

    bool InferShape(const std::vector<TEngine::TShape>& ishape, std::vector<TEngine::TShape>& oshape,
                    int layout) override;
};
}    // namespace TEngine

#endif
