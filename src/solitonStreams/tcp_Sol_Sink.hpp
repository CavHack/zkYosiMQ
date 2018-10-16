/**
 *
 * Copyright (c) 2019 Venire Labs Inc All Rights Reserved.
 * author: Karl Whitford & Co.
 *
 * refer to license file for licensing info.
 */

#pragma once

#include<boost/asio.hpp>

#include"solitonStreams/yosi_packet.h"

typedef struct sink_service_s sink_service_t;
typedef struct neighbor_s neighbor_t;

class TCPSink : public std::enable_shared_from_this<tcp_Sol_Sink>{
public:
  TCPSink(sink_service_t* const service, 
	       boost::asio::ip::tcp::socket socket);

  ~TCPSink();
  

public:
  void start();

private:
  void receive();
  bool handlePacket(std::size_t const length);

private:
  sink_service_t *service_;
  neighbor_t* neighbor_;
  boost::asio::ip::tcp::socket socket_;
  yosi_packet_t packet_;
};

class TCPSinkService {
public: 
  TCPSinkService(sink_service_t* const service, 
		boost::asio::io_context&, uint16t const port);;

  ~TCPSinkService();

private:
  void accept();

private:
  sink_service_t* service_;
  boost::asio::ip::tcp::acceptor acceptor_;

};
