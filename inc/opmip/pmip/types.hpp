//=============================================================================
// Brief   : Proxy Binding Information
// Authors : Bruno Santos <bsantos@av.it.pt>
// ----------------------------------------------------------------------------
// OPMIP - Open Proxy Mobile IP
//
// Copyright (C) 2010 Universidade de Aveiro
// Copyrigth (C) 2010 Instituto de Telecomunicações - Pólo de Aveiro
//
// This software is distributed under a license. The full license
// agreement can be found in the file LICENSE in this distribution.
// This software may not be copied, modified, sold or distributed
// other than expressed in the named license agreement.
//
// This software is distributed without any warranty.
//=============================================================================

#ifndef OPMIP_PMIP_PROXY_BINDING_INFO__HPP_
#define OPMIP_PMIP_PROXY_BINDING_INFO__HPP_

///////////////////////////////////////////////////////////////////////////////
#include <opmip/base.hpp>
#include <opmip/ip/address.hpp>
#include <opmip/ip/prefix.hpp>
#include <opmip/ll/mac_address.hpp>
#include <opmip/ll/technology.hpp>
#include <opmip/ip/mproto.hpp>
#include <string>
#include <vector>

///////////////////////////////////////////////////////////////////////////////
namespace opmip { namespace pmip {

///////////////////////////////////////////////////////////////////////////////
struct proxy_binding_info {
	proxy_binding_info()
		: lifetime(0), sequence(0),
		  handoff(ip::mproto::option::handoff::k_reserved),
		  status(ip::mproto::pba::status_ok),
		  link_type(ll::k_tech_unknown)
	{ }

	std::string                       id;
	ip::address_v6                    address;
	uint                              lifetime;
	uint16                            sequence;
	ip::mproto::option::handoff::type handoff;
	ip::mproto::pba::status_type      status;
	std::vector<ip::prefix_v6>        prefix_list;
	ll::mac_address                   link_address;
	ll::technology                    link_type;
};

///////////////////////////////////////////////////////////////////////////////
} /* namespace pmip */ } /* namespace opmip */

// EOF ////////////////////////////////////////////////////////////////////////
#endif /* OPMIP_PMIP_MP_RECEIVER__HPP_ */
