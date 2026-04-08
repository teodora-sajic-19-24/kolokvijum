FROM gcc:latest
WORKDIR /app
COPY main.c .
RUN gcc main.c -o kolokvijum
CMD ["./kolokvijum"]
