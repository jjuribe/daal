/* file: implicit_als_train_csr_default_distr_step4_fpt_cpu.cpp */
/*******************************************************************************
* Copyright 2014-2019 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/*
//++
//  Implementation of implicit ALS training functions for distributed computing mode.
//--
*/

#include "implicit_als_train_kernel.h"
#include "implicit_als_train_csr_default_distr_impl.i"
#include "implicit_als_train_dense_default_batch_aux.i"
#include "implicit_als_train_dense_default_batch_impl.i"
#include "implicit_als_train_container.h"

namespace daal
{
namespace algorithms
{
namespace implicit_als
{
namespace training
{
namespace interface1
{
template class DistributedContainer<step4Local,  DAAL_FPTYPE, fastCSR, DAAL_CPU>;
}
namespace internal
{
template class ImplicitALSTrainDistrStep4Kernel<DAAL_FPTYPE, fastCSR, DAAL_CPU>;
}
}
}
}
}
