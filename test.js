function promisifiedFunction(duration) {
    return new Promise(function resolve() {
        setTimeout(() => resolve(), duration);
    })
}

const ans = promisifiedFunction(5000);
ans.then(console.log("HELLOE"))