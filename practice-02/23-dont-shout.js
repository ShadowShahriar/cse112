const readline = require('readline')
const rl = readline.createInterface({ input: process.stdin, output: process.stdout })
rl.question('', main)

function main(input) {
	const output = input
		.split(' ')
		.filter(word => {
			if (word === word.toUpperCase()) return false
			return true
		})
		.join(' ')
	console.log(output)
	rl.close()
}
