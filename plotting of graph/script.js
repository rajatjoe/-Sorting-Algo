function generateCharts() {
    const bubbleSortCtx = document.getElementById('bubbleSortChart').getContext('2d');
    const insertionSortCtx = document.getElementById('insertionSortChart').getContext('2d');
    const selectionSortCtx = document.getElementById('selectionSortChart').getContext('2d');
    const heapSortCtx = document.getElementById('heapSortChart').getContext('2d');
    const mergeSortCtx = document.getElementById('mergeSortChart').getContext('2d');

    const bubbleSortData = {
        labels: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
        datasets: [
            {
                label: 'Best Case (O(n))',
                data: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
                borderColor: 'rgba(75, 192, 192, 1)',
                backgroundColor: 'rgba(75, 192, 192, 0.2)',
                fill: true,
                tension: 0.1
            },
            {
                label: 'Worst Case (O(n^2))',
                data: [100, 400, 900, 1600, 2500, 3600, 4900, 6400, 8100, 10000],
                borderColor: 'rgba(255, 99, 132, 1)',
                backgroundColor: 'rgba(255, 99, 132, 0.2)',
                fill: true,
                tension: 0.1
            }
        ]
    };

    const insertionSortData = {
        labels: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
        datasets: [
            {
                label: 'Best Case (O(n))',
                data: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
                borderColor: 'rgba(153, 102, 255, 1)',
                backgroundColor: 'rgba(153, 102, 255, 0.2)',
                fill: true,
                tension: 0.1
            },
            {
                label: 'Worst Case (O(n^2))',
                data: [100, 400, 900, 1600, 2500, 3600, 4900, 6400, 8100, 10000],
                borderColor: 'rgba(255, 159, 64, 1)',
                backgroundColor: 'rgba(255, 159, 64, 0.2)',
                fill: true,
                tension: 0.1
            }
        ]
    };

    const selectionSortData = {
        labels: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
        datasets: [
            {
                label: 'Best Case (O(n^2))',
                data: [100, 400, 900, 1600, 2500, 3600, 4900, 6400, 8100, 10000],
                borderColor: 'rgba(54, 162, 235, 1)',
                backgroundColor: 'rgba(54, 162, 235, 0.2)',
                fill: true,
                tension: 0.1
            },
            {
                label: 'Worst Case (O(n^2))',
                data: [100, 400, 900, 1600, 2500, 3600, 4900, 6400, 8100, 10000],
                borderColor: 'rgba(255, 206, 86, 1)',
                backgroundColor: 'rgba(255, 206, 86, 0.2)',
                fill: true,
                tension: 0.1
            }
        ]
    };

    const heapSortData = {
        labels: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
        datasets: [
            {
                label: 'Best Case (O(n log n))',
                data: [33, 77, 118, 154, 200, 240, 283, 332, 367, 421],
                borderColor: 'rgba(255, 99, 71, 1)',
                backgroundColor: 'rgba(255, 99, 71, 0.2)',
                fill: true,
                tension: 0.1
            },
            {
                label: 'Worst Case (O(n log n))',
                data: [33, 77, 118, 154, 200, 240, 283, 332, 367, 421],
                borderColor: 'rgba(60, 179, 113, 1)',
                backgroundColor: 'rgba(60, 179, 113, 0.2)',
                fill: true,
                tension: 0.1
            }
        ]
    };

    const mergeSortData = {
        labels: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
        datasets: [
            {
                label: 'Best Case (O(n log n))',
                data: [33, 77, 118, 154, 200, 240, 283, 332, 367, 421],
                borderColor: 'rgba(0, 123, 255, 1)',
                backgroundColor: 'rgba(0, 123, 255, 0.2)',
                fill: true,
                tension: 0.1
            },
            {
                label: 'Worst Case (O(n log n))',
                data: [33, 77, 118, 154, 200, 240, 283, 332, 367, 421],
                borderColor: 'rgba(123, 255, 0, 1)',
                backgroundColor: 'rgba(123, 255, 0, 0.2)',
                fill: true,
                tension: 0.1
            }
        ]
    };

    const bubbleSortConfig = {
        type: 'line',
        data: bubbleSortData,
        options: {
            scales: {
                x: {
                    title: {
                        display: true,
                        text: 'Number of Elements (n)',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    }
                },
                y: {
                    title: {
                        display: true,
                        text: 'Time Complexity',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    },
                    type: 'logarithmic',
                    position: 'left'
                }
            },
            plugins: {
                legend: {
                    labels: {
                        color: '#f5f5f5'
                    }
                }
            }
        }
    };

    const insertionSortConfig = {
        type: 'line',
        data: insertionSortData,
        options: {
            scales: {
                x: {
                    title: {
                        display: true,
                        text: 'Number of Elements (n)',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    }
                },
                y: {
                    title: {
                        display: true,
                        text: 'Time Complexity',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    },
                    type: 'logarithmic',
                    position: 'left'
                }
            },
            plugins: {
                legend: {
                    labels: {
                        color: '#f5f5f5'
                    }
                }
            }
        }
    };

    const selectionSortConfig = {
        type: 'line',
        data: selectionSortData,
        options: {
            scales: {
                x: {
                    title: {
                        display: true,
                        text: 'Number of Elements (n)',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    }
                },
                y: {
                    title: {
                        display: true,
                        text: 'Time Complexity',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    },
                    type: 'logarithmic',
                    position: 'left'
                }
            },
            plugins: {
                legend: {
                    labels: {
                        color: '#f5f5f5'
                    }
                }
            }
        }
    };

    const heapSortConfig = {
        type: 'line',
        data: heapSortData,
        options: {
            scales: {
                x: {
                    title: {
                        display: true,
                        text: 'Number of Elements (n)',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    }
                },
                y: {
                    title: {
                        display: true,
                        text: 'Time Complexity',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    },
                    type: 'logarithmic',
                    position: 'left'
                }
            },
            plugins: {
                legend: {
                    labels: {
                        color: '#f5f5f5'
                    }
                }
            }
        }
    };

    const mergeSortConfig = {
        type: 'line',
        data: mergeSortData,
        options: {
            scales: {
                x: {
                    title: {
                        display: true,
                        text: 'Number of Elements (n)',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    }
                },
                y: {
                    title: {
                        display: true,
                        text: 'Time Complexity',
                        color: '#f5f5f5'
                    },
                    ticks: {
                        color: '#f5f5f5'
                    },
                    type: 'logarithmic',
                    position: 'left'
                }
            },
            plugins: {
                legend: {
                    labels: {
                        color: '#f5f5f5'
                    }
                }
            }
        }
    };

    const bubbleSortChart = new Chart(bubbleSortCtx, bubbleSortConfig);
    const insertionSortChart = new Chart(insertionSortCtx, insertionSortConfig);
    const selectionSortChart = new Chart(selectionSortCtx, selectionSortConfig);
    const heapSortChart = new Chart(heapSortCtx, heapSortConfig);
    const mergeSortChart = new Chart(mergeSortCtx, mergeSortConfig);
}

window.onload = generateCharts;