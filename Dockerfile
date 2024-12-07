FROM gcc:latest
ARG EXECTORUN
COPY . /app
RUN mkdir /app/build
WORKDIR /app/build
RUN apt-get update && \
	apt-get -y install cmake
RUN cmake -DCMAKE_BUILD_TYPE=Release .. -DADD_EXAMPLES=ON && \
	cmake --build . --parallel $(nproc)
ENV RUNCMD="./${EXECTORUN}"
CMD $RUNCMD

