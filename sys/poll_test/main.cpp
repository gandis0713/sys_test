#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

int main(int argc, char** argv)
{
    auto logger = spdlog::stdout_color_mt("poll_test");
    spdlog::set_default_logger(logger);
    spdlog::set_level(spdlog::level::trace);

    spdlog::debug("poll_test");

    return 0;
}