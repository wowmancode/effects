FROM gradle:8.11.1-jdk17 AS build
WORKDIR /src
COPY . .
RUN gradle --no-daemon installDist

FROM eclipse-temurin:17-jre
RUN useradd --system --no-create-home relay
USER relay
COPY --from=build /src/build/install/effect-app-relay /app
ENV PORT=8080
EXPOSE 8080
ENTRYPOINT ["/app/bin/effect-app-relay"]
