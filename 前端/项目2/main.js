new Vue({
    el: '#app',
    data: {
        newTodo: '',
        todos: []
    },
    methods: {
        addTodo() {
            if (this.newTodo.trim()) {
                this.todos.unshift({ 
                    text: this.newTodo.trim(),
                    createdAt: new Date().toISOString()
                });
                this.saveToLocal();
                this.newTodo = '';
            }
        },
        removeTodo(index) {
            this.todos.splice(index, 1);
            this.saveToLocal();
        },
        saveToLocal() {
            localStorage.setItem('todos', JSON.stringify(this.todos));
        }
    },
    mounted() {
        this.todos = JSON.parse(localStorage.getItem('todos') || '[]');
    }
});