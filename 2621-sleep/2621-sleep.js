async function sleep(millis) {
    return new Promise(resolve => {
        setTimeout(resolve, millis);
    });
}

// Example usage:
async function example() {
    console.log("Start sleeping");
    await sleep(3000); // Sleep for 3000 milliseconds (3 seconds)
    console.log("Awake!");
}

example();