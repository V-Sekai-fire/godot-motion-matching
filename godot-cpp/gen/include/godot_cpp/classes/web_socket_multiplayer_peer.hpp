/**************************************************************************/
/*  web_socket_multiplayer_peer.hpp                                       */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_WEB_SOCKET_MULTIPLAYER_PEER_HPP
#define GODOT_CPP_WEB_SOCKET_MULTIPLAYER_PEER_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class WebSocketPeer;

class WebSocketMultiplayerPeer : public MultiplayerPeer {
	GDEXTENSION_CLASS(WebSocketMultiplayerPeer, MultiplayerPeer)

public:
	Error create_client(const String &p_url, const Ref<TLSOptions> &p_tls_client_options = nullptr);
	Error create_server(int32_t p_port, const String &p_bind_address = "*", const Ref<TLSOptions> &p_tls_server_options = nullptr);
	Ref<WebSocketPeer> get_peer(int32_t p_peer_id) const;
	String get_peer_address(int32_t p_id) const;
	int32_t get_peer_port(int32_t p_id) const;
	PackedStringArray get_supported_protocols() const;
	void set_supported_protocols(const PackedStringArray &p_protocols);
	PackedStringArray get_handshake_headers() const;
	void set_handshake_headers(const PackedStringArray &p_protocols);
	int32_t get_inbound_buffer_size() const;
	void set_inbound_buffer_size(int32_t p_buffer_size);
	int32_t get_outbound_buffer_size() const;
	void set_outbound_buffer_size(int32_t p_buffer_size);
	float get_handshake_timeout() const;
	void set_handshake_timeout(float p_timeout);
	void set_max_queued_packets(int32_t p_max_queued_packets);
	int32_t get_max_queued_packets() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		MultiplayerPeer::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_WEB_SOCKET_MULTIPLAYER_PEER_HPP
