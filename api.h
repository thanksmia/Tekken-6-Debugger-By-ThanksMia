#define API_H
namespace
	
{

	enum class API {
		None,
		TMAPI,
		CCAPI

	};
	void setAPI(API type, API &api) {
		if (type == API::None || type == API::TMAPI || api == API::CCAPI)
			api = type;
	}
	
}

